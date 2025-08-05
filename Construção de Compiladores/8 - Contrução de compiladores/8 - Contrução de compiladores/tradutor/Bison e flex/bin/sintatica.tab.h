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
    TK_TIPO_NUMERICO = 268,        /* TK_TIPO_NUMERICO  */
    TK_OP_ATRIB = 269,             /* TK_OP_ATRIB  */
    TK_OP = 270,                   /* TK_OP  */
    TK_CP = 271,                   /* TK_CP  */
    TK_OP_VAR = 272,               /* TK_OP_VAR  */
    TK_VIRGULA = 273,              /* TK_VIRGULA  */
    TK_PONTO_VIRGULA = 274,        /* TK_PONTO_VIRGULA  */
    TK_OP_E = 275,                 /* TK_OP_E  */
    TK_OP_NAO = 276,               /* TK_OP_NAO  */
    TK_OP_OU = 277,                /* TK_OP_OU  */
    TK_OP_XOU = 278,               /* TK_OP_XOU  */
    TK_CONST_FALSO = 279,          /* TK_CONST_FALSO  */
    TK_CONST_VERDADEIRO = 280,     /* TK_CONST_VERDADEIRO  */
    TK_OP_ADD = 281,               /* TK_OP_ADD  */
    TK_OP_SUB = 282,               /* TK_OP_SUB  */
    TK_UMINUS = 283,               /* TK_UMINUS  */
    TK_OP_MUL = 284,               /* TK_OP_MUL  */
    TK_OP_DIV = 285,               /* TK_OP_DIV  */
    TK_OP_DIV_INT = 286,           /* TK_OP_DIV_INT  */
    TK_OP_MOD = 287,               /* TK_OP_MOD  */
    TK_OP_EXP = 288,               /* TK_OP_EXP  */
    TK_OP_GT = 289,                /* TK_OP_GT  */
    TK_OP_GTEQ = 290,              /* TK_OP_GTEQ  */
    TK_OP_LT = 291,                /* TK_OP_LT  */
    TK_OP_LTEQ = 292,              /* TK_OP_LTEQ  */
    TK_OP_EQ = 293,                /* TK_OP_EQ  */
    TK_OP_NOTEQ = 294,             /* TK_OP_NOTEQ  */
    TK_SE = 295,                   /* TK_SE  */
    TK_ENTAO = 296,                /* TK_ENTAO  */
    TK_SENAO = 297,                /* TK_SENAO  */
    TK_FIMSE = 298,                /* TK_FIMSE  */
    TK_ESCOLHA = 299,              /* TK_ESCOLHA  */
    TK_CASO = 300,                 /* TK_CASO  */
    TK_OUTROCASO = 301,            /* TK_OUTROCASO  */
    TK_FIMESCOLHA = 302,           /* TK_FIMESCOLHA  */
    TK_LEIA = 303,                 /* TK_LEIA  */
    TK_ESCREVA = 304,              /* TK_ESCREVA  */
    TK_ESCREVAL = 305,             /* TK_ESCREVAL  */
    TK_ENQUANTO = 306,             /* TK_ENQUANTO  */
    TK_FIMENQUANTO = 307,          /* TK_FIMENQUANTO  */
    TK_REPITA = 308,               /* TK_REPITA  */
    TK_PARA = 309,                 /* TK_PARA  */
    TK_DE = 310,                   /* TK_DE  */
    TK_ATE = 311,                  /* TK_ATE  */
    TK_PASSO = 312,                /* TK_PASSO  */
    TK_FACA = 313,                 /* TK_FACA  */
    TK_FIMPARA = 314,              /* TK_FIMPARA  */
    TK_FUNCAO = 315,               /* TK_FUNCAO  */
    TK_FIMFUNCAO = 316,            /* TK_FIMFUNCAO  */
    TK_RETORNE = 317,              /* TK_RETORNE  */
    TK_INTERROMPA = 318,           /* TK_INTERROMPA  */
    TK_PROCEDIMENTO = 319,         /* TK_PROCEDIMENTO  */
    TK_FIMPROCEDIMENTO = 320,      /* TK_FIMPROCEDIMENTO  */
    TK_SEN = 321,                  /* TK_SEN  */
    TK_COS = 322,                  /* TK_COS  */
    TK_TAN = 323,                  /* TK_TAN  */
    TK_ARCSEN = 324,               /* TK_ARCSEN  */
    TK_ARCCOS = 325,               /* TK_ARCCOS  */
    TK_ARCTAN = 326,               /* TK_ARCTAN  */
    TK_COTAN = 327,                /* TK_COTAN  */
    TK_GRAUPRAD = 328,             /* TK_GRAUPRAD  */
    TK_RADPGRAU = 329,             /* TK_RADPGRAU  */
    TK_EXP = 330,                  /* TK_EXP  */
    TK_RAIZQ = 331,                /* TK_RAIZQ  */
    TK_LOG = 332,                  /* TK_LOG  */
    TK_LOGN = 333,                 /* TK_LOGN  */
    TK_POS = 334,                  /* TK_POS  */
    TK_ASC = 335,                  /* TK_ASC  */
    TK_COMPR = 336,                /* TK_COMPR  */
    TK_COPIA = 337,                /* TK_COPIA  */
    TK_MAIUSC = 338,               /* TK_MAIUSC  */
    TK_MINUSC = 339,               /* TK_MINUSC  */
    TK_NUMPCARAC = 340,            /* TK_NUMPCARAC  */
    TK_ALEATORIO = 341,            /* TK_ALEATORIO  */
    TK_RAND = 342,                 /* TK_RAND  */
    TK_RANDI = 343,                /* TK_RANDI  */
    TK_ABS = 344,                  /* TK_ABS  */
    TK_PI = 345,                   /* TK_PI  */
    TK_QUAD = 346,                 /* TK_QUAD  */
    TK_FUN_INT = 347,              /* TK_FUN_INT  */
    TK_CRONOMETRO = 348,           /* TK_CRONOMETRO  */
    TK_DEBUG = 349,                /* TK_DEBUG  */
    TK_ECO = 350,                  /* TK_ECO  */
    TK_PAUSA = 351,                /* TK_PAUSA  */
    TK_TIMER = 352,                /* TK_TIMER  */
    TK_ARQUIVO = 353,              /* TK_ARQUIVO  */
    TK_MENSAGEM = 354,             /* TK_MENSAGEM  */
    TK_NL = 355,                   /* TK_NL  */
    TK_NUM = 356,                  /* TK_NUM  */
    TK_NUM_INT = 357,              /* TK_NUM_INT  */
    TK_ID = 358                    /* TK_ID  */
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
