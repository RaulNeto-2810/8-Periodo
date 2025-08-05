
%option noyywrap nodefault yylineno

%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "calculadora.tab.h"
%}

/* float exponent */
EXP	([Ee][-+]?[0-9]+)

SAIDAS "sair"|"exit"

%%

"("    { return OP; }
")"    { return CP; }

"+"    { return ADD; }
"-"    { return SUB; }

"*"    { return MUL; }
"/"    { return DIV; }

"~"    { return INV; }

[0-9]+"."[0-9]*{EXP}? |
"."?[0-9]+{EXP}? { 
	yylval.d = atof(yytext);
	return NUM;
	}

{SAIDAS} { return FIM; }

\n     { return EOL; }

[ \t]+ { /* ignora espacos em branco*/ }

.      { printf("Caracter invalido: %s\n", yytext); }

%%

