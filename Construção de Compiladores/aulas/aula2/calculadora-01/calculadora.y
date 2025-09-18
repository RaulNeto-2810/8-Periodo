
/* inclusao de bibliotecas C-ANSI */
%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <ctype.h>
  #include <math.h>
  
  int is_relational_result = 0;  /* flag para identificar resultado de operação relacional */
%}

/* redefinindo tipo da variavel global yylval (de int para double) */
%define api.value.type { double }     

/* definicao dos tokens */
%token NUM                  /* constante numerica */
%token ADD SUB MUL DIV POW  /* operadores aritméticos básicos */
%token QUO MOD              /* quociente e resto da divisão */
%token FAT                  /* fatorial */
%token GE LE NE GT LT       /* operadores relacionais */
%token EOL                  /* final de linha */
%token OPAR CPAR            /* parenteses */
%token OBRAK CBRAK          /* colchetes para valor absoluto */
%token QUIT                 /* finalizacao do programa */

/* definição de associatividade e nível de precedencia dos operadores */
%left GE LE NE GT LT        /* operadores relacionais - menor precedência */
%left ADD SUB               /* soma e subtração */
%left MUL DIV QUO MOD       /* multiplicação, divisão, quociente e resto */
%right FAT                  /* fatorial - operador pós-fixo com alta precedência */
%right POW                  /* potenciação - maior precedência, associativa à direita */

%% 

CALC: /* do nothing (regra gramatical vazia) */
     | CALC exp EOL    { /* resultado da expressao digitada */ 
                         if (is_relational_result) {
                             printf("= %s\n> ", ($2 == 1.0) ? "T" : "F");
                             is_relational_result = 0;
                         } else {
                             /* Para números decimais, verificar se é inteiro */
                             if ($2 == (int)$2) 
                                 printf("= %.0lf\n> ", $2);
                             else 
                                 printf("= %lf\n> ", $2);
                         }
                       } 
     | CALC EOL        { printf("> "); }            /* usuario pressiona tecla ENTER */
     | CALC QUIT EOL   { return 0; }                /* usuario informa comando de saida da calculadora */
     | error EOL       {                            /* expressao incorreta informada pelo usuario */
                         yyerror("redigite a ultima linha : ");
                         yyerrok; /* recoloca o parser em modo normal de operacao */
                       }
     ;

exp : exp ADD exp     { $$ = $1 + $3; }
    | exp SUB exp     { $$ = $1 - $3; }
    | exp MUL exp     { $$ = $1 * $3; }
    | exp DIV exp     { if ( $3 == 0 ) {
                            yyerror("divisao por zero!\nInforme outro valor : ");
                            yyerrok;
                        } else {
                            $$ = $1 / $3;
                        }
                      }
    | exp QUO exp     { if ( $3 == 0 ) {
                            yyerror("divisao por zero!\nInforme outro valor : ");
                            yyerrok;
                        } else {
                            $$ = (int)$1 / (int)$3;  /* quociente da divisão inteira */
                        }
                      }
    | exp MOD exp     { if ( $3 == 0 ) {
                            yyerror("divisao por zero!\nInforme outro valor : ");
                            yyerrok;
                        } else {
                            $$ = (int)$1 % (int)$3;  /* resto da divisão */
                        }
                      }
    | exp POW exp     { $$ = pow($1, $3); }
    | exp FAT         { /* fatorial - operador pós-fixo */
                        if ($1 < 0 || $1 != (int)$1) {
                            yyerror("fatorial definido apenas para inteiros nao-negativos");
                            yyerrok;
                        } else {
                            int i;
                            int n = (int)$1;
                            $$ = 1;
                            for(i = 1; i <= n; i++) 
                                $$ *= i;
                        }
                      }
    | exp GE exp      { is_relational_result = 1; $$ = ($1 >= $3) ? 1.0 : 0.0; }
    | exp LE exp      { is_relational_result = 1; $$ = ($1 <= $3) ? 1.0 : 0.0; }
    | exp GT exp      { is_relational_result = 1; $$ = ($1 > $3) ? 1.0 : 0.0; }
    | exp LT exp      { is_relational_result = 1; $$ = ($1 < $3) ? 1.0 : 0.0; }
    | exp NE exp      { is_relational_result = 1; $$ = ($1 != $3) ? 1.0 : 0.0; }
    | OBRAK exp CBRAK { $$ = fabs($2); }  /* valor absoluto */
    | SUB exp %prec FAT { $$ = -$2; }    /* menos unário */
    | OPAR exp CPAR   { $$ = $2; }
    | NUM             { $$ = $1; }
    ;

%%

/* Declaração de funções auxiliares */

int main(int argc, char **argv) {
   printf("> ");
   return yyparse();
}

int yyerror(char *s) {
   fprintf(stderr, "error: %s\n", s);
   return 0;
}
