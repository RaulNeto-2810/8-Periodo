/* Companion source code for "flex & bison", published by O'Reilly
 * Media, ISBN 978-0-596-15597-1
 * Copyright (c) 2009, Taughannock Networks. All rights reserved.
 * See the README file for license conditions and contact info.
 * $Header: /home/johnl/flnb/code/RCS/fb1-3.l,v 2.1 2009/11/08 02:53:18 johnl Exp $
 */

/* recognize tokens for the calculator and print them out */

/* regex para:
* - CPF              EX: 000.000.000-00 
* - CNPJ             EX: 00.000.000/0000-00
* - IPv4             EX: 192.168.12.4
* - CEP              EX: 00.000-000
* - TELEFONE COM DDD EX: (00) 000000-0000
*                        (00) 0 0000-0000
*                        00 00000-0000
*                        00 0 0000-0000
*/

%%

[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\-[0-9]{1,2}  { printf("CPF: %s\n", yytext); }
[0-9]{1,2}\.[0-9]{1,3}\.[0-9]{1,3}\/[0-9]{1,4}\-[0-9]{1,2} { printf("CNPJ: %s\n", yytext); }
[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,2}\.[0-9]   { printf("IPv4: %s\n", yytext); }
[0-9]{1,2}\.[0-9]{1,3}\-[0-9]{1,3} { printf("CEP: %s\n", yytext); }
\([0-9]{1,2}\)[ \s][0-9]{1,5}\-[0-9]{1,4} { printf("Telefone: %s\n", yytext); }
\([0-9]{1,2}\)[ \s][0-9][ \s][0-9]{1,4}\-[0-9]{1,4} { printf("Telefone: %s\n", yytext); }
[0-9]{1,2}[ \s][0-9]{1,5}\-[0-9]{1,4} { printf("Telefone: %s\n", yytext); }
[0-9]{1,2}[ \s][0-9][ \s][0-9]{1,4}\-[0-9]{1,4} { printf("Telefone: %s\n", yytext); }
"sair" {return 0;}

"+"	    { printf("PLUS\n"); }
"-"	    { printf("MINUS\n"); }
"*"	    { printf("TIMES\n"); }
"/"	    { printf("DIVIDE\n"); }
"|"     { printf("ABS\n"); }

[0-9]+	{ printf("NUMBER %s\n", yytext); }

\n      { printf("NEWLINE\n"); }

[ \t]   { }

.	    { printf("Mystery character %s\n", yytext); }

%%

int main(){
    
    printf("Iniciando o analisador léxico\n");
    yylex();

}
