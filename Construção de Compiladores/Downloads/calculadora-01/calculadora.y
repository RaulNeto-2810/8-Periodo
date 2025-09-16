
/* inclusao de bibliotecas C-ANSI */
%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <ctype.h>
  #include <math.h>
%}

/* redefinindo tipo da variavel global yylval (de int para double) */
%define api.value.type { double }     

/* definicao dos tokens */
%token NUM                  /* constante numerica */
%token ADD SUB MUL DIV POW  /* operadores */
%token EOL                  /* final de linha */
%token OPAR CPAR            /* parenteses */
%token QUIT                 /* finalizacao do programa */

/* definição de associatividade e nível de precedencia dos operadores */
%left ADD SUB   /* menor precedência */
%left MUL DIV
%left POW      /* maior precedencia */

%% //===========================================================================

CALC: /* do nothing (regra gramatical vazia) */
     | CALC exp EOL    { printf("= %lf\n> ", $2); } /* resultado da expressao digitada */ 
     | CALC EOL        { printf("> "); }            /* usuario pressiona tecla ENTER */
     | CALC QUIT EOL   { return 0; }                /* usuario informa comando de saida da calculadora */
     | error EOL       {                            /* expressao incorreta informada pelo usuario */
                         yyerror("redigite a ultima linha : ");
                         yyerrok; /* recoloca o parser em modo normal de operacao */
                       }
     ;

exp : fator         /* default : $$ = $1 */
    | exp ADD fator   { $$ = $1 + $3; }
    | exp SUB fator   { $$ = $1 - $3; }
    ;

fator: termo       /* default : $$ = $1 */
     | fator MUL termo { $$ = $1 * $3; }
     | fator DIV termo { if ( $3 == 0 ) {
                            yyerror("divisao por zero!\nInforme outro valor : ");
                            yyerrok;
                         } else {
                            $$ = $1 / $3;
                         }
                       }
     | fator POW exp { $$ = pow($1, $3); }
     ;

termo: NUM                 { $$ = $1;  }
     | OPAR exp CPAR       { $$ = $2;  }
     ;

%% //===========================================================================

/* Declaração de funções auxiliares */

int main(int argc, char **argv) {
   printf("> ");
   return yyparse();
}

int yyerror(char *s) {
   fprintf(stderr, "error: %s\n", s);
   return 0;
}


