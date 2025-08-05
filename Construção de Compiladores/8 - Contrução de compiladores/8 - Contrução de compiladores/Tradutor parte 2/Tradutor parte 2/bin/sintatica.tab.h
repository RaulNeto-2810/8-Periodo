/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_BIN_SINTATICA_TAB_H_INCLUDED
# define YY_YY_BIN_SINTATICA_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    VLR_STRING = 258,              /* VLR_STRING  */
    VLR_CHARACTER = 259,           /* VLR_CHARACTER  */
    TK_ALGORITMO = 260,            /* TK_ALGORITMO  */
    TK_INICIO = 261,               /* TK_INICIO  */
    TK_FIMALGORITMO = 262,         /* TK_FIMALGORITMO  */
    TK_VAR = 263,                  /* TK_VAR  */
    TK_TIPO_INTEIRO = 264,         /* TK_TIPO_INTEIRO  */
    TK_TIPO_LITERAL = 265,         /* TK_TIPO_LITERAL  */
    TK_TIPO_CARACTER = 266,        /* TK_TIPO_CARACTER  */
    TK_TIPO_LOGICO = 267,          /* TK_TIPO_LOGICO  */
    TK_TIPO_REAL = 268,            /* TK_TIPO_REAL  */
    TK_TIPO_NUMERICO = 269,        /* TK_TIPO_NUMERICO  */
    TK_OP_ATRIB = 270,             /* TK_OP_ATRIB  */
    TK_OP = 271,                   /* TK_OP  */
    TK_CP = 272,                   /* TK_CP  */
    TK_OP_VAR = 273,               /* TK_OP_VAR  */
    TK_VIRGULA = 274,              /* TK_VIRGULA  */
    TK_PONTO_VIRGULA = 275,        /* TK_PONTO_VIRGULA  */
    TK_OP_E = 276,                 /* TK_OP_E  */
    TK_OP_NAO = 277,               /* TK_OP_NAO  */
    TK_OP_OU = 278,                /* TK_OP_OU  */
    TK_OP_XOU = 279,               /* TK_OP_XOU  */
    TK_CONST_FALSO = 280,          /* TK_CONST_FALSO  */
    TK_CONST_VERDADEIRO = 281,     /* TK_CONST_VERDADEIRO  */
    TK_OP_ADD = 282,               /* TK_OP_ADD  */
    TK_OP_SUB = 283,               /* TK_OP_SUB  */
    TK_UMINUS = 284,               /* TK_UMINUS  */
    TK_OP_MUL = 285,               /* TK_OP_MUL  */
    TK_OP_DIV = 286,               /* TK_OP_DIV  */
    TK_OP_DIV_INT = 287,           /* TK_OP_DIV_INT  */
    TK_OP_MOD = 288,               /* TK_OP_MOD  */
    TK_OP_EXP = 289,               /* TK_OP_EXP  */
    TK_OP_GT = 290,                /* TK_OP_GT  */
    TK_OP_GTEQ = 291,              /* TK_OP_GTEQ  */
    TK_OP_LT = 292,                /* TK_OP_LT  */
    TK_OP_LTEQ = 293,              /* TK_OP_LTEQ  */
    TK_OP_EQ = 294,                /* TK_OP_EQ  */
    TK_OP_NOTEQ = 295,             /* TK_OP_NOTEQ  */
    TK_SE = 296,                   /* TK_SE  */
    TK_ENTAO = 297,                /* TK_ENTAO  */
    TK_SENAO = 298,                /* TK_SENAO  */
    TK_FIMSE = 299,                /* TK_FIMSE  */
    TK_ESCOLHA = 300,              /* TK_ESCOLHA  */
    TK_CASO = 301,                 /* TK_CASO  */
    TK_OUTROCASO = 302,            /* TK_OUTROCASO  */
    TK_FIMESCOLHA = 303,           /* TK_FIMESCOLHA  */
    TK_LEIA = 304,                 /* TK_LEIA  */
    TK_ESCREVA = 305,              /* TK_ESCREVA  */
    TK_ESCREVAL = 306,             /* TK_ESCREVAL  */
    TK_ENQUANTO = 307,             /* TK_ENQUANTO  */
    TK_FIMENQUANTO = 308,          /* TK_FIMENQUANTO  */
    TK_REPITA = 309,               /* TK_REPITA  */
    TK_PARA = 310,                 /* TK_PARA  */
    TK_DE = 311,                   /* TK_DE  */
    TK_ATE = 312,                  /* TK_ATE  */
    TK_PASSO = 313,                /* TK_PASSO  */
    TK_FACA = 314,                 /* TK_FACA  */
    TK_FIMPARA = 315,              /* TK_FIMPARA  */
    TK_FUNCAO = 316,               /* TK_FUNCAO  */
    TK_FIMFUNCAO = 317,            /* TK_FIMFUNCAO  */
    TK_RETORNE = 318,              /* TK_RETORNE  */
    TK_INTERROMPA = 319,           /* TK_INTERROMPA  */
    TK_PROCEDIMENTO = 320,         /* TK_PROCEDIMENTO  */
    TK_FIMPROCEDIMENTO = 321,      /* TK_FIMPROCEDIMENTO  */
    TK_SEN = 322,                  /* TK_SEN  */
    TK_COS = 323,                  /* TK_COS  */
    TK_TAN = 324,                  /* TK_TAN  */
    TK_ARCSEN = 325,               /* TK_ARCSEN  */
    TK_ARCCOS = 326,               /* TK_ARCCOS  */
    TK_ARCTAN = 327,               /* TK_ARCTAN  */
    TK_COTAN = 328,                /* TK_COTAN  */
    TK_GRAUPRAD = 329,             /* TK_GRAUPRAD  */
    TK_RADPGRAU = 330,             /* TK_RADPGRAU  */
    TK_EXP = 331,                  /* TK_EXP  */
    TK_RAIZQ = 332,                /* TK_RAIZQ  */
    TK_LOG = 333,                  /* TK_LOG  */
    TK_LOGN = 334,                 /* TK_LOGN  */
    TK_POS = 335,                  /* TK_POS  */
    TK_ASC = 336,                  /* TK_ASC  */
    TK_COMPR = 337,                /* TK_COMPR  */
    TK_COPIA = 338,                /* TK_COPIA  */
    TK_MAIUSC = 339,               /* TK_MAIUSC  */
    TK_MINUSC = 340,               /* TK_MINUSC  */
    TK_NUMPCARAC = 341,            /* TK_NUMPCARAC  */
    TK_ALEATORIO = 342,            /* TK_ALEATORIO  */
    TK_RAND = 343,                 /* TK_RAND  */
    TK_RANDI = 344,                /* TK_RANDI  */
    TK_ABS = 345,                  /* TK_ABS  */
    TK_PI = 346,                   /* TK_PI  */
    TK_QUAD = 347,                 /* TK_QUAD  */
    TK_FUN_INT = 348,              /* TK_FUN_INT  */
    TK_CRONOMETRO = 349,           /* TK_CRONOMETRO  */
    TK_DEBUG = 350,                /* TK_DEBUG  */
    TK_ECO = 351,                  /* TK_ECO  */
    TK_PAUSA = 352,                /* TK_PAUSA  */
    TK_TIMER = 353,                /* TK_TIMER  */
    TK_ARQUIVO = 354,              /* TK_ARQUIVO  */
    TK_MENSAGEM = 355,             /* TK_MENSAGEM  */
    TK_NL = 356,                   /* TK_NL  */
    TK_NUM = 357,                  /* TK_NUM  */
    TK_NUM_INT = 358,              /* TK_NUM_INT  */
    TK_ID = 359                    /* TK_ID  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BIN_SINTATICA_TAB_H_INCLUDED  */
