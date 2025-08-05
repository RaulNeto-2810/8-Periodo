/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 3 "sintatica.y"

	// ref.: https://en.cppreference.com/w/cpp/language

	#include <iostream>
	#include <string>
	#include <sstream>

	#define DEBUG 1
	int debugMode = 0;

	#define YYSTYPE atributos

	using namespace std;

	int var_temp_qnt;

	struct atributos {
		string label;    /* guarda o valor do elemento da linguagem */
		string traducao; /* guarda a tradução do elemento da linguagem */
	};


	char * curfilename;

	int yylex(void);
	void yyerror(string);
	void printParams(int argc, char* argv[]);

#line 100 "bin/sintatica.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "sintatica.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_VLR_STRING = 3,                 /* VLR_STRING  */
  YYSYMBOL_VLR_CHARACTER = 4,              /* VLR_CHARACTER  */
  YYSYMBOL_TK_ALGORITMO = 5,               /* TK_ALGORITMO  */
  YYSYMBOL_TK_INICIO = 6,                  /* TK_INICIO  */
  YYSYMBOL_TK_FIMALGORITMO = 7,            /* TK_FIMALGORITMO  */
  YYSYMBOL_TK_VAR = 8,                     /* TK_VAR  */
  YYSYMBOL_TK_TIPO_INTEIRO = 9,            /* TK_TIPO_INTEIRO  */
  YYSYMBOL_TK_TIPO_LITERAL = 10,           /* TK_TIPO_LITERAL  */
  YYSYMBOL_TK_TIPO_CARACTER = 11,          /* TK_TIPO_CARACTER  */
  YYSYMBOL_TK_TIPO_LOGICO = 12,            /* TK_TIPO_LOGICO  */
  YYSYMBOL_TK_TIPO_REAL = 13,              /* TK_TIPO_REAL  */
  YYSYMBOL_TK_TIPO_NUMERICO = 14,          /* TK_TIPO_NUMERICO  */
  YYSYMBOL_TK_OP_ATRIB = 15,               /* TK_OP_ATRIB  */
  YYSYMBOL_TK_OP = 16,                     /* TK_OP  */
  YYSYMBOL_TK_CP = 17,                     /* TK_CP  */
  YYSYMBOL_TK_OP_VAR = 18,                 /* TK_OP_VAR  */
  YYSYMBOL_TK_VIRGULA = 19,                /* TK_VIRGULA  */
  YYSYMBOL_TK_PONTO_VIRGULA = 20,          /* TK_PONTO_VIRGULA  */
  YYSYMBOL_TK_OP_E = 21,                   /* TK_OP_E  */
  YYSYMBOL_TK_OP_NAO = 22,                 /* TK_OP_NAO  */
  YYSYMBOL_TK_OP_OU = 23,                  /* TK_OP_OU  */
  YYSYMBOL_TK_OP_XOU = 24,                 /* TK_OP_XOU  */
  YYSYMBOL_TK_CONST_FALSO = 25,            /* TK_CONST_FALSO  */
  YYSYMBOL_TK_CONST_VERDADEIRO = 26,       /* TK_CONST_VERDADEIRO  */
  YYSYMBOL_TK_OP_ADD = 27,                 /* TK_OP_ADD  */
  YYSYMBOL_TK_OP_SUB = 28,                 /* TK_OP_SUB  */
  YYSYMBOL_TK_UMINUS = 29,                 /* TK_UMINUS  */
  YYSYMBOL_TK_OP_MUL = 30,                 /* TK_OP_MUL  */
  YYSYMBOL_TK_OP_DIV = 31,                 /* TK_OP_DIV  */
  YYSYMBOL_TK_OP_DIV_INT = 32,             /* TK_OP_DIV_INT  */
  YYSYMBOL_TK_OP_MOD = 33,                 /* TK_OP_MOD  */
  YYSYMBOL_TK_OP_EXP = 34,                 /* TK_OP_EXP  */
  YYSYMBOL_TK_OP_GT = 35,                  /* TK_OP_GT  */
  YYSYMBOL_TK_OP_GTEQ = 36,                /* TK_OP_GTEQ  */
  YYSYMBOL_TK_OP_LT = 37,                  /* TK_OP_LT  */
  YYSYMBOL_TK_OP_LTEQ = 38,                /* TK_OP_LTEQ  */
  YYSYMBOL_TK_OP_EQ = 39,                  /* TK_OP_EQ  */
  YYSYMBOL_TK_OP_NOTEQ = 40,               /* TK_OP_NOTEQ  */
  YYSYMBOL_TK_SE = 41,                     /* TK_SE  */
  YYSYMBOL_TK_ENTAO = 42,                  /* TK_ENTAO  */
  YYSYMBOL_TK_SENAO = 43,                  /* TK_SENAO  */
  YYSYMBOL_TK_FIMSE = 44,                  /* TK_FIMSE  */
  YYSYMBOL_TK_ESCOLHA = 45,                /* TK_ESCOLHA  */
  YYSYMBOL_TK_CASO = 46,                   /* TK_CASO  */
  YYSYMBOL_TK_OUTROCASO = 47,              /* TK_OUTROCASO  */
  YYSYMBOL_TK_FIMESCOLHA = 48,             /* TK_FIMESCOLHA  */
  YYSYMBOL_TK_LEIA = 49,                   /* TK_LEIA  */
  YYSYMBOL_TK_ESCREVA = 50,                /* TK_ESCREVA  */
  YYSYMBOL_TK_ESCREVAL = 51,               /* TK_ESCREVAL  */
  YYSYMBOL_TK_ENQUANTO = 52,               /* TK_ENQUANTO  */
  YYSYMBOL_TK_FIMENQUANTO = 53,            /* TK_FIMENQUANTO  */
  YYSYMBOL_TK_REPITA = 54,                 /* TK_REPITA  */
  YYSYMBOL_TK_PARA = 55,                   /* TK_PARA  */
  YYSYMBOL_TK_DE = 56,                     /* TK_DE  */
  YYSYMBOL_TK_ATE = 57,                    /* TK_ATE  */
  YYSYMBOL_TK_PASSO = 58,                  /* TK_PASSO  */
  YYSYMBOL_TK_FACA = 59,                   /* TK_FACA  */
  YYSYMBOL_TK_FIMPARA = 60,                /* TK_FIMPARA  */
  YYSYMBOL_TK_FUNCAO = 61,                 /* TK_FUNCAO  */
  YYSYMBOL_TK_FIMFUNCAO = 62,              /* TK_FIMFUNCAO  */
  YYSYMBOL_TK_RETORNE = 63,                /* TK_RETORNE  */
  YYSYMBOL_TK_INTERROMPA = 64,             /* TK_INTERROMPA  */
  YYSYMBOL_TK_PROCEDIMENTO = 65,           /* TK_PROCEDIMENTO  */
  YYSYMBOL_TK_FIMPROCEDIMENTO = 66,        /* TK_FIMPROCEDIMENTO  */
  YYSYMBOL_TK_SEN = 67,                    /* TK_SEN  */
  YYSYMBOL_TK_COS = 68,                    /* TK_COS  */
  YYSYMBOL_TK_TAN = 69,                    /* TK_TAN  */
  YYSYMBOL_TK_ARCSEN = 70,                 /* TK_ARCSEN  */
  YYSYMBOL_TK_ARCCOS = 71,                 /* TK_ARCCOS  */
  YYSYMBOL_TK_ARCTAN = 72,                 /* TK_ARCTAN  */
  YYSYMBOL_TK_COTAN = 73,                  /* TK_COTAN  */
  YYSYMBOL_TK_GRAUPRAD = 74,               /* TK_GRAUPRAD  */
  YYSYMBOL_TK_RADPGRAU = 75,               /* TK_RADPGRAU  */
  YYSYMBOL_TK_EXP = 76,                    /* TK_EXP  */
  YYSYMBOL_TK_RAIZQ = 77,                  /* TK_RAIZQ  */
  YYSYMBOL_TK_LOG = 78,                    /* TK_LOG  */
  YYSYMBOL_TK_LOGN = 79,                   /* TK_LOGN  */
  YYSYMBOL_TK_POS = 80,                    /* TK_POS  */
  YYSYMBOL_TK_ASC = 81,                    /* TK_ASC  */
  YYSYMBOL_TK_COMPR = 82,                  /* TK_COMPR  */
  YYSYMBOL_TK_COPIA = 83,                  /* TK_COPIA  */
  YYSYMBOL_TK_MAIUSC = 84,                 /* TK_MAIUSC  */
  YYSYMBOL_TK_MINUSC = 85,                 /* TK_MINUSC  */
  YYSYMBOL_TK_NUMPCARAC = 86,              /* TK_NUMPCARAC  */
  YYSYMBOL_TK_ALEATORIO = 87,              /* TK_ALEATORIO  */
  YYSYMBOL_TK_RAND = 88,                   /* TK_RAND  */
  YYSYMBOL_TK_RANDI = 89,                  /* TK_RANDI  */
  YYSYMBOL_TK_ABS = 90,                    /* TK_ABS  */
  YYSYMBOL_TK_PI = 91,                     /* TK_PI  */
  YYSYMBOL_TK_QUAD = 92,                   /* TK_QUAD  */
  YYSYMBOL_TK_FUN_INT = 93,                /* TK_FUN_INT  */
  YYSYMBOL_TK_CRONOMETRO = 94,             /* TK_CRONOMETRO  */
  YYSYMBOL_TK_DEBUG = 95,                  /* TK_DEBUG  */
  YYSYMBOL_TK_ECO = 96,                    /* TK_ECO  */
  YYSYMBOL_TK_PAUSA = 97,                  /* TK_PAUSA  */
  YYSYMBOL_TK_TIMER = 98,                  /* TK_TIMER  */
  YYSYMBOL_TK_ARQUIVO = 99,                /* TK_ARQUIVO  */
  YYSYMBOL_TK_MENSAGEM = 100,              /* TK_MENSAGEM  */
  YYSYMBOL_TK_NL = 101,                    /* TK_NL  */
  YYSYMBOL_TK_NUM = 102,                   /* TK_NUM  */
  YYSYMBOL_TK_NUM_INT = 103,               /* TK_NUM_INT  */
  YYSYMBOL_TK_ID = 104,                    /* TK_ID  */
  YYSYMBOL_YYACCEPT = 105,                 /* $accept  */
  YYSYMBOL_programa = 106,                 /* programa  */
  YYSYMBOL_endline = 107,                  /* endline  */
  YYSYMBOL_bloco_var = 108,                /* bloco_var  */
  YYSYMBOL_lstids = 109,                   /* lstids  */
  YYSYMBOL_tipo = 110,                     /* tipo  */
  YYSYMBOL_bloco_subalgo = 111,            /* bloco_subalgo  */
  YYSYMBOL_subalgoritmo = 112,             /* subalgoritmo  */
  YYSYMBOL_auxfuncao = 113,                /* auxfuncao  */
  YYSYMBOL_auxfuncao2 = 114,               /* auxfuncao2  */
  YYSYMBOL_arglist = 115,                  /* arglist  */
  YYSYMBOL_retornofuncao = 116,            /* retornofuncao  */
  YYSYMBOL_comandos = 117,                 /* comandos  */
  YYSYMBOL_comando = 118,                  /* comando  */
  YYSYMBOL_passovariacao = 119,            /* passovariacao  */
  YYSYMBOL_caselist = 120,                 /* caselist  */
  YYSYMBOL_constantlist = 121,             /* constantlist  */
  YYSYMBOL_constant = 122,                 /* constant  */
  YYSYMBOL_explist = 123,                  /* explist  */
  YYSYMBOL_exp = 124,                      /* exp  */
  YYSYMBOL_factor = 125,                   /* factor  */
  YYSYMBOL_term = 126,                     /* term  */
  YYSYMBOL_comandoIO = 127,                /* comandoIO  */
  YYSYMBOL_predefinedFuncions = 128        /* predefinedFuncions  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2566

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  105
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  353

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   359


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   205,   205,   258,   259,   267,   268,   269,   273,   274,
     275,   279,   280,   281,   282,   283,   284,   293,   294,   298,
     306,   312,   313,   317,   318,   321,   322,   323,   324,   330,
     334,   344,   346,   352,   366,   368,   372,   376,   380,   384,
     388,   392,   396,   398,   400,   402,   406,   412,   414,   418,
     424,   432,   442,   444,   454,   455,   456,   457,   458,   459,
     460,   464,   465,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   487,   488,
     489,   490,   491,   492,   496,   497,   498,   499,   500,   504,
     505,   506,   507,   511,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "VLR_STRING",
  "VLR_CHARACTER", "TK_ALGORITMO", "TK_INICIO", "TK_FIMALGORITMO",
  "TK_VAR", "TK_TIPO_INTEIRO", "TK_TIPO_LITERAL", "TK_TIPO_CARACTER",
  "TK_TIPO_LOGICO", "TK_TIPO_REAL", "TK_TIPO_NUMERICO", "TK_OP_ATRIB",
  "TK_OP", "TK_CP", "TK_OP_VAR", "TK_VIRGULA", "TK_PONTO_VIRGULA",
  "TK_OP_E", "TK_OP_NAO", "TK_OP_OU", "TK_OP_XOU", "TK_CONST_FALSO",
  "TK_CONST_VERDADEIRO", "TK_OP_ADD", "TK_OP_SUB", "TK_UMINUS",
  "TK_OP_MUL", "TK_OP_DIV", "TK_OP_DIV_INT", "TK_OP_MOD", "TK_OP_EXP",
  "TK_OP_GT", "TK_OP_GTEQ", "TK_OP_LT", "TK_OP_LTEQ", "TK_OP_EQ",
  "TK_OP_NOTEQ", "TK_SE", "TK_ENTAO", "TK_SENAO", "TK_FIMSE", "TK_ESCOLHA",
  "TK_CASO", "TK_OUTROCASO", "TK_FIMESCOLHA", "TK_LEIA", "TK_ESCREVA",
  "TK_ESCREVAL", "TK_ENQUANTO", "TK_FIMENQUANTO", "TK_REPITA", "TK_PARA",
  "TK_DE", "TK_ATE", "TK_PASSO", "TK_FACA", "TK_FIMPARA", "TK_FUNCAO",
  "TK_FIMFUNCAO", "TK_RETORNE", "TK_INTERROMPA", "TK_PROCEDIMENTO",
  "TK_FIMPROCEDIMENTO", "TK_SEN", "TK_COS", "TK_TAN", "TK_ARCSEN",
  "TK_ARCCOS", "TK_ARCTAN", "TK_COTAN", "TK_GRAUPRAD", "TK_RADPGRAU",
  "TK_EXP", "TK_RAIZQ", "TK_LOG", "TK_LOGN", "TK_POS", "TK_ASC",
  "TK_COMPR", "TK_COPIA", "TK_MAIUSC", "TK_MINUSC", "TK_NUMPCARAC",
  "TK_ALEATORIO", "TK_RAND", "TK_RANDI", "TK_ABS", "TK_PI", "TK_QUAD",
  "TK_FUN_INT", "TK_CRONOMETRO", "TK_DEBUG", "TK_ECO", "TK_PAUSA",
  "TK_TIMER", "TK_ARQUIVO", "TK_MENSAGEM", "TK_NL", "TK_NUM", "TK_NUM_INT",
  "TK_ID", "$accept", "programa", "endline", "bloco_var", "lstids", "tipo",
  "bloco_subalgo", "subalgoritmo", "auxfuncao", "auxfuncao2", "arglist",
  "retornofuncao", "comandos", "comando", "passovariacao", "caselist",
  "constantlist", "constant", "explist", "exp", "factor", "term",
  "comandoIO", "predefinedFuncions", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-280)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-65)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      21,    27,    35,   -62,  -280,   -62,    38,  -280,   -70,   -32,
      -2,   -61,   -62,   -45,   -42,    62,   -32,   166,   -61,  -280,
    -280,    56,    83,    -1,  -280,  -280,  -280,  -280,  -280,  -280,
    -280,   -62,  -280,     0,     0,   -62,   -61,     0,     0,    85,
      93,    94,  1494,  -280,  -280,  -280,   166,   178,    15,  -280,
    -280,  1800,  1800,  -280,  -280,  1800,  1800,     8,   101,   103,
     104,  1800,    20,    18,  1596,  -280,   108,   109,   110,   113,
     114,   116,   117,   118,   119,   121,   125,   142,   144,   157,
     169,   177,   179,   181,   183,   184,  -280,  -280,   185,   186,
    -280,   187,   189,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
    -280,  -280,    71,   -62,   678,   -62,  -280,  2466,  -280,  -280,
     -62,   -62,     0,   166,    81,    38,    38,    79,   381,  -280,
    1616,  -280,  2336,   105,   106,  1800,  1800,   115,  1494,   151,
    -280,    17,  1800,  1800,  1800,  1800,  1800,  1800,  1800,  1800,
    1800,  1800,  1800,  1800,  1800,  1800,  1800,  1800,  1800,  1800,
    1800,  1800,  1800,  1800,  1800,  1800,  1800,  1698,  -280,   -62,
    -280,  -280,  1800,  1800,  1800,  1800,  1800,  1800,  1800,  1800,
    1800,  1800,  1800,  1800,  1800,  1800,  1800,  1800,  -280,  -280,
    -280,   107,  -280,   203,   -62,  1800,  -280,   -62,    42,   194,
     197,  2358,   198,   122,   780,   123,  -280,   405,   429,  1602,
    1704,  1806,  1884,  1908,  1932,  1956,  2380,  1980,  2004,  2028,
    2402,  2052,  2076,  2424,  2100,  2124,  2148,  2172,  2196,  2220,
    2244,  2466,  -280,  -280,   199,    46,   200,  -280,  1616,  2506,
    2526,   132,   132,  2486,  2486,  2486,  2486,  2486,  1718,  1718,
    1718,  1718,  1718,  1718,  -280,   124,   213,  1494,    11,   126,
     176,   -62,   -62,  1800,   -62,  1494,  1800,   172,  -280,  -280,
    -280,  -280,  -280,  -280,  -280,  -280,  -280,  1800,  -280,  -280,
    -280,  1800,  -280,  -280,  1800,  -280,  -280,  -280,  -280,  -280,
    -280,  -280,  -280,    11,  -280,  1494,   -62,   474,  -280,   129,
     214,  1494,  -280,  -280,  -280,  -280,  -280,   882,    43,    -6,
    2268,  2292,  2446,  -280,   170,   -59,  1494,  1494,   -62,   -62,
    1494,   984,   -62,  -280,   180,   180,  -280,  -280,  1800,   133,
     -43,  1086,  1494,  -280,   576,  -280,   -18,   182,   188,  2316,
     -62,   -62,  1188,  -280,   134,  -280,   135,   139,  -280,  -280,
    -280,  -280,  -280,   -62,   -62,  1494,  1494,  1290,  1392,   -62,
     -62,  -280,  -280
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     1,     3,     5,     4,     3,    17,
       0,     8,     3,     0,     0,     0,    17,     0,     8,     6,
       7,     0,     0,     0,    18,    11,    12,    13,    14,    15,
      16,     3,    10,    25,    25,     3,     8,    25,    25,     0,
       0,     0,    31,     9,    28,    27,     0,     0,     0,    57,
      58,    93,    93,    59,    60,    93,    93,     0,     0,     0,
       0,    93,     0,     0,     3,   106,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   121,   117,     0,     0,
     112,     0,     0,   122,   123,   124,   125,   126,   127,   128,
      54,    55,    56,     3,    89,     3,    84,    34,    64,    78,
       3,     3,    25,     0,     0,     5,     5,    56,     0,    88,
      77,    86,     0,     0,     0,    93,    93,     0,    31,     0,
      29,     3,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    44,     3,
      33,    32,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    42,    43,
      26,     0,    22,     0,     3,    93,    85,     3,     0,     0,
       0,    61,     0,     0,    89,     0,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    63,    45,     0,    84,     0,     2,    74,    75,
      76,    66,    67,    79,    80,    82,    81,    83,    70,    71,
      68,    69,    72,    73,    21,     0,     0,    31,     0,     0,
       0,     3,     3,    93,     3,    31,    93,     0,   119,   101,
     120,    96,    95,    97,   102,   104,   115,    93,   116,   107,
     108,    93,    98,    99,    93,   109,   110,   111,   118,    94,
     114,   105,    46,     0,    87,    31,     3,    89,    56,     0,
      52,    31,    41,    92,    90,    62,    91,    89,     0,     0,
       0,     0,     0,    53,     0,     3,    89,    31,     3,     3,
      31,    89,     3,    38,    47,    47,   103,   113,    93,     0,
       3,    89,    31,    35,    89,    37,     0,     0,     0,     0,
       3,     3,    89,    50,     0,    48,     0,     0,   100,    20,
      19,    36,    49,     3,     3,    31,    31,    89,    89,     3,
       3,    39,    40
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -280,  -280,    -3,   -10,    73,   -23,   219,  -280,  -280,  -280,
     -16,  -279,  -124,   -93,   -73,   -81,  -223,  -156,  -113,   218,
       1,  -280,  -280,   -35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,   158,     9,    12,    31,    15,    16,   115,   304,
      40,   103,   104,   105,   327,   250,   224,   106,   226,   107,
     108,   109,   110,   119
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,   225,     7,   -24,   194,    11,   305,   111,    37,    20,
     334,   160,   190,   192,    49,    50,    17,    18,    41,   -23,
      38,    44,    45,   112,   114,   289,     1,   320,    36,    13,
       3,     5,    42,    14,    10,     4,    53,    54,   162,     5,
     163,   164,     5,    10,   165,   166,     8,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,     5,    21,
     303,   130,    22,   -52,   162,   283,   163,   164,    23,   111,
     165,   166,    33,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,    19,   335,   156,   157,   248,   249,
     181,    32,   290,   111,   156,   185,   180,   314,   315,    34,
      35,   160,   161,    46,    39,   183,   184,   178,   179,    43,
      47,    48,   123,   100,   101,   288,   116,   124,     5,   125,
     126,   128,   129,   287,   132,   133,   134,   290,   196,   135,
     136,   297,   137,   138,   139,   140,   162,   141,   163,   164,
     295,   142,   165,   166,   313,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   227,   222,   143,   111,
     144,   306,   167,   168,   169,   170,   171,   311,   233,   234,
     235,   236,   237,   145,   193,    25,    26,    27,    28,    29,
      30,   246,   182,   321,   247,   146,   324,    25,    26,    27,
      28,    29,    30,   147,   160,   148,   113,   149,   332,   150,
     151,   152,   153,   154,   160,   155,   188,   195,   244,   245,
     189,   251,   111,   160,   252,   254,   282,   284,   160,   286,
     111,   347,   348,   255,   292,   285,   257,   291,   160,   299,
     310,   160,   319,   283,   330,    24,   343,   342,   326,   160,
     344,   336,   328,   333,     0,     0,     0,   337,   293,   294,
     111,   296,   111,     0,   160,   160,   111,     0,     0,     0,
       0,     0,   111,     0,     0,     0,     0,     0,     0,   118,
     120,   111,   111,   121,   122,   111,   111,     0,     0,   127,
       0,     0,   131,   307,     0,     0,   111,   111,     0,   111,
       0,     0,     0,     0,     0,     0,     0,   111,     0,     0,
       0,     0,     0,     0,     0,   322,   323,     0,     0,   325,
     111,   111,   111,   111,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   339,   340,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     345,   346,     0,   191,   191,     0,   351,   352,     0,     0,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   191,     0,     0,     0,     0,
     228,   229,   230,   231,   232,   221,   221,   221,   221,   221,
     238,   239,   240,   241,   242,   243,     0,     0,   186,     0,
       0,     0,   162,   191,   163,   164,     0,     0,   165,   166,
       0,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   258,     0,     0,     0,   162,     0,   163,   164,
       0,     0,   165,   166,     0,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   259,     0,     0,     0,
     162,     0,   163,   164,     0,     0,   165,   166,     0,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
       0,   191,     0,     0,   298,     0,     0,    49,    50,     0,
       0,     0,     0,     0,     0,   300,     0,     0,     0,   301,
      51,     0,   302,     0,     0,     0,    52,     0,     0,    53,
      54,     0,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    56,     0,   308,   309,    57,
       0,     0,     0,    58,    59,    60,    61,     0,    62,    63,
       0,     0,     0,     0,     0,     0,   329,    64,    65,     0,
       0,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,     0,   100,   101,   102,    49,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,     0,     0,     0,    52,     0,
       0,    53,    54,     0,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,     0,     0,
       0,    57,   248,   249,     0,    58,    59,    60,    61,     0,
      62,    63,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,     0,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,     0,   100,   101,
     102,    49,    50,     0,     0,   159,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
      52,     0,     0,    53,    54,     0,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    56,
       0,     0,     0,    57,     0,     0,     0,    58,    59,    60,
      61,     0,    62,    63,     0,     0,     0,     0,     0,     0,
       0,    64,    65,     0,     0,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,     0,
     100,   101,   102,    49,    50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,     0,
       0,     0,    52,     0,     0,    53,    54,     0,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    56,     0,     0,     0,    57,     0,     0,     0,    58,
      59,    60,    61,     0,    62,    63,     0,   256,     0,     0,
       0,     0,     0,    64,    65,     0,     0,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,     0,   100,   101,   102,    49,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,     0,     0,     0,    52,     0,     0,    53,    54,     0,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    56,     0,     0,     0,    57,     0,     0,
       0,    58,    59,    60,    61,   312,    62,    63,     0,     0,
       0,     0,     0,     0,     0,    64,    65,     0,     0,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,     0,   100,   101,   102,    49,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,    52,     0,     0,    53,
      54,     0,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    56,     0,     0,     0,    57,
       0,     0,   -51,    58,    59,    60,    61,     0,    62,    63,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
       0,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,     0,   100,   101,   102,    49,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,     0,     0,     0,    52,     0,
       0,    53,    54,     0,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,     0,     0,
       0,    57,     0,     0,     0,    58,    59,    60,    61,     0,
      62,    63,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,   331,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,     0,   100,   101,
     102,    49,    50,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
      52,     0,     0,    53,    54,     0,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    56,
       0,     0,   341,    57,     0,     0,     0,    58,    59,    60,
      61,     0,    62,    63,     0,     0,     0,     0,     0,     0,
       0,    64,    65,     0,     0,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,     0,
     100,   101,   102,    49,    50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,     0,
       0,     0,    52,     0,     0,    53,    54,     0,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    56,     0,     0,     0,    57,     0,     0,     0,    58,
      59,    60,    61,     0,    62,    63,     0,     0,     0,     0,
     349,     0,     0,    64,    65,     0,     0,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,     0,   100,   101,   102,    49,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,     0,     0,     0,    52,     0,     0,    53,    54,     0,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    56,     0,     0,     0,    57,     0,     0,
       0,    58,    59,    60,    61,     0,    62,    63,     0,     0,
       0,     0,   350,     0,     0,    64,    65,     0,     0,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,     0,   100,   101,   102,    49,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,    52,     0,     0,    53,
      54,     0,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    56,     0,     0,     0,    57,
       0,     0,     0,    58,    59,    60,    61,     0,    62,    63,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
       0,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,     0,   100,   101,   102,    49,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,     0,     0,     0,    52,   260,
       0,    53,    54,   162,    55,   163,   164,     0,     0,   165,
     166,     0,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   165,   166,     0,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,     0,     0,     0,
      65,     0,     0,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,     5,   100,   101,
     117,    49,    50,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,   223,     0,     0,     0,     0,
      52,   261,     0,    53,    54,   162,    55,   163,   164,     0,
       0,   165,   166,     0,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   165,   166,     0,   167,   168,
     169,   170,   171,   -65,   -65,   -65,   -65,   -65,   -65,     0,
       0,     0,    65,     0,     0,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,     0,
     100,   101,   117,    49,    50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,     0,
       0,     0,    52,   262,     0,    53,    54,   162,    55,   163,
     164,     0,     0,   165,   166,     0,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     0,     0,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   263,   100,   101,   117,   162,     0,   163,   164,     0,
       0,   165,   166,     0,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   264,     0,     0,     0,   162,
       0,   163,   164,     0,     0,   165,   166,     0,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   265,
       0,     0,     0,   162,     0,   163,   164,     0,     0,   165,
     166,     0,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   266,     0,     0,     0,   162,     0,   163,
     164,     0,     0,   165,   166,     0,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   268,     0,     0,
       0,   162,     0,   163,   164,     0,     0,   165,   166,     0,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   269,     0,     0,     0,   162,     0,   163,   164,     0,
       0,   165,   166,     0,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   270,     0,     0,     0,   162,
       0,   163,   164,     0,     0,   165,   166,     0,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   272,
       0,     0,     0,   162,     0,   163,   164,     0,     0,   165,
     166,     0,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   273,     0,     0,     0,   162,     0,   163,
     164,     0,     0,   165,   166,     0,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   275,     0,     0,
       0,   162,     0,   163,   164,     0,     0,   165,   166,     0,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   276,     0,     0,     0,   162,     0,   163,   164,     0,
       0,   165,   166,     0,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   277,     0,     0,     0,   162,
       0,   163,   164,     0,     0,   165,   166,     0,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   278,
       0,     0,     0,   162,     0,   163,   164,     0,     0,   165,
     166,     0,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   279,     0,     0,     0,   162,     0,   163,
     164,     0,     0,   165,   166,     0,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   280,     0,     0,
       0,   162,     0,   163,   164,     0,     0,   165,   166,     0,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   281,     0,     0,     0,   162,     0,   163,   164,     0,
       0,   165,   166,     0,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   316,     0,     0,     0,   162,
       0,   163,   164,     0,     0,   165,   166,     0,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   317,
       0,     0,     0,   162,     0,   163,   164,     0,     0,   165,
     166,     0,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   338,     0,     0,     0,   162,     0,   163,
     164,     0,     0,   165,   166,     0,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   162,     0,   163,
     164,     0,     0,   165,   166,     0,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   253,   187,   162,
       0,   163,   164,     0,     0,   165,   166,     0,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   267,
       0,   162,     0,   163,   164,     0,     0,   165,   166,     0,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   271,     0,   162,     0,   163,   164,     0,     0,   165,
     166,     0,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   274,     0,   162,     0,   163,   164,     0,
       0,   165,   166,     0,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   318,     0,   162,     0,   163,
     164,     0,     0,   165,   166,     0,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   162,     0,   163,
     164,     0,     0,   165,   166,     0,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   -64,     0,   -64,
     -64,     0,     0,   -64,   -64,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   162,     0,     0,
     164,     0,     0,   165,   166,     0,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   162,     0,     0,
       0,     0,     0,   165,   166,     0,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177
};

static const yytype_int16 yycheck[] =
{
       3,   157,     5,    62,   128,     8,   285,    42,     8,    12,
      28,   104,   125,   126,     3,     4,    18,    19,    34,    62,
      20,    37,    38,    46,    47,   248,     5,   306,    31,    61,
       3,   101,    35,    65,   104,     0,    25,    26,    21,   101,
      23,    24,   101,   104,    27,    28,     8,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,   101,   104,
     283,    64,   104,    17,    21,    19,    23,    24,     6,   104,
      27,    28,    16,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    11,   103,    15,    16,    46,    47,
     113,    18,   248,   128,    15,    16,   112,   103,   104,    16,
     101,   194,   105,    18,   104,   115,   116,   110,   111,    36,
      17,    17,   104,   102,   103,   104,   101,    16,   101,    16,
      16,   101,   104,   247,    16,    16,    16,   283,   131,    16,
      16,   255,    16,    16,    16,    16,    21,    16,    23,    24,
     253,    16,    27,    28,   101,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,   159,   156,    16,   194,
      16,   285,    30,    31,    32,    33,    34,   291,   167,   168,
     169,   170,   171,    16,    59,     9,    10,    11,    12,    13,
      14,   184,   101,   307,   187,    16,   310,     9,    10,    11,
      12,    13,    14,    16,   287,    16,    18,    16,   322,    16,
      16,    16,    16,    16,   297,    16,   101,    56,   101,     6,
     104,    17,   247,   306,    17,    17,    17,    17,   311,     6,
     255,   345,   346,   101,    48,   101,   103,   101,   321,    57,
     101,   324,    62,    19,   101,    16,   101,   103,    58,   332,
     101,    59,   315,   324,    -1,    -1,    -1,    59,   251,   252,
     285,   254,   287,    -1,   347,   348,   291,    -1,    -1,    -1,
      -1,    -1,   297,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,   306,   307,    55,    56,   310,   311,    -1,    -1,    61,
      -1,    -1,    64,   286,    -1,    -1,   321,   322,    -1,   324,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   332,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   308,   309,    -1,    -1,   312,
     345,   346,   347,   348,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   330,   331,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     343,   344,    -1,   125,   126,    -1,   349,   350,    -1,    -1,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,    -1,    -1,    -1,    -1,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,    -1,    -1,    17,    -1,
      -1,    -1,    21,   185,    23,    24,    -1,    -1,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    17,    -1,    -1,    -1,    21,    -1,    23,    24,
      -1,    -1,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    17,    -1,    -1,    -1,
      21,    -1,    23,    24,    -1,    -1,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,   253,    -1,    -1,   256,    -1,    -1,     3,     4,    -1,
      -1,    -1,    -1,    -1,    -1,   267,    -1,    -1,    -1,   271,
      16,    -1,   274,    -1,    -1,    -1,    22,    -1,    -1,    25,
      26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    44,    45,
      -1,    -1,    -1,    49,    50,    51,    52,    -1,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,   318,    63,    64,    -1,
      -1,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    -1,   102,   103,   104,     3,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    22,    -1,
      -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    45,    46,    47,    -1,    49,    50,    51,    52,    -1,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    -1,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    -1,   102,   103,
     104,     3,     4,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,
      22,    -1,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    49,    50,    51,
      52,    -1,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    -1,    -1,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
     102,   103,   104,     3,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,
      -1,    -1,    22,    -1,    -1,    25,    26,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    45,    -1,    -1,    -1,    49,
      50,    51,    52,    -1,    54,    55,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    63,    64,    -1,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    -1,   102,   103,   104,     3,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    22,    -1,    -1,    25,    26,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    -1,   102,   103,   104,     3,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    25,
      26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,
      -1,    -1,    48,    49,    50,    51,    52,    -1,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,
      -1,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    -1,   102,   103,   104,     3,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    22,    -1,
      -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    49,    50,    51,    52,    -1,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    -1,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    -1,   102,   103,
     104,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,
      22,    -1,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    50,    51,
      52,    -1,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    -1,    -1,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
     102,   103,   104,     3,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,
      -1,    -1,    22,    -1,    -1,    25,    26,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    45,    -1,    -1,    -1,    49,
      50,    51,    52,    -1,    54,    55,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    -1,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    -1,   102,   103,   104,     3,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    22,    -1,    -1,    25,    26,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    49,    50,    51,    52,    -1,    54,    55,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    63,    64,    -1,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    -1,   102,   103,   104,     3,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    25,
      26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    49,    50,    51,    52,    -1,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,
      -1,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    -1,   102,   103,   104,     3,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    22,    17,
      -1,    25,    26,    21,    28,    23,    24,    -1,    -1,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      64,    -1,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    -1,
      22,    17,    -1,    25,    26,    21,    28,    23,    24,    -1,
      -1,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    64,    -1,    -1,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
     102,   103,   104,     3,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,
      -1,    -1,    22,    17,    -1,    25,    26,    21,    28,    23,
      24,    -1,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    17,   102,   103,   104,    21,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    17,    -1,    -1,    -1,    21,
      -1,    23,    24,    -1,    -1,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    17,
      -1,    -1,    -1,    21,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    17,    -1,    -1,    -1,    21,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    17,    -1,    -1,
      -1,    21,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    17,    -1,    -1,    -1,    21,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    17,    -1,    -1,    -1,    21,
      -1,    23,    24,    -1,    -1,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    17,
      -1,    -1,    -1,    21,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    17,    -1,    -1,    -1,    21,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    17,    -1,    -1,
      -1,    21,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    17,    -1,    -1,    -1,    21,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    17,    -1,    -1,    -1,    21,
      -1,    23,    24,    -1,    -1,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    17,
      -1,    -1,    -1,    21,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    17,    -1,    -1,    -1,    21,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    17,    -1,    -1,
      -1,    21,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    17,    -1,    -1,    -1,    21,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    17,    -1,    -1,    -1,    21,
      -1,    23,    24,    -1,    -1,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    17,
      -1,    -1,    -1,    21,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    17,    -1,    -1,    -1,    21,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    21,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    19,    42,    21,
      -1,    23,    24,    -1,    -1,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    19,
      -1,    21,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    19,    -1,    21,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    19,    -1,    21,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    19,    -1,    21,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    21,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    21,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    21,    -1,    -1,
      24,    -1,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    21,    -1,    -1,
      -1,    -1,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,   106,     3,     0,   101,   107,   107,     8,   108,
     104,   107,   109,    61,    65,   111,   112,    18,    19,   109,
     107,   104,   104,     6,   111,     9,    10,    11,    12,    13,
      14,   110,   109,    16,    16,   101,   107,     8,    20,   104,
     115,   115,   107,   109,   115,   115,    18,    17,    17,     3,
       4,    16,    22,    25,    26,    28,    41,    45,    49,    50,
      51,    52,    54,    55,    63,    64,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     102,   103,   104,   116,   117,   118,   122,   124,   125,   126,
     127,   128,   110,    18,   110,   113,   101,   104,   124,   128,
     124,   124,   124,   104,    16,    16,    16,   124,   101,   104,
     107,   124,    16,    16,    16,    16,    16,    16,    16,    16,
      16,    16,    16,    16,    16,    16,    16,    16,    16,    16,
      16,    16,    16,    16,    16,    16,    15,    16,   107,     7,
     118,   107,    21,    23,    24,    27,    28,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,   107,   107,
     115,   110,   101,   108,   108,    16,    17,    42,   101,   104,
     123,   124,   123,    59,   117,    56,   107,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   125,    17,   121,   122,   123,   107,   124,   124,
     124,   124,   124,   125,   125,   125,   125,   125,   124,   124,
     124,   124,   124,   124,   101,     6,   107,   107,    46,    47,
     120,    17,    17,    19,    17,   101,    57,   103,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    19,    17,    17,
      17,    19,    17,    17,    19,    17,    17,    17,    17,    17,
      17,    17,    17,    19,    17,   101,     6,   117,   104,   121,
     122,   101,    48,   107,   107,   123,   107,   117,   124,    57,
     124,   124,   124,   121,   114,   116,   117,   107,    43,    44,
     101,   117,    53,   101,   103,   104,    17,    17,    19,    62,
     116,   117,   107,   107,   117,   107,    58,   119,   119,   124,
     101,    66,   117,   120,    28,   103,    59,    59,    17,   107,
     107,    44,   103,   101,   101,   107,   107,   117,   117,    60,
      60,   107,   107
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   105,   106,   107,   107,   108,   108,   108,   109,   109,
     109,   110,   110,   110,   110,   110,   110,   111,   111,   112,
     112,   113,   113,   114,   114,   115,   115,   115,   115,   116,
     116,   117,   117,   117,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   119,   119,   119,
     120,   120,   121,   121,   122,   122,   122,   122,   122,   122,
     122,   123,   123,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   125,   125,
     125,   125,   125,   125,   126,   126,   126,   126,   126,   127,
     127,   127,   127,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,    11,     0,     2,     0,     3,     3,     0,     5,
       3,     1,     1,     1,     1,     1,     1,     0,     2,    13,
      13,     3,     2,     2,     1,     0,     4,     2,     2,     2,
       3,     0,     2,     2,     1,     7,     9,     7,     6,    13,
      13,     5,     2,     2,     2,     3,     4,     0,     2,     3,
       5,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     1,     3,
       3,     3,     3,     3,     1,     3,     2,     4,     1,     0,
       5,     5,     5,     0,     4,     4,     4,     4,     4,     4,
       8,     4,     4,     6,     4,     4,     1,     4,     4,     4,
       4,     4,     1,     6,     4,     4,     4,     1,     4,     4,
       4,     1,     1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* programa: TK_ALGORITMO VLR_STRING endline bloco_var bloco_subalgo TK_INICIO TK_NL endline comandos TK_FIMALGORITMO endline  */
#line 211 "sintatica.y"
        {
		cout << endl
             << "/* Algoritmo: " << yyvsp[-9].label << " */"
             << endl
             << endl
             << "/* translated by: VisuAlg Translator */ \n"
             << "/* author: Getulio de Morais Pereira */ \n"
             << endl
             << endl
             << "#include <iostream>\n"
             << "#include <string.h>\n"
             << "#include <stdlib.h>\n"
             << "#include <stdio.h>\n"
             << "\n"
             << "#define BOOL int\n"
             << "#define True 1\n"
             << "#define False 0\n"
             << "#define STRING char*"
             << endl
             << endl
             << "using namespace std;"
             << endl
             << endl
             << "// ===== definicao de variaveis globais \n"
             << yyvsp[-7].traducao
             << endl
             //<< "// ===== definicao de prototipos de funcoes \n"
             //<< prototipos
             //<< endl
             //<< "// ===== definicao de funcoes \n"
             //<< $6.traducao
             << endl
             << endl
             << "int main(int argc, char * argv[]){"
             //<< declaracoesNull
             << endl
             << yyvsp[-1].traducao
             << endl
             << "   return 0;"
             << endl
             << "}"
             << endl;

	}
#line 1935 "bin/sintatica.tab.c"
    break;

  case 3: /* endline: %empty  */
#line 258 "sintatica.y"
                    { yyval.traducao = ""; }
#line 1941 "bin/sintatica.tab.c"
    break;

  case 4: /* endline: TK_NL endline  */
#line 259 "sintatica.y"
                    { yyval.traducao = yyvsp[0].traducao; }
#line 1947 "bin/sintatica.tab.c"
    break;

  case 5: /* bloco_var: %empty  */
#line 267 "sintatica.y"
                          { yyval.traducao = ""; }
#line 1953 "bin/sintatica.tab.c"
    break;

  case 6: /* bloco_var: TK_VAR endline lstids  */
#line 268 "sintatica.y"
                            { yyval.traducao = yyvsp[0].traducao; }
#line 1959 "bin/sintatica.tab.c"
    break;

  case 7: /* bloco_var: TK_VAR lstids endline  */
#line 269 "sintatica.y"
                            { yyval.traducao = yyvsp[-1].traducao; }
#line 1965 "bin/sintatica.tab.c"
    break;

  case 8: /* lstids: %empty  */
#line 273 "sintatica.y"
                                          { yyval.traducao = ""; }
#line 1971 "bin/sintatica.tab.c"
    break;

  case 9: /* lstids: TK_ID TK_OP_VAR tipo endline lstids  */
#line 274 "sintatica.y"
                                          { yyval.traducao = yyvsp[-2].traducao + " " + yyvsp[-4].label + ";\n" + yyvsp[0].traducao; }
#line 1977 "bin/sintatica.tab.c"
    break;

  case 10: /* lstids: TK_ID TK_VIRGULA lstids  */
#line 275 "sintatica.y"
                                                  { yyval.traducao = yyvsp[-2].label + ", " + yyvsp[0].traducao; }
#line 1983 "bin/sintatica.tab.c"
    break;

  case 11: /* tipo: TK_TIPO_INTEIRO  */
#line 279 "sintatica.y"
                       { yyval.traducao = "int"; }
#line 1989 "bin/sintatica.tab.c"
    break;

  case 12: /* tipo: TK_TIPO_LITERAL  */
#line 280 "sintatica.y"
                       { yyval.traducao = "char *"; }
#line 1995 "bin/sintatica.tab.c"
    break;

  case 13: /* tipo: TK_TIPO_CARACTER  */
#line 281 "sintatica.y"
                       { yyval.traducao = "char"; }
#line 2001 "bin/sintatica.tab.c"
    break;

  case 14: /* tipo: TK_TIPO_LOGICO  */
#line 282 "sintatica.y"
                       { yyval.traducao = "bool"; }
#line 2007 "bin/sintatica.tab.c"
    break;

  case 15: /* tipo: TK_TIPO_REAL  */
#line 283 "sintatica.y"
                       { yyval.traducao = "double"; }
#line 2013 "bin/sintatica.tab.c"
    break;

  case 16: /* tipo: TK_TIPO_NUMERICO  */
#line 284 "sintatica.y"
                       { yyval.traducao = "float"; }
#line 2019 "bin/sintatica.tab.c"
    break;

  case 17: /* bloco_subalgo: %empty  */
#line 293 "sintatica.y"
                                 { yyval.traducao = ""; }
#line 2025 "bin/sintatica.tab.c"
    break;

  case 18: /* bloco_subalgo: subalgoritmo bloco_subalgo  */
#line 294 "sintatica.y"
                                 { yyval.traducao = yyvsp[-1].traducao + yyvsp[0].traducao; }
#line 2031 "bin/sintatica.tab.c"
    break;

  case 19: /* subalgoritmo: TK_PROCEDIMENTO TK_ID TK_OP arglist TK_CP TK_NL bloco_var endline TK_INICIO endline comandos TK_FIMPROCEDIMENTO endline  */
#line 302 "sintatica.y"
                                 { 
        yyval.traducao = "void " + yyvsp[-11].label + "(" + yyvsp[-9].traducao + ") {\n" + yyvsp[-6].traducao + yyvsp[-3].traducao + "\n}\n";
       }
#line 2039 "bin/sintatica.tab.c"
    break;

  case 20: /* subalgoritmo: TK_FUNCAO TK_ID TK_OP arglist TK_CP auxfuncao bloco_var TK_INICIO TK_NL auxfuncao2 TK_FIMFUNCAO TK_NL endline  */
#line 306 "sintatica.y"
                                                                                                                    { 
        yyval.traducao = yyvsp[-7].traducao + " " + yyvsp[-11].label + "(" + yyvsp[-9].traducao + ") {\n" + yyvsp[-6].traducao + yyvsp[-3].traducao + "\n}\n";
    }
#line 2047 "bin/sintatica.tab.c"
    break;

  case 21: /* auxfuncao: TK_OP_VAR tipo TK_NL  */
#line 312 "sintatica.y"
                           { yyval.traducao = yyvsp[-1].traducao; }
#line 2053 "bin/sintatica.tab.c"
    break;

  case 22: /* auxfuncao: tipo TK_NL  */
#line 313 "sintatica.y"
                 { yyval.traducao = yyvsp[-1].traducao; }
#line 2059 "bin/sintatica.tab.c"
    break;

  case 23: /* auxfuncao2: comandos retornofuncao  */
#line 317 "sintatica.y"
                             { yyval.traducao = yyvsp[-1].traducao + yyvsp[0].traducao; }
#line 2065 "bin/sintatica.tab.c"
    break;

  case 24: /* auxfuncao2: retornofuncao  */
#line 318 "sintatica.y"
                    { yyval.traducao = yyvsp[0].traducao; }
#line 2071 "bin/sintatica.tab.c"
    break;

  case 25: /* arglist: %empty  */
#line 321 "sintatica.y"
                                       { yyval.traducao = ""; }
#line 2077 "bin/sintatica.tab.c"
    break;

  case 26: /* arglist: TK_ID TK_OP_VAR tipo arglist  */
#line 322 "sintatica.y"
                                       { yyval.traducao = yyvsp[-1].traducao + " " + yyvsp[-3].label + yyvsp[0].traducao ; }
#line 2083 "bin/sintatica.tab.c"
    break;

  case 27: /* arglist: TK_PONTO_VIRGULA arglist  */
#line 323 "sintatica.y"
                                       { yyval.traducao = ";" + yyvsp[0].traducao;  }
#line 2089 "bin/sintatica.tab.c"
    break;

  case 28: /* arglist: TK_VAR arglist  */
#line 324 "sintatica.y"
                                       { yyval.traducao = "cont" + yyvsp[0].traducao;  }
#line 2095 "bin/sintatica.tab.c"
    break;

  case 29: /* retornofuncao: TK_RETORNE endline  */
#line 330 "sintatica.y"
                       {
    yyval.traducao = "return;";
  }
#line 2103 "bin/sintatica.tab.c"
    break;

  case 30: /* retornofuncao: TK_RETORNE exp endline  */
#line 334 "sintatica.y"
                           {
    yyval.traducao = "return " + yyvsp[-1].traducao + ";";
  }
#line 2111 "bin/sintatica.tab.c"
    break;

  case 31: /* comandos: %empty  */
#line 344 "sintatica.y"
                     { yyval.traducao = ""; }
#line 2117 "bin/sintatica.tab.c"
    break;

  case 32: /* comandos: comando endline  */
#line 346 "sintatica.y"
                    {
    if (yyvsp[-1].traducao != "") {
      yyval.traducao += yyvsp[-1].traducao + "\n";
    }
  }
#line 2127 "bin/sintatica.tab.c"
    break;

  case 33: /* comandos: comandos comando  */
#line 352 "sintatica.y"
                     {
    if (yyvsp[-1].traducao == "" && yyvsp[0].traducao == "") {
      yyval.traducao = "";
    } else if (yyvsp[-1].traducao != "" && yyvsp[0].traducao == "") {
      yyval.traducao += yyvsp[-1].traducao + "\n";
    } else if (yyvsp[-1].traducao == "" && yyvsp[0].traducao != "") {
      yyval.traducao += yyvsp[0].traducao;
    } else {
      yyval.traducao += yyvsp[-1].traducao + "\n" + yyvsp[0].traducao;
    }
  }
#line 2143 "bin/sintatica.tab.c"
    break;

  case 34: /* comando: exp  */
#line 366 "sintatica.y"
        { yyval.traducao = yyvsp[0].traducao; }
#line 2149 "bin/sintatica.tab.c"
    break;

  case 35: /* comando: TK_SE exp TK_ENTAO endline comandos TK_FIMSE endline  */
#line 368 "sintatica.y"
                                                         {
    yyval.traducao = "if (" + yyvsp[-5].traducao + ") {\n" + yyvsp[-3].traducao + "\n}";
  }
#line 2157 "bin/sintatica.tab.c"
    break;

  case 36: /* comando: TK_SE exp TK_ENTAO endline comandos TK_SENAO endline comandos TK_FIMSE  */
#line 372 "sintatica.y"
                                                                           { 
    yyval.traducao = "if (" + yyvsp[-7].traducao + ") {\n" + yyvsp[-5].traducao + "}\nelse{\n" + yyvsp[-3].traducao + "\n}";
  }
#line 2165 "bin/sintatica.tab.c"
    break;

  case 37: /* comando: TK_ENQUANTO exp TK_FACA TK_NL comandos TK_FIMENQUANTO endline  */
#line 376 "sintatica.y"
                                                                  {
    yyval.traducao = "while (" + yyvsp[-5].traducao + ") {\n" + yyvsp[-2].traducao + "\n}";
  }
#line 2173 "bin/sintatica.tab.c"
    break;

  case 38: /* comando: TK_REPITA TK_NL comandos TK_ATE exp TK_NL  */
#line 380 "sintatica.y"
                                              { 
    yyval.traducao = "do {\n" + yyvsp[-3].traducao + "\n} while (" + yyvsp[0].traducao + ");";
  }
#line 2181 "bin/sintatica.tab.c"
    break;

  case 39: /* comando: TK_PARA TK_ID TK_DE TK_NUM_INT TK_ATE TK_NUM_INT passovariacao TK_FACA TK_NL endline comandos TK_FIMPARA endline  */
#line 384 "sintatica.y"
                                                                                                                     {
    yyval.traducao = "for (int " + yyvsp[-11].label + " = " + yyvsp[-9].traducao + "; " + yyvsp[-8].traducao + "; " + yyvsp[-7].traducao + ") {\n" + yyvsp[-5].traducao + "\n}";
  }
#line 2189 "bin/sintatica.tab.c"
    break;

  case 40: /* comando: TK_PARA TK_ID TK_DE TK_NUM_INT TK_ATE TK_ID passovariacao TK_FACA TK_NL endline comandos TK_FIMPARA endline  */
#line 388 "sintatica.y"
                                                                                                                {
    yyval.traducao = "for (int " + yyvsp[-11].label + " = " + yyvsp[-9].traducao + "; " + yyvsp[-8].traducao + "; " + yyvsp[-7].traducao + ") {\n" + yyvsp[-5].traducao + "\n}";
  }
#line 2197 "bin/sintatica.tab.c"
    break;

  case 41: /* comando: TK_ESCOLHA TK_ID TK_NL caselist TK_FIMESCOLHA  */
#line 392 "sintatica.y"
                                                  {
    yyval.traducao = "switch (" + yyvsp[-3].label + ") {\n" + yyvsp[-2].traducao + "\n}\n";
  }
#line 2205 "bin/sintatica.tab.c"
    break;

  case 42: /* comando: comandoIO endline  */
#line 396 "sintatica.y"
                      { yyval.traducao = yyvsp[-1].traducao; }
#line 2211 "bin/sintatica.tab.c"
    break;

  case 43: /* comando: predefinedFuncions endline  */
#line 398 "sintatica.y"
                               { yyval.traducao = yyvsp[-1].traducao; }
#line 2217 "bin/sintatica.tab.c"
    break;

  case 44: /* comando: retornofuncao endline  */
#line 400 "sintatica.y"
                          { yyval.traducao = yyvsp[-1].traducao; }
#line 2223 "bin/sintatica.tab.c"
    break;

  case 45: /* comando: TK_ID TK_OP TK_CP  */
#line 402 "sintatica.y"
                      {
    yyval.traducao = "";
  }
#line 2231 "bin/sintatica.tab.c"
    break;

  case 46: /* comando: TK_ID TK_OP constantlist TK_CP  */
#line 406 "sintatica.y"
                                   {
    yyval.traducao = "printf(\"" + yyvsp[-1].traducao + "\");";
  }
#line 2239 "bin/sintatica.tab.c"
    break;

  case 47: /* passovariacao: %empty  */
#line 412 "sintatica.y"
                { yyval.traducao = ""; }
#line 2245 "bin/sintatica.tab.c"
    break;

  case 48: /* passovariacao: TK_PASSO TK_NUM_INT  */
#line 414 "sintatica.y"
                        {
    yyval.traducao = "++";
  }
#line 2253 "bin/sintatica.tab.c"
    break;

  case 49: /* passovariacao: TK_PASSO TK_OP_SUB TK_NUM_INT  */
#line 418 "sintatica.y"
                                                  {
    yyval.traducao = "--";
  }
#line 2261 "bin/sintatica.tab.c"
    break;

  case 50: /* caselist: TK_CASO constantlist TK_NL comandos caselist  */
#line 424 "sintatica.y"
                                                 {
    if (yyvsp[-2].traducao != "") {
      yyval.traducao += "case " + yyvsp[-4].traducao + ": {\n" + yyvsp[-2].traducao + "\n}\n";
    } else {
      yyval.traducao = "";
    }
  }
#line 2273 "bin/sintatica.tab.c"
    break;

  case 51: /* caselist: TK_OUTROCASO TK_NL comandos  */
#line 432 "sintatica.y"
                                {
    if (yyvsp[-1].traducao != "") {
      yyval.traducao += "default: {\n" + yyvsp[-1].traducao + "\n}\n";
    } else {
      yyval.traducao = "";
    }
  }
#line 2285 "bin/sintatica.tab.c"
    break;

  case 52: /* constantlist: constant  */
#line 442 "sintatica.y"
                                     { yyval.traducao = yyvsp[0].traducao; }
#line 2291 "bin/sintatica.tab.c"
    break;

  case 53: /* constantlist: constant TK_VIRGULA constantlist  */
#line 444 "sintatica.y"
                                     { 
    if (yyvsp[-2].traducao != "") {
      yyval.traducao += ", " + yyvsp[0].traducao;
    } else {
      yyval.traducao = yyvsp[0].traducao;
    }
  }
#line 2303 "bin/sintatica.tab.c"
    break;

  case 54: /* constant: TK_NUM  */
#line 454 "sintatica.y"
                                        { yyval.traducao = yyvsp[0].traducao; }
#line 2309 "bin/sintatica.tab.c"
    break;

  case 55: /* constant: TK_NUM_INT  */
#line 455 "sintatica.y"
                                        { yyval.traducao = yyvsp[0].traducao; }
#line 2315 "bin/sintatica.tab.c"
    break;

  case 56: /* constant: TK_ID  */
#line 456 "sintatica.y"
                                        { yyval.traducao = yyvsp[0].label; }
#line 2321 "bin/sintatica.tab.c"
    break;

  case 57: /* constant: VLR_STRING  */
#line 457 "sintatica.y"
                                        { yyval.traducao = "\"" + yyvsp[0].label + "\""; }
#line 2327 "bin/sintatica.tab.c"
    break;

  case 58: /* constant: VLR_CHARACTER  */
#line 458 "sintatica.y"
                                        { yyval.traducao = "'" + yyvsp[0].label + "'"; }
#line 2333 "bin/sintatica.tab.c"
    break;

  case 59: /* constant: TK_CONST_FALSO  */
#line 459 "sintatica.y"
                                        { yyval.traducao = "0"; }
#line 2339 "bin/sintatica.tab.c"
    break;

  case 60: /* constant: TK_CONST_VERDADEIRO  */
#line 460 "sintatica.y"
                                        { yyval.traducao = "1"; }
#line 2345 "bin/sintatica.tab.c"
    break;

  case 61: /* explist: exp  */
#line 464 "sintatica.y"
                             { yyval.traducao = yyvsp[0].traducao; }
#line 2351 "bin/sintatica.tab.c"
    break;

  case 62: /* explist: exp TK_VIRGULA explist  */
#line 465 "sintatica.y"
                             { yyval.traducao = yyvsp[-2].traducao + ", " + yyvsp[0].traducao; }
#line 2357 "bin/sintatica.tab.c"
    break;

  case 63: /* exp: TK_ID TK_OP_ATRIB factor  */
#line 469 "sintatica.y"
                                                  { yyval.traducao = yyvsp[-2].label + " = " + yyvsp[0].traducao; }
#line 2363 "bin/sintatica.tab.c"
    break;

  case 64: /* exp: factor  */
#line 470 "sintatica.y"
             { yyval.traducao = yyvsp[0].traducao; }
#line 2369 "bin/sintatica.tab.c"
    break;

  case 65: /* exp: TK_ID  */
#line 471 "sintatica.y"
            { yyval.traducao = yyvsp[0].label; }
#line 2375 "bin/sintatica.tab.c"
    break;

  case 66: /* exp: exp TK_OP_ADD exp  */
#line 472 "sintatica.y"
                            { yyval.traducao = yyvsp[-2].traducao + " + " + yyvsp[0].traducao; }
#line 2381 "bin/sintatica.tab.c"
    break;

  case 67: /* exp: exp TK_OP_SUB exp  */
#line 473 "sintatica.y"
                            { yyval.traducao = yyvsp[-2].traducao + " - " + yyvsp[0].traducao; }
#line 2387 "bin/sintatica.tab.c"
    break;

  case 68: /* exp: exp TK_OP_LT exp  */
#line 474 "sintatica.y"
                            { yyval.traducao = yyvsp[-2].traducao + " < " + yyvsp[0].traducao; }
#line 2393 "bin/sintatica.tab.c"
    break;

  case 69: /* exp: exp TK_OP_LTEQ exp  */
#line 475 "sintatica.y"
                            { yyval.traducao = yyvsp[-2].traducao + " <= " + yyvsp[0].traducao; }
#line 2399 "bin/sintatica.tab.c"
    break;

  case 70: /* exp: exp TK_OP_GT exp  */
#line 476 "sintatica.y"
                            { yyval.traducao = yyvsp[-2].traducao + " > " + yyvsp[0].traducao; }
#line 2405 "bin/sintatica.tab.c"
    break;

  case 71: /* exp: exp TK_OP_GTEQ exp  */
#line 477 "sintatica.y"
                            { yyval.traducao = yyvsp[-2].traducao + " >= " + yyvsp[0].traducao; }
#line 2411 "bin/sintatica.tab.c"
    break;

  case 72: /* exp: exp TK_OP_EQ exp  */
#line 478 "sintatica.y"
                            { yyval.traducao = yyvsp[-2].traducao + " == " + yyvsp[0].traducao; }
#line 2417 "bin/sintatica.tab.c"
    break;

  case 73: /* exp: exp TK_OP_NOTEQ exp  */
#line 479 "sintatica.y"
                            { yyval.traducao = yyvsp[-2].traducao + " != " + yyvsp[0].traducao; }
#line 2423 "bin/sintatica.tab.c"
    break;

  case 74: /* exp: exp TK_OP_E exp  */
#line 480 "sintatica.y"
                            { yyval.traducao = yyvsp[-2].traducao + " && " + yyvsp[0].traducao; }
#line 2429 "bin/sintatica.tab.c"
    break;

  case 75: /* exp: exp TK_OP_OU exp  */
#line 481 "sintatica.y"
                            { yyval.traducao = yyvsp[-2].traducao + " || " + yyvsp[0].traducao; }
#line 2435 "bin/sintatica.tab.c"
    break;

  case 76: /* exp: exp TK_OP_XOU exp  */
#line 482 "sintatica.y"
                            { yyval.traducao = yyvsp[-2].traducao + " ^ " + yyvsp[0].traducao; }
#line 2441 "bin/sintatica.tab.c"
    break;

  case 77: /* exp: TK_OP_NAO exp  */
#line 483 "sintatica.y"
                            { yyval.traducao = "!" + yyvsp[0].traducao; }
#line 2447 "bin/sintatica.tab.c"
    break;

  case 78: /* factor: term  */
#line 487 "sintatica.y"
           { yyval.traducao = yyvsp[0].traducao; }
#line 2453 "bin/sintatica.tab.c"
    break;

  case 79: /* factor: exp TK_OP_MUL factor  */
#line 488 "sintatica.y"
                               { yyval.traducao = yyvsp[-2].traducao + " * " + yyvsp[0].traducao; }
#line 2459 "bin/sintatica.tab.c"
    break;

  case 80: /* factor: exp TK_OP_DIV factor  */
#line 489 "sintatica.y"
                               { yyval.traducao = yyvsp[-2].traducao + " / " + yyvsp[0].traducao; }
#line 2465 "bin/sintatica.tab.c"
    break;

  case 81: /* factor: exp TK_OP_MOD factor  */
#line 490 "sintatica.y"
                               { yyval.traducao = yyvsp[-2].traducao + " % " + yyvsp[0].traducao; }
#line 2471 "bin/sintatica.tab.c"
    break;

  case 82: /* factor: exp TK_OP_DIV_INT factor  */
#line 491 "sintatica.y"
                               { yyval.traducao = "(int)(" + yyvsp[-2].traducao + " / " + yyvsp[0].traducao + ")"; }
#line 2477 "bin/sintatica.tab.c"
    break;

  case 83: /* factor: exp TK_OP_EXP factor  */
#line 492 "sintatica.y"
                               { yyval.traducao = "pow(" + yyvsp[-2].traducao + ", " + yyvsp[0].traducao + ")"; }
#line 2483 "bin/sintatica.tab.c"
    break;

  case 84: /* term: constant  */
#line 496 "sintatica.y"
                                    { yyval.traducao = yyvsp[0].traducao; }
#line 2489 "bin/sintatica.tab.c"
    break;

  case 85: /* term: TK_OP exp TK_CP  */
#line 497 "sintatica.y"
                                    { yyval.traducao = "(" + yyvsp[-1].traducao + ")"; }
#line 2495 "bin/sintatica.tab.c"
    break;

  case 86: /* term: TK_OP_SUB exp  */
#line 498 "sintatica.y"
                                    { yyval.traducao = "-" + yyvsp[0].traducao; }
#line 2501 "bin/sintatica.tab.c"
    break;

  case 87: /* term: TK_ID TK_OP explist TK_CP  */
#line 499 "sintatica.y"
                                    { yyval.traducao = yyvsp[-3].label + "(" + yyvsp[-1].traducao + ")"; }
#line 2507 "bin/sintatica.tab.c"
    break;

  case 88: /* term: predefinedFuncions  */
#line 500 "sintatica.y"
                                    { yyval.traducao = yyvsp[0].traducao; }
#line 2513 "bin/sintatica.tab.c"
    break;

  case 89: /* comandoIO: %empty  */
#line 504 "sintatica.y"
                                              { yyval.traducao = ""; }
#line 2519 "bin/sintatica.tab.c"
    break;

  case 90: /* comandoIO: TK_ESCREVA TK_OP explist TK_CP endline  */
#line 505 "sintatica.y"
                                              { yyval.traducao = "printf(" + yyvsp[-2].traducao + ");"; }
#line 2525 "bin/sintatica.tab.c"
    break;

  case 91: /* comandoIO: TK_ESCREVAL TK_OP explist TK_CP endline  */
#line 506 "sintatica.y"
                                              { yyval.traducao = "printf(" + yyvsp[-2].traducao + "\\n);"; }
#line 2531 "bin/sintatica.tab.c"
    break;

  case 92: /* comandoIO: TK_LEIA TK_OP TK_ID TK_CP endline  */
#line 507 "sintatica.y"
                                              { yyval.traducao = "scanf(\"%d\", &" + yyvsp[-2].label + ");"; }
#line 2537 "bin/sintatica.tab.c"
    break;

  case 93: /* predefinedFuncions: %empty  */
#line 511 "sintatica.y"
                                                             { yyval.traducao = ""; }
#line 2543 "bin/sintatica.tab.c"
    break;

  case 94: /* predefinedFuncions: TK_ABS TK_OP exp TK_CP  */
#line 512 "sintatica.y"
                                                             { yyval.traducao = "abs(" + yyvsp[-1].traducao + ")"; }
#line 2549 "bin/sintatica.tab.c"
    break;

  case 95: /* predefinedFuncions: TK_ARCCOS TK_OP exp TK_CP  */
#line 513 "sintatica.y"
                                                             { yyval.traducao = "acos(" + yyvsp[-1].traducao + ")"; }
#line 2555 "bin/sintatica.tab.c"
    break;

  case 96: /* predefinedFuncions: TK_ARCSEN TK_OP exp TK_CP  */
#line 514 "sintatica.y"
                                                             { yyval.traducao = "asin(" + yyvsp[-1].traducao + ")"; }
#line 2561 "bin/sintatica.tab.c"
    break;

  case 97: /* predefinedFuncions: TK_ARCTAN TK_OP exp TK_CP  */
#line 515 "sintatica.y"
                                                             { yyval.traducao = "atan(" + yyvsp[-1].traducao + ")"; }
#line 2567 "bin/sintatica.tab.c"
    break;

  case 98: /* predefinedFuncions: TK_ASC TK_OP exp TK_CP  */
#line 516 "sintatica.y"
                                                             { yyval.traducao = "(int)(" + yyvsp[-1].traducao + ")"; }
#line 2573 "bin/sintatica.tab.c"
    break;

  case 99: /* predefinedFuncions: TK_COMPR TK_OP exp TK_CP  */
#line 517 "sintatica.y"
                                                             { yyval.traducao = "strlen(" + yyvsp[-1].traducao + ")"; }
#line 2579 "bin/sintatica.tab.c"
    break;

  case 100: /* predefinedFuncions: TK_COPIA TK_OP exp TK_VIRGULA exp TK_VIRGULA exp TK_CP  */
#line 518 "sintatica.y"
                                                             { yyval.traducao = "strncpy(" + yyvsp[-5].traducao + ", " + yyvsp[-3].traducao + ", " + yyvsp[-1].traducao + ")"; }
#line 2585 "bin/sintatica.tab.c"
    break;

  case 101: /* predefinedFuncions: TK_COS TK_OP exp TK_CP  */
#line 519 "sintatica.y"
                                                             { yyval.traducao = "cos(" + yyvsp[-1].traducao + ")"; }
#line 2591 "bin/sintatica.tab.c"
    break;

  case 102: /* predefinedFuncions: TK_COTAN TK_OP exp TK_CP  */
#line 520 "sintatica.y"
                                                             { yyval.traducao = "(1 / tan(" + yyvsp[-1].traducao + "))"; }
#line 2597 "bin/sintatica.tab.c"
    break;

  case 103: /* predefinedFuncions: TK_EXP TK_OP exp TK_VIRGULA exp TK_CP  */
#line 521 "sintatica.y"
                                                             { yyval.traducao = "pow(" + yyvsp[-3].traducao + ", " + yyvsp[-1].traducao + ")"; }
#line 2603 "bin/sintatica.tab.c"
    break;

  case 104: /* predefinedFuncions: TK_GRAUPRAD TK_OP exp TK_CP  */
#line 522 "sintatica.y"
                                                             { yyval.traducao = "(" + yyvsp[-1].traducao + " * M_PI / 180.0)"; }
#line 2609 "bin/sintatica.tab.c"
    break;

  case 105: /* predefinedFuncions: TK_FUN_INT TK_OP exp TK_CP  */
#line 523 "sintatica.y"
                                                             { yyval.traducao = "(int)(" + yyvsp[-1].traducao + ")"; }
#line 2615 "bin/sintatica.tab.c"
    break;

  case 106: /* predefinedFuncions: TK_INTERROMPA  */
#line 524 "sintatica.y"
                                                             { yyval.traducao = "break"; }
#line 2621 "bin/sintatica.tab.c"
    break;

  case 107: /* predefinedFuncions: TK_LOG TK_OP exp TK_CP  */
#line 525 "sintatica.y"
                                                             { yyval.traducao = "log10(" + yyvsp[-1].traducao + ")"; }
#line 2627 "bin/sintatica.tab.c"
    break;

  case 108: /* predefinedFuncions: TK_LOGN TK_OP exp TK_CP  */
#line 526 "sintatica.y"
                                                             { yyval.traducao = "log(" + yyvsp[-1].traducao + ")"; }
#line 2633 "bin/sintatica.tab.c"
    break;

  case 109: /* predefinedFuncions: TK_MAIUSC TK_OP exp TK_CP  */
#line 527 "sintatica.y"
                                                             { yyval.traducao = "toupper(" + yyvsp[-1].traducao + ")"; }
#line 2639 "bin/sintatica.tab.c"
    break;

  case 110: /* predefinedFuncions: TK_MINUSC TK_OP exp TK_CP  */
#line 528 "sintatica.y"
                                                             { yyval.traducao = "tolower(" + yyvsp[-1].traducao + ")"; }
#line 2645 "bin/sintatica.tab.c"
    break;

  case 111: /* predefinedFuncions: TK_NUMPCARAC TK_OP exp TK_CP  */
#line 529 "sintatica.y"
                                                             { yyval.traducao = "sprintf(temp, \"%d\", " + yyvsp[-1].traducao + ")"; }
#line 2651 "bin/sintatica.tab.c"
    break;

  case 112: /* predefinedFuncions: TK_PI  */
#line 530 "sintatica.y"
                                                                 {
 		double pi = 3.14159265358979323846; 
 		std::string s = "";
		s = std::to_string( pi );
 		yyval.traducao = s; }
#line 2661 "bin/sintatica.tab.c"
    break;

  case 113: /* predefinedFuncions: TK_POS TK_OP exp TK_VIRGULA exp TK_CP  */
#line 536 "sintatica.y"
                                                             { yyval.traducao = "strchr(" + yyvsp[-3].traducao + ", " + yyvsp[-1].traducao + ")"; }
#line 2667 "bin/sintatica.tab.c"
    break;

  case 114: /* predefinedFuncions: TK_QUAD TK_OP exp TK_CP  */
#line 537 "sintatica.y"
                                                             { yyval.traducao = "pow(" + yyvsp[-1].traducao + ", 2)"; }
#line 2673 "bin/sintatica.tab.c"
    break;

  case 115: /* predefinedFuncions: TK_RADPGRAU TK_OP exp TK_CP  */
#line 538 "sintatica.y"
                                                             { yyval.traducao = "(" + yyvsp[-1].traducao + " * 180.0 / M_PI)"; }
#line 2679 "bin/sintatica.tab.c"
    break;

  case 116: /* predefinedFuncions: TK_RAIZQ TK_OP exp TK_CP  */
#line 539 "sintatica.y"
                                                             { yyval.traducao = "sqrt(" + yyvsp[-1].traducao + ")"; }
#line 2685 "bin/sintatica.tab.c"
    break;

  case 117: /* predefinedFuncions: TK_RAND  */
#line 540 "sintatica.y"
                                                             { yyval.traducao = "rand()"; }
#line 2691 "bin/sintatica.tab.c"
    break;

  case 118: /* predefinedFuncions: TK_RANDI TK_OP exp TK_CP  */
#line 541 "sintatica.y"
                                                             { yyval.traducao = "(rand() % " + yyvsp[-1].traducao + ")"; }
#line 2697 "bin/sintatica.tab.c"
    break;

  case 119: /* predefinedFuncions: TK_SEN TK_OP exp TK_CP  */
#line 542 "sintatica.y"
                                                             { yyval.traducao = "sin(" + yyvsp[-1].traducao + ")"; }
#line 2703 "bin/sintatica.tab.c"
    break;

  case 120: /* predefinedFuncions: TK_TAN TK_OP exp TK_CP  */
#line 543 "sintatica.y"
                                                             { yyval.traducao = "tan(" + yyvsp[-1].traducao + ")"; }
#line 2709 "bin/sintatica.tab.c"
    break;

  case 121: /* predefinedFuncions: TK_ALEATORIO  */
#line 544 "sintatica.y"
                                                             { yyval.traducao = "srand(time(NULL))"; }
#line 2715 "bin/sintatica.tab.c"
    break;

  case 122: /* predefinedFuncions: TK_CRONOMETRO  */
#line 545 "sintatica.y"
                                                             { yyval.traducao = "clock()"; }
#line 2721 "bin/sintatica.tab.c"
    break;

  case 123: /* predefinedFuncions: TK_DEBUG  */
#line 546 "sintatica.y"
                                                             { yyval.traducao = "// Debug function not implemented"; }
#line 2727 "bin/sintatica.tab.c"
    break;

  case 124: /* predefinedFuncions: TK_ECO  */
#line 547 "sintatica.y"
                                                             { yyval.traducao = "// Echo function not implemented"; }
#line 2733 "bin/sintatica.tab.c"
    break;

  case 125: /* predefinedFuncions: TK_PAUSA  */
#line 548 "sintatica.y"
                                                             { yyval.traducao = "getchar()"; }
#line 2739 "bin/sintatica.tab.c"
    break;

  case 126: /* predefinedFuncions: TK_TIMER  */
#line 549 "sintatica.y"
                                                             { yyval.traducao = "time(NULL)"; }
#line 2745 "bin/sintatica.tab.c"
    break;

  case 127: /* predefinedFuncions: TK_ARQUIVO  */
#line 550 "sintatica.y"
                                                             { yyval.traducao = "// File handling not implemented"; }
#line 2751 "bin/sintatica.tab.c"
    break;

  case 128: /* predefinedFuncions: TK_MENSAGEM  */
#line 551 "sintatica.y"
                                                             { yyval.traducao = "// Message function not implemented"; }
#line 2757 "bin/sintatica.tab.c"
    break;


#line 2761 "bin/sintatica.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 555 "sintatica.y"


#include "lex.yy.c"
#include <fstream>

int yyparse();

int main(int argc, char* argv[]) {
    
	cout << "\n entrando no tradutor....\n" << endl;
	
	if (argc < 1) {
        printf("Uso: %s <arquivo de entrada>\n", argv[0]);
        return 1;
    }

	printf("[DEBUG] mostrando os parametros....\n");
	printParams(argc, argv);

    printf("[DEBUG] arbrindo o arquivo....\n");
	FILE* arquivo = fopen(argv[1], "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

	curfilename = argv[1];
	yyin = arquivo;
	yyrestart(arquivo);
    yylineno = 1;
    
	//int r = yylex ();
	int r = yyparse();

	fclose(arquivo);

    printf("\n\tResultado do yyparse() = %d\n", r);

	cout << "Finalizando no tradutor....\n" << endl;
	return r;
}

void yyerror(string MSG) {
	cout << MSG << endl;
}				

void printParams(int argc, char* argv[]) {
	cout << "[DEBUG] ========================= " << endl;
	cout << "\tParametros: " << endl;
	for(int i = 0; i < argc; i++){
		printf("\t[%d] %s\n", i, argv[i]);
	}
	cout << "[DEBUG] ========================= " << endl;
}
