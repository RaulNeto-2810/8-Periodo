%{
   /* incluindo as definicoes de tokens e tipos usados na gramatica da calculadora */
   #include "calculadora.tab.h"
%}

/* definicao de uma macro para uso repetido nas expressoes regulares */
numero          [0-9]+\.?|[0-9]*\.[0-9]+ 

%%

"+"             { printf("[DEBUG] ADD\n");  return ADD;  }
"-"             { printf("[DEBUG] SUB\n");  return SUB;  }
"*"             { printf("[DEBUG] MUL\n");  return MUL;  }
"/"             { printf("[DEBUG] DIV\n");  return DIV;  }
"^"             { printf("[DEBUG] POW\n");  return POW;  }
"("             { printf("[DEBUG] OPAR\n"); return OPAR; }
")"             { printf("[DEBUG] CPAR\n"); return CPAR; }
"!"             { printf("[DEBUG] FAT\n");  return FAT;  }
"%"             { printf("[DEBUG] QUO\n");  return QUO;  }
"//"            { printf("[DEBUG] MOD\n");  return MOD;  }
"[]"            { printf("[DEBUG] ABS\n");  return ABS;  }
">="            { printf("[DEBUG] GE\n"); return GE; }
"<="            { printf("[DEBUG] LE\n"); return LE; }
"=="            { printf("[DEBUG] EQ\n"); return EQ; }
"!="            { printf("[DEBUG] NE\n"); return NE; }
">"             { printf("[DEBUG] REL\n"); return REL; }
"<"             { printf("[DEBUG] REL\n"); return REL; }
sair            { printf("[DEBUG] SAIR\n"); return QUIT; }

{numero}        { yylval = atof(yytext);
                  printf("[DEBUG] %lf\n", yylval); /* apenas para depuracao... */
                  return NUM;
                }

\n       {
   printf("[DEBUG] EOL\n"); /* apenas para depuracao... */
   return EOL;
}

"//".*   {
   /* ignore comments */
}

[ \t]*   {
   /* ignore white spaces */
}

.        {
   printf("Caracter desconhecido: %c\n", *yytext);
}

%%

