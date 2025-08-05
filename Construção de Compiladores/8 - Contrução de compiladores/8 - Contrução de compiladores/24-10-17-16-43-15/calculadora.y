/* area de definicoes */
%{
	#include <stdio.h>
	#include <stdlib.h>

  #include "calculadora.h"
%}

%union {
    double d;
    struct ast * a;
}

/* definindo os tokens 
   NUM numeros inteiros e/ou reais 
   ADD adicao
   SUB subtracao
   MUL multiplicacao
   DIV divisao
   EOL final de linha
   OP  abertura de parentesis
   CP  fechamento de parentesis
   INV operador de inversao ( ~ )
*/
%token <d> NUM
%token ADD SUB
%token MUL DIV
%token INV
%token EOL FIM
%token OP CP

%type <a> expr factor termo

/* associatividade de operadores */

%left ADD SUB
%left MUL DIV
%nonassoc INV

%start inputLine

%%

/* area regras gramaticais */

inputLine : /* regra vazia */
     | inputLine expr EOL      { 
          printf("= %g\n> ", eval( $2 ) );
          treefree( $2 );
        }
     | inputLine EOL           { printf("> "); }
     | inputLine FIM EOL       { return 0; }
     ;

expr : factor         /* { $$ = $1; } */
     | expr ADD factor   { $$ = newast( '+', $1, $3 ); }
     | expr SUB factor   { $$ = newast( '-', $1, $3 ); }
     ;  

factor : termo           { $$ = $1; }
     | factor MUL termo  { $$ = newast( '*', $1, $3 ); }
     | factor DIV termo  { $$ = newast( '/', $1, $3 ); }
     ;

termo : NUM              { $$ = newnum( $1 ); }
     | OP expr CP        { $$ = $2; } 
     | INV termo         { $$ = newast( '~', $2, NULL ); }
     ;
%%

/* area de funcoes auxiliares */

int main() {
     printf("> ");
     int r = yyparse();
     printf("Calculadora finalizada com sucesso!\n");
	return r;
}


