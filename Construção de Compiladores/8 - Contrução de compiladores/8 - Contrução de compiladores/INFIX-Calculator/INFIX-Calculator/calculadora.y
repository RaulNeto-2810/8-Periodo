
/* inclusao de bibliotecas C-ANSI */
%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <ctype.h>
  #include <math.h>
  
  long fatorial(long n);
%}


/* redefinindo tipo da variavel global yylval (de int para double) */
/* 
%define api.value.type { double }
*/
%union {
  double d;
}

/* definicao dos tokens */
%token <d> NUM              /* constante numerica */
%token ADD SUB 
%token MUL DIV 
%token POW SQRT             /* operadores */
%token EOL                  /* final de linha */
%token OPAR CPAR            /* parenteses */
%token QUIT                 /* finalizacao do programa */
%token FATORIAL

/* definição de associatividade e nível de precedencia dos operadores */
%left ADD SUB       /* menor precedência */
%left MUL DIV
%right POW 
%right SQRT        
%right FATORIAL     /* maior precedencia */

%type <d> exp fator termo

%start calcline

%%

calcline : 
     | calcline exp EOL    { printf("= %lf\n> ", $2); } /* resultado da expressao digitada */ 
     | calcline EOL        { printf("> "); }            /* usuario pressiona tecla ENTER */
     | calcline QUIT EOL   { return 0; }                /* usuario informa comando de saida da calculadora */
     | error EOL           {                            /* expressao incorreta informada pelo usuario */
                         yyerror("redigite a ultima linha : ");
                         yyerrok; /* recoloca o parser em modo normal de operacao */
     }
     ;

exp : fator         /* default : $$ = $1 */ 
    | exp ADD fator   { $$ = $1 + $3; printf("[DEBUG] soma\n"); } 
    | exp SUB fator   { $$ = $1 - $3; printf("[DEBUG] subtracao\n");} 
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
     | fator POW termo { $$ = pow($1, $3); }
     ;

termo: NUM                 { $$ = $1; }
     | OPAR exp CPAR       { $$ = $2; }
     | SQRT exp            { $$ = sqrt($2);  }
     | NUM FATORIAL        { $$ = fatorial( $1 );  }
     ;

%%

/* Declaração de funções auxiliares */

int main(int argc, char **argv) {
     
     printf(">>>> ");
     
     int r = yyparse();

     printf("Finalizando a calculadora!\n");

     return r;
}

int yyerror(char *s) {
   fprintf(stderr, "error: %s\n", s);
   return 0;
}

long fatorial(long n) {
     
     long f = 1;
     int i;
     for(i = 1; i <= n; i++) {
          f = f * i;
     }
     return f;
}

