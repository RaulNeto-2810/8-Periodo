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
  YYSYMBOL_TK_TIPO_NUMERICO = 13,          /* TK_TIPO_NUMERICO  */
  YYSYMBOL_TK_OP_ATRIB = 14,               /* TK_OP_ATRIB  */
  YYSYMBOL_TK_OP = 15,                     /* TK_OP  */
  YYSYMBOL_TK_CP = 16,                     /* TK_CP  */
  YYSYMBOL_TK_OP_VAR = 17,                 /* TK_OP_VAR  */
  YYSYMBOL_TK_VIRGULA = 18,                /* TK_VIRGULA  */
  YYSYMBOL_TK_PONTO_VIRGULA = 19,          /* TK_PONTO_VIRGULA  */
  YYSYMBOL_TK_OP_E = 20,                   /* TK_OP_E  */
  YYSYMBOL_TK_OP_NAO = 21,                 /* TK_OP_NAO  */
  YYSYMBOL_TK_OP_OU = 22,                  /* TK_OP_OU  */
  YYSYMBOL_TK_OP_XOU = 23,                 /* TK_OP_XOU  */
  YYSYMBOL_TK_CONST_FALSO = 24,            /* TK_CONST_FALSO  */
  YYSYMBOL_TK_CONST_VERDADEIRO = 25,       /* TK_CONST_VERDADEIRO  */
  YYSYMBOL_TK_OP_ADD = 26,                 /* TK_OP_ADD  */
  YYSYMBOL_TK_OP_SUB = 27,                 /* TK_OP_SUB  */
  YYSYMBOL_TK_UMINUS = 28,                 /* TK_UMINUS  */
  YYSYMBOL_TK_OP_MUL = 29,                 /* TK_OP_MUL  */
  YYSYMBOL_TK_OP_DIV = 30,                 /* TK_OP_DIV  */
  YYSYMBOL_TK_OP_DIV_INT = 31,             /* TK_OP_DIV_INT  */
  YYSYMBOL_TK_OP_MOD = 32,                 /* TK_OP_MOD  */
  YYSYMBOL_TK_OP_EXP = 33,                 /* TK_OP_EXP  */
  YYSYMBOL_TK_OP_GT = 34,                  /* TK_OP_GT  */
  YYSYMBOL_TK_OP_GTEQ = 35,                /* TK_OP_GTEQ  */
  YYSYMBOL_TK_OP_LT = 36,                  /* TK_OP_LT  */
  YYSYMBOL_TK_OP_LTEQ = 37,                /* TK_OP_LTEQ  */
  YYSYMBOL_TK_OP_EQ = 38,                  /* TK_OP_EQ  */
  YYSYMBOL_TK_OP_NOTEQ = 39,               /* TK_OP_NOTEQ  */
  YYSYMBOL_TK_SE = 40,                     /* TK_SE  */
  YYSYMBOL_TK_ENTAO = 41,                  /* TK_ENTAO  */
  YYSYMBOL_TK_SENAO = 42,                  /* TK_SENAO  */
  YYSYMBOL_TK_FIMSE = 43,                  /* TK_FIMSE  */
  YYSYMBOL_TK_ESCOLHA = 44,                /* TK_ESCOLHA  */
  YYSYMBOL_TK_CASO = 45,                   /* TK_CASO  */
  YYSYMBOL_TK_OUTROCASO = 46,              /* TK_OUTROCASO  */
  YYSYMBOL_TK_FIMESCOLHA = 47,             /* TK_FIMESCOLHA  */
  YYSYMBOL_TK_LEIA = 48,                   /* TK_LEIA  */
  YYSYMBOL_TK_ESCREVA = 49,                /* TK_ESCREVA  */
  YYSYMBOL_TK_ESCREVAL = 50,               /* TK_ESCREVAL  */
  YYSYMBOL_TK_ENQUANTO = 51,               /* TK_ENQUANTO  */
  YYSYMBOL_TK_FIMENQUANTO = 52,            /* TK_FIMENQUANTO  */
  YYSYMBOL_TK_REPITA = 53,                 /* TK_REPITA  */
  YYSYMBOL_TK_PARA = 54,                   /* TK_PARA  */
  YYSYMBOL_TK_DE = 55,                     /* TK_DE  */
  YYSYMBOL_TK_ATE = 56,                    /* TK_ATE  */
  YYSYMBOL_TK_PASSO = 57,                  /* TK_PASSO  */
  YYSYMBOL_TK_FACA = 58,                   /* TK_FACA  */
  YYSYMBOL_TK_FIMPARA = 59,                /* TK_FIMPARA  */
  YYSYMBOL_TK_FUNCAO = 60,                 /* TK_FUNCAO  */
  YYSYMBOL_TK_FIMFUNCAO = 61,              /* TK_FIMFUNCAO  */
  YYSYMBOL_TK_RETORNE = 62,                /* TK_RETORNE  */
  YYSYMBOL_TK_INTERROMPA = 63,             /* TK_INTERROMPA  */
  YYSYMBOL_TK_PROCEDIMENTO = 64,           /* TK_PROCEDIMENTO  */
  YYSYMBOL_TK_FIMPROCEDIMENTO = 65,        /* TK_FIMPROCEDIMENTO  */
  YYSYMBOL_TK_SEN = 66,                    /* TK_SEN  */
  YYSYMBOL_TK_COS = 67,                    /* TK_COS  */
  YYSYMBOL_TK_TAN = 68,                    /* TK_TAN  */
  YYSYMBOL_TK_ARCSEN = 69,                 /* TK_ARCSEN  */
  YYSYMBOL_TK_ARCCOS = 70,                 /* TK_ARCCOS  */
  YYSYMBOL_TK_ARCTAN = 71,                 /* TK_ARCTAN  */
  YYSYMBOL_TK_COTAN = 72,                  /* TK_COTAN  */
  YYSYMBOL_TK_GRAUPRAD = 73,               /* TK_GRAUPRAD  */
  YYSYMBOL_TK_RADPGRAU = 74,               /* TK_RADPGRAU  */
  YYSYMBOL_TK_EXP = 75,                    /* TK_EXP  */
  YYSYMBOL_TK_RAIZQ = 76,                  /* TK_RAIZQ  */
  YYSYMBOL_TK_LOG = 77,                    /* TK_LOG  */
  YYSYMBOL_TK_LOGN = 78,                   /* TK_LOGN  */
  YYSYMBOL_TK_POS = 79,                    /* TK_POS  */
  YYSYMBOL_TK_ASC = 80,                    /* TK_ASC  */
  YYSYMBOL_TK_COMPR = 81,                  /* TK_COMPR  */
  YYSYMBOL_TK_COPIA = 82,                  /* TK_COPIA  */
  YYSYMBOL_TK_MAIUSC = 83,                 /* TK_MAIUSC  */
  YYSYMBOL_TK_MINUSC = 84,                 /* TK_MINUSC  */
  YYSYMBOL_TK_NUMPCARAC = 85,              /* TK_NUMPCARAC  */
  YYSYMBOL_TK_ALEATORIO = 86,              /* TK_ALEATORIO  */
  YYSYMBOL_TK_RAND = 87,                   /* TK_RAND  */
  YYSYMBOL_TK_RANDI = 88,                  /* TK_RANDI  */
  YYSYMBOL_TK_ABS = 89,                    /* TK_ABS  */
  YYSYMBOL_TK_PI = 90,                     /* TK_PI  */
  YYSYMBOL_TK_QUAD = 91,                   /* TK_QUAD  */
  YYSYMBOL_TK_FUN_INT = 92,                /* TK_FUN_INT  */
  YYSYMBOL_TK_CRONOMETRO = 93,             /* TK_CRONOMETRO  */
  YYSYMBOL_TK_DEBUG = 94,                  /* TK_DEBUG  */
  YYSYMBOL_TK_ECO = 95,                    /* TK_ECO  */
  YYSYMBOL_TK_PAUSA = 96,                  /* TK_PAUSA  */
  YYSYMBOL_TK_TIMER = 97,                  /* TK_TIMER  */
  YYSYMBOL_TK_ARQUIVO = 98,                /* TK_ARQUIVO  */
  YYSYMBOL_TK_MENSAGEM = 99,               /* TK_MENSAGEM  */
  YYSYMBOL_TK_NL = 100,                    /* TK_NL  */
  YYSYMBOL_TK_NUM = 101,                   /* TK_NUM  */
  YYSYMBOL_TK_NUM_INT = 102,               /* TK_NUM_INT  */
  YYSYMBOL_TK_ID = 103,                    /* TK_ID  */
  YYSYMBOL_YYACCEPT = 104,                 /* $accept  */
  YYSYMBOL_programa = 105,                 /* programa  */
  YYSYMBOL_endline = 106,                  /* endline  */
  YYSYMBOL_bloco_var = 107,                /* bloco_var  */
  YYSYMBOL_lstids = 108,                   /* lstids  */
  YYSYMBOL_tipo = 109,                     /* tipo  */
  YYSYMBOL_bloco_subalgo = 110,            /* bloco_subalgo  */
  YYSYMBOL_subalgoritmo = 111,             /* subalgoritmo  */
  YYSYMBOL_auxfuncao = 112,                /* auxfuncao  */
  YYSYMBOL_auxfuncao2 = 113,               /* auxfuncao2  */
  YYSYMBOL_arglist = 114,                  /* arglist  */
  YYSYMBOL_retornofuncao = 115,            /* retornofuncao  */
  YYSYMBOL_comandos = 116,                 /* comandos  */
  YYSYMBOL_comando = 117,                  /* comando  */
  YYSYMBOL_passovariacao = 118,            /* passovariacao  */
  YYSYMBOL_caselist = 119,                 /* caselist  */
  YYSYMBOL_constantlist = 120,             /* constantlist  */
  YYSYMBOL_constant = 121,                 /* constant  */
  YYSYMBOL_explist = 122,                  /* explist  */
  YYSYMBOL_exp = 123,                      /* exp  */
  YYSYMBOL_factor = 124,                   /* factor  */
  YYSYMBOL_term = 125,                     /* term  */
  YYSYMBOL_comandoIO = 126,                /* comandoIO  */
  YYSYMBOL_predefinedFuncions = 127        /* predefinedFuncions  */
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
#define YYLAST   2557

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  127
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  352

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   358


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
      95,    96,    97,    98,    99,   100,   101,   102,   103
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   204,   204,   218,   219,   227,   228,   229,   233,   234,
     235,   239,   240,   241,   242,   243,   252,   253,   257,   258,
     262,   263,   266,   267,   270,   271,   272,   273,   279,   280,
     288,   289,   290,   294,   296,   297,   298,   301,   305,   309,
     313,   316,   317,   318,   320,   321,   326,   327,   328,   332,
     333,   337,   338,   342,   343,   344,   345,   346,   347,   348,
     352,   353,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   376,   377,   378,
     379,   380,   381,   385,   386,   387,   388,   389,   395,   396,
     397,   398,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   416,   417,   418,   419,
     420,   422,   428,   429,   430,   431,   432,   433,   434,   435,
     437,   438,   439,   440,   441,   442,   443,   444
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
  "TK_TIPO_LOGICO", "TK_TIPO_NUMERICO", "TK_OP_ATRIB", "TK_OP", "TK_CP",
  "TK_OP_VAR", "TK_VIRGULA", "TK_PONTO_VIRGULA", "TK_OP_E", "TK_OP_NAO",
  "TK_OP_OU", "TK_OP_XOU", "TK_CONST_FALSO", "TK_CONST_VERDADEIRO",
  "TK_OP_ADD", "TK_OP_SUB", "TK_UMINUS", "TK_OP_MUL", "TK_OP_DIV",
  "TK_OP_DIV_INT", "TK_OP_MOD", "TK_OP_EXP", "TK_OP_GT", "TK_OP_GTEQ",
  "TK_OP_LT", "TK_OP_LTEQ", "TK_OP_EQ", "TK_OP_NOTEQ", "TK_SE", "TK_ENTAO",
  "TK_SENAO", "TK_FIMSE", "TK_ESCOLHA", "TK_CASO", "TK_OUTROCASO",
  "TK_FIMESCOLHA", "TK_LEIA", "TK_ESCREVA", "TK_ESCREVAL", "TK_ENQUANTO",
  "TK_FIMENQUANTO", "TK_REPITA", "TK_PARA", "TK_DE", "TK_ATE", "TK_PASSO",
  "TK_FACA", "TK_FIMPARA", "TK_FUNCAO", "TK_FIMFUNCAO", "TK_RETORNE",
  "TK_INTERROMPA", "TK_PROCEDIMENTO", "TK_FIMPROCEDIMENTO", "TK_SEN",
  "TK_COS", "TK_TAN", "TK_ARCSEN", "TK_ARCCOS", "TK_ARCTAN", "TK_COTAN",
  "TK_GRAUPRAD", "TK_RADPGRAU", "TK_EXP", "TK_RAIZQ", "TK_LOG", "TK_LOGN",
  "TK_POS", "TK_ASC", "TK_COMPR", "TK_COPIA", "TK_MAIUSC", "TK_MINUSC",
  "TK_NUMPCARAC", "TK_ALEATORIO", "TK_RAND", "TK_RANDI", "TK_ABS", "TK_PI",
  "TK_QUAD", "TK_FUN_INT", "TK_CRONOMETRO", "TK_DEBUG", "TK_ECO",
  "TK_PAUSA", "TK_TIMER", "TK_ARQUIVO", "TK_MENSAGEM", "TK_NL", "TK_NUM",
  "TK_NUM_INT", "TK_ID", "$accept", "programa", "endline", "bloco_var",
  "lstids", "tipo", "bloco_subalgo", "subalgoritmo", "auxfuncao",
  "auxfuncao2", "arglist", "retornofuncao", "comandos", "comando",
  "passovariacao", "caselist", "constantlist", "constant", "explist",
  "exp", "factor", "term", "comandoIO", "predefinedFuncions", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-270)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-64)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      24,    37,    58,   -86,  -270,   -86,    35,  -270,   -75,   -34,
      66,   -42,   -86,   -36,   -32,    82,   -34,   112,   -42,  -270,
    -270,    75,   117,    30,  -270,  -270,  -270,  -270,  -270,  -270,
     -86,  -270,     0,     0,   -86,   -42,     0,     0,   116,   120,
     123,  1481,  -270,  -270,  -270,   112,    87,    40,  -270,  -270,
    1784,  1784,  -270,  -270,  1784,  1784,    53,   142,   150,   151,
    1784,    67,    65,  1582,  -270,   154,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   166,   167,   170,   172,   173,
     175,   176,   177,   178,   180,  -270,  -270,   181,   182,  -270,
     183,   184,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,    72,   -86,   673,   -86,  -270,  2478,  -270,  -270,   -86,
     -86,     0,   112,   100,    35,    35,    79,   407,  -270,   201,
    -270,   427,   102,   101,  1784,  1784,   377,  1481,   152,  -270,
      15,  1784,  1784,  1784,  1784,  1784,  1784,  1784,  1784,  1784,
    1784,  1784,  1784,  1784,  1784,  1784,  1784,  1784,  1784,  1784,
    1784,  1784,  1784,  1784,  1784,  1784,  1683,  -270,   -86,  -270,
    -270,  1784,  1784,  1784,  1784,  1784,  1784,  1784,  1784,  1784,
    1784,  1784,  1784,  1784,  1784,  1784,  1784,  -270,  -270,  -270,
     105,  -270,   200,   -86,  1784,  -270,   -86,    63,   193,   194,
    2370,   196,   113,   774,   114,  -270,  1588,  1689,  1790,  1868,
    1892,  1916,  1940,  1964,  1988,  2392,  2012,  2036,  2060,  2414,
    2084,  2108,  2436,  2132,  2156,  2180,  2204,  2228,  2252,  2276,
    2478,  -270,  -270,   198,    46,   199,  -270,   201,   115,  2518,
     130,   130,  2498,  2498,  2498,  2498,  2498,  1602,  1602,  1602,
    1602,  1602,  1602,  -270,   122,   211,  1481,     9,   126,   195,
     -86,   -86,  1784,   -86,  1481,  1784,   185,  -270,  -270,  -270,
    -270,  -270,  -270,  -270,  -270,  -270,  1784,  -270,  -270,  -270,
    1784,  -270,  -270,  1784,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,     9,  -270,  1481,   -86,   471,  -270,   143,   202,
    1481,  -270,  -270,  -270,  -270,  -270,   875,    43,    11,  2300,
    2324,  2458,  -270,   191,   -45,  1481,  1481,   -86,   -86,  1481,
     976,   -86,  -270,   189,   189,  -270,  -270,  1784,   153,   -43,
    1077,  1481,  -270,   572,  -270,   -17,   165,   204,  2348,   -86,
     -86,  1178,  -270,   155,  -270,   179,   187,  -270,  -270,  -270,
    -270,  -270,   -86,   -86,  1481,  1481,  1279,  1380,   -86,   -86,
    -270,  -270
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     3,     1,     3,     5,     4,     3,    16,
       0,     8,     3,     0,     0,     0,    16,     0,     8,     6,
       7,     0,     0,     0,    17,    11,    12,    13,    14,    15,
       3,    10,    24,    24,     3,     8,    24,    24,     0,     0,
       0,    30,     9,    27,    26,     0,     0,     0,    56,    57,
      92,    92,    58,    59,    92,    92,     0,     0,     0,     0,
      92,     0,     0,     3,   105,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   120,   116,     0,     0,   111,
       0,     0,   121,   122,   123,   124,   125,   126,   127,    53,
      54,    55,     3,    88,     3,    83,    33,    63,    77,     3,
       3,    24,     0,     0,     5,     5,    55,     0,    87,    76,
      85,     0,     0,     0,    92,    92,     0,    30,     0,    28,
       3,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    43,     3,    32,
      31,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    41,    42,    25,
       0,    21,     0,     3,    92,    84,     3,     0,     0,     0,
      60,     0,     0,    88,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,    44,     0,    83,     0,     2,    73,    74,    75,
      65,    66,    78,    79,    81,    80,    82,    69,    70,    67,
      68,    71,    72,    20,     0,     0,    30,     0,     0,     0,
       3,     3,    92,     3,    30,    92,     0,   118,   100,   119,
      95,    94,    96,   101,   103,   114,    92,   115,   106,   107,
      92,    97,    98,    92,   108,   109,   110,   117,    93,   113,
     104,    45,     0,    86,    30,     3,    88,    55,     0,    51,
      30,    40,    91,    89,    61,    90,    88,     0,     0,     0,
       0,     0,    52,     0,     3,    88,    30,     3,     3,    30,
      88,     3,    37,    46,    46,   102,   112,    92,     0,     3,
      88,    30,    34,    88,    36,     0,     0,     0,     0,     3,
       3,    88,    49,     0,    47,     0,     0,    99,    19,    18,
      35,    48,     3,     3,    30,    30,    88,    88,     3,     3,
      38,    39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -270,  -270,    -3,    14,    21,   -23,   238,  -270,  -270,  -270,
     -16,  -269,  -120,  -102,   -58,   -65,  -223,  -145,  -121,   218,
     -50,  -270,  -270,   -35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,   157,     9,    12,    30,    15,    16,   114,   303,
      39,   102,   103,   104,   326,   249,   223,   105,   225,   106,
     107,   108,   109,   118
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,   159,     7,   189,   191,    11,   110,   193,    36,    20,
     333,   224,    48,    49,     5,   304,   -23,    40,   -22,    37,
      43,    44,   111,   113,   288,     5,    13,    35,    10,     1,
      14,    41,    19,    52,    53,   161,   319,   162,   163,    31,
       3,   164,   165,     8,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,     5,    42,     5,     4,   302,
     129,    10,   -51,   161,   282,   162,   163,    21,   110,   164,
     165,    22,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,    17,    18,   334,   155,   156,    23,   180,
      32,   159,   110,   155,   184,   179,    25,    26,    27,    28,
      29,   160,   289,    38,   112,   221,   177,   178,   247,   248,
      99,   100,   287,   313,   314,     5,   232,   233,   234,   235,
     236,    25,    26,    27,    28,    29,   286,   195,   182,   183,
      34,   294,    33,    45,   296,   161,    46,   289,   163,    47,
     115,   164,   165,   312,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   226,   122,   123,   110,   166,
     167,   168,   169,   170,   305,   124,   125,   127,   128,   131,
     310,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     245,   141,   142,   246,   159,   143,   320,   144,   145,   323,
     146,   147,   148,   149,   159,   150,   151,   152,   153,   154,
     181,   331,   187,   159,   188,   243,   244,   194,   159,   250,
     251,   110,   253,   254,   281,   283,   256,   285,   159,   110,
     282,   159,   284,   335,   346,   347,   290,   164,   165,   159,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   298,   291,   309,   159,   159,   325,   292,   293,   110,
     295,   110,   318,   329,    24,   110,   327,   341,   332,     0,
       0,   110,   336,     0,     0,     0,     0,     0,   117,   119,
     110,   110,   120,   121,   110,   110,     0,     0,   126,   342,
       0,   130,   306,     0,     0,   110,   110,   343,   110,     0,
       0,     0,     0,     0,     0,     0,   110,     0,     0,     0,
       0,     0,     0,     0,   321,   322,     0,     0,   324,   110,
     110,   110,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   338,   339,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   344,
     345,     0,   190,   190,     0,   350,   351,     0,     0,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   190,     0,     0,     0,     0,   227,
     228,   229,   230,   231,   220,   220,   220,   220,   220,   237,
     238,   239,   240,   241,   242,     0,     0,   161,     0,   162,
     163,     0,   190,   164,   165,     0,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,     0,     0,     0,
       0,     0,     0,   185,     0,     0,     0,   161,     0,   162,
     163,     0,     0,   164,   165,   192,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   161,     0,   162,
     163,     0,     0,   164,   165,     0,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,     0,   186,     0,
     190,     0,     0,   297,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,   299,     0,    50,     0,   300,     0,
       0,   301,    51,     0,     0,    52,    53,     0,    54,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,   307,   308,    56,     0,     0,     0,    57,
      58,    59,    60,     0,    61,    62,     0,     0,     0,     0,
       0,     0,     0,    63,    64,   328,     0,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,     0,    99,   100,   101,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,     0,     0,    51,     0,     0,    52,    53,     0,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,     0,     0,    56,   247,   248,     0,
      57,    58,    59,    60,     0,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    63,    64,     0,     0,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,     0,    99,   100,   101,    48,    49,     0,     0,
     158,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,     0,     0,    51,     0,     0,    52,    53,     0,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,     0,     0,     0,    56,     0,     0,
       0,    57,    58,    59,    60,     0,    61,    62,     0,     0,
       0,     0,     0,     0,     0,    63,    64,     0,     0,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,     0,    99,   100,   101,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,     0,     0,    51,     0,     0,    52,    53,
       0,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,     0,     0,     0,    56,     0,
       0,     0,    57,    58,    59,    60,     0,    61,    62,     0,
     255,     0,     0,     0,     0,     0,    63,    64,     0,     0,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,     0,    99,   100,   101,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,     0,     0,    51,     0,     0,    52,
      53,     0,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,     0,     0,    56,
       0,     0,     0,    57,    58,    59,    60,   311,    61,    62,
       0,     0,     0,     0,     0,     0,     0,    63,    64,     0,
       0,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,     0,    99,   100,   101,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,     0,     0,    51,     0,     0,
      52,    53,     0,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,     0,     0,     0,
      56,     0,     0,   -50,    57,    58,    59,    60,     0,    61,
      62,     0,     0,     0,     0,     0,     0,     0,    63,    64,
       0,     0,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     0,    99,   100,   101,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,     0,     0,    51,     0,
       0,    52,    53,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,     0,     0,
       0,    56,     0,     0,     0,    57,    58,    59,    60,     0,
      61,    62,     0,     0,     0,     0,     0,     0,     0,    63,
      64,     0,   330,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,     0,    99,   100,
     101,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     0,    51,
       0,     0,    52,    53,     0,    54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     0,
       0,   340,    56,     0,     0,     0,    57,    58,    59,    60,
       0,    61,    62,     0,     0,     0,     0,     0,     0,     0,
      63,    64,     0,     0,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,     0,    99,
     100,   101,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,     0,     0,
      51,     0,     0,    52,    53,     0,    54,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
       0,     0,     0,    56,     0,     0,     0,    57,    58,    59,
      60,     0,    61,    62,     0,     0,     0,     0,   348,     0,
       0,    63,    64,     0,     0,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,     0,
      99,   100,   101,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       0,    51,     0,     0,    52,    53,     0,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,     0,     0,     0,    56,     0,     0,     0,    57,    58,
      59,    60,     0,    61,    62,     0,     0,     0,     0,   349,
       0,     0,    63,    64,     0,     0,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
       0,    99,   100,   101,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
       0,     0,    51,     0,     0,    52,    53,     0,    54,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,     0,     0,    56,     0,     0,     0,    57,
      58,    59,    60,     0,    61,    62,     0,     0,     0,     0,
       0,     0,     0,    63,    64,     0,     0,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,     0,    99,   100,   101,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,     0,     0,    51,   257,     0,    52,    53,   161,    54,
     162,   163,     0,     0,   164,   165,     0,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   164,   165,
       0,   166,   167,   168,   169,   170,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,    64,     0,     0,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,     5,    99,   100,   116,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,   222,
       0,     0,     0,     0,    51,   258,     0,    52,    53,   161,
      54,   162,   163,     0,     0,   164,   165,     0,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    64,     0,     0,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,     0,    99,   100,   116,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,     0,     0,    51,   259,     0,    52,    53,
     161,    54,   162,   163,     0,     0,   164,   165,     0,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    64,     0,     0,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,   260,    99,   100,   116,   161,     0,
     162,   163,     0,     0,   164,   165,     0,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   261,     0,
       0,     0,   161,     0,   162,   163,     0,     0,   164,   165,
       0,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   262,     0,     0,     0,   161,     0,   162,   163,
       0,     0,   164,   165,     0,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   263,     0,     0,     0,
     161,     0,   162,   163,     0,     0,   164,   165,     0,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     264,     0,     0,     0,   161,     0,   162,   163,     0,     0,
     164,   165,     0,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   265,     0,     0,     0,   161,     0,
     162,   163,     0,     0,   164,   165,     0,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   267,     0,
       0,     0,   161,     0,   162,   163,     0,     0,   164,   165,
       0,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   268,     0,     0,     0,   161,     0,   162,   163,
       0,     0,   164,   165,     0,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   269,     0,     0,     0,
     161,     0,   162,   163,     0,     0,   164,   165,     0,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     271,     0,     0,     0,   161,     0,   162,   163,     0,     0,
     164,   165,     0,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   272,     0,     0,     0,   161,     0,
     162,   163,     0,     0,   164,   165,     0,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   274,     0,
       0,     0,   161,     0,   162,   163,     0,     0,   164,   165,
       0,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   275,     0,     0,     0,   161,     0,   162,   163,
       0,     0,   164,   165,     0,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   276,     0,     0,     0,
     161,     0,   162,   163,     0,     0,   164,   165,     0,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     277,     0,     0,     0,   161,     0,   162,   163,     0,     0,
     164,   165,     0,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   278,     0,     0,     0,   161,     0,
     162,   163,     0,     0,   164,   165,     0,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   279,     0,
       0,     0,   161,     0,   162,   163,     0,     0,   164,   165,
       0,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   280,     0,     0,     0,   161,     0,   162,   163,
       0,     0,   164,   165,     0,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   315,     0,     0,     0,
     161,     0,   162,   163,     0,     0,   164,   165,     0,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     316,     0,     0,     0,   161,     0,   162,   163,     0,     0,
     164,   165,     0,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   337,     0,     0,     0,   161,     0,
     162,   163,     0,     0,   164,   165,     0,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   252,     0,
     161,     0,   162,   163,     0,     0,   164,   165,     0,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     266,     0,   161,     0,   162,   163,     0,     0,   164,   165,
       0,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   270,     0,   161,     0,   162,   163,     0,     0,
     164,   165,     0,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   273,     0,   161,     0,   162,   163,
       0,     0,   164,   165,     0,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   317,     0,   161,     0,
     162,   163,     0,     0,   164,   165,     0,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   161,     0,
     162,   163,     0,     0,   164,   165,     0,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   -63,     0,
     -63,   -63,     0,     0,   -63,   -63,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   161,     0,
       0,     0,     0,     0,   164,   165,     0,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176
};

static const yytype_int16 yycheck[] =
{
       3,   103,     5,   124,   125,     8,    41,   127,     8,    12,
      27,   156,     3,     4,   100,   284,    61,    33,    61,    19,
      36,    37,    45,    46,   247,   100,    60,    30,   103,     5,
      64,    34,    11,    24,    25,    20,   305,    22,    23,    18,
       3,    26,    27,     8,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,   100,    35,   100,     0,   282,
      63,   103,    16,    20,    18,    22,    23,   103,   103,    26,
      27,   103,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    17,    18,   102,    14,    15,     6,   112,
      15,   193,   127,    14,    15,   111,     9,    10,    11,    12,
      13,   104,   247,   103,    17,   155,   109,   110,    45,    46,
     101,   102,   103,   102,   103,   100,   166,   167,   168,   169,
     170,     9,    10,    11,    12,    13,   246,   130,   114,   115,
     100,   252,    15,    17,   254,    20,    16,   282,    23,    16,
     100,    26,    27,   100,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,   158,   103,    15,   193,    29,
      30,    31,    32,    33,   284,    15,    15,   100,   103,    15,
     290,    15,    15,    15,    15,    15,    15,    15,    15,    15,
     183,    15,    15,   186,   286,    15,   306,    15,    15,   309,
      15,    15,    15,    15,   296,    15,    15,    15,    15,    15,
     100,   321,   100,   305,   103,   100,     6,    55,   310,    16,
      16,   246,    16,   100,    16,    16,   102,     6,   320,   254,
      18,   323,   100,    58,   344,   345,   100,    26,    27,   331,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    56,    47,   100,   346,   347,    57,   250,   251,   284,
     253,   286,    61,   100,    16,   290,   314,   102,   323,    -1,
      -1,   296,    58,    -1,    -1,    -1,    -1,    -1,    50,    51,
     305,   306,    54,    55,   309,   310,    -1,    -1,    60,   100,
      -1,    63,   285,    -1,    -1,   320,   321,   100,   323,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   331,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   307,   308,    -1,    -1,   311,   344,
     345,   346,   347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   329,   330,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   342,
     343,    -1,   124,   125,    -1,   348,   349,    -1,    -1,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,    -1,    -1,    -1,    -1,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,    -1,    -1,    20,    -1,    22,
      23,    -1,   184,    26,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    -1,    -1,    -1,    20,    -1,    22,
      23,    -1,    -1,    26,    27,    58,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    20,    -1,    22,
      23,    -1,    -1,    26,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    -1,
     252,    -1,    -1,   255,     3,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   266,    -1,    15,    -1,   270,    -1,
      -1,   273,    21,    -1,    -1,    24,    25,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    43,    44,    -1,    -1,    -1,    48,
      49,    50,    51,    -1,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,   317,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    -1,   101,   102,   103,     3,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    45,    46,    -1,
      48,    49,    50,    51,    -1,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    -1,   101,   102,   103,     3,     4,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    48,    49,    50,    51,    -1,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    -1,   101,   102,   103,     3,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    48,    49,    50,    51,    -1,    53,    54,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    -1,   101,   102,   103,     3,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    24,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,
      -1,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    -1,   101,   102,   103,     3,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      24,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      44,    -1,    -1,    47,    48,    49,    50,    51,    -1,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      -1,    -1,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    -1,   101,   102,   103,
       3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    24,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    48,    49,    50,    51,    -1,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    -1,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    -1,   101,   102,
     103,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    24,    25,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    43,    44,    -1,    -1,    -1,    48,    49,    50,    51,
      -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,    -1,    -1,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    -1,   101,
     102,   103,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      21,    -1,    -1,    24,    25,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    48,    49,    50,
      51,    -1,    53,    54,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    62,    63,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    -1,
     101,   102,   103,     3,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    24,    25,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    44,    -1,    -1,    -1,    48,    49,
      50,    51,    -1,    53,    54,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    62,    63,    -1,    -1,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      -1,   101,   102,   103,     3,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    24,    25,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    44,    -1,    -1,    -1,    48,
      49,    50,    51,    -1,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,    -1,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    -1,   101,   102,   103,     3,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    21,    16,    -1,    24,    25,    20,    27,
      22,    23,    -1,    -1,    26,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    26,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,     3,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,
      -1,    -1,    -1,    -1,    21,    16,    -1,    24,    25,    20,
      27,    22,    23,    -1,    -1,    26,    27,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    -1,   101,   102,   103,     3,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    21,    16,    -1,    24,    25,
      20,    27,    22,    23,    -1,    -1,    26,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    16,   101,   102,   103,    20,    -1,
      22,    23,    -1,    -1,    26,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    16,    -1,
      -1,    -1,    20,    -1,    22,    23,    -1,    -1,    26,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    16,    -1,    -1,    -1,    20,    -1,    22,    23,
      -1,    -1,    26,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    16,    -1,    -1,    -1,
      20,    -1,    22,    23,    -1,    -1,    26,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      16,    -1,    -1,    -1,    20,    -1,    22,    23,    -1,    -1,
      26,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    16,    -1,    -1,    -1,    20,    -1,
      22,    23,    -1,    -1,    26,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    16,    -1,
      -1,    -1,    20,    -1,    22,    23,    -1,    -1,    26,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    16,    -1,    -1,    -1,    20,    -1,    22,    23,
      -1,    -1,    26,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    16,    -1,    -1,    -1,
      20,    -1,    22,    23,    -1,    -1,    26,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      16,    -1,    -1,    -1,    20,    -1,    22,    23,    -1,    -1,
      26,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    16,    -1,    -1,    -1,    20,    -1,
      22,    23,    -1,    -1,    26,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    16,    -1,
      -1,    -1,    20,    -1,    22,    23,    -1,    -1,    26,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    16,    -1,    -1,    -1,    20,    -1,    22,    23,
      -1,    -1,    26,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    16,    -1,    -1,    -1,
      20,    -1,    22,    23,    -1,    -1,    26,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      16,    -1,    -1,    -1,    20,    -1,    22,    23,    -1,    -1,
      26,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    16,    -1,    -1,    -1,    20,    -1,
      22,    23,    -1,    -1,    26,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    16,    -1,
      -1,    -1,    20,    -1,    22,    23,    -1,    -1,    26,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    16,    -1,    -1,    -1,    20,    -1,    22,    23,
      -1,    -1,    26,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    16,    -1,    -1,    -1,
      20,    -1,    22,    23,    -1,    -1,    26,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      16,    -1,    -1,    -1,    20,    -1,    22,    23,    -1,    -1,
      26,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    16,    -1,    -1,    -1,    20,    -1,
      22,    23,    -1,    -1,    26,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    18,    -1,
      20,    -1,    22,    23,    -1,    -1,    26,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      18,    -1,    20,    -1,    22,    23,    -1,    -1,    26,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    18,    -1,    20,    -1,    22,    23,    -1,    -1,
      26,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    18,    -1,    20,    -1,    22,    23,
      -1,    -1,    26,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    18,    -1,    20,    -1,
      22,    23,    -1,    -1,    26,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    20,    -1,
      22,    23,    -1,    -1,    26,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    20,    -1,
      22,    23,    -1,    -1,    26,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,   105,     3,     0,   100,   106,   106,     8,   107,
     103,   106,   108,    60,    64,   110,   111,    17,    18,   108,
     106,   103,   103,     6,   110,     9,    10,    11,    12,    13,
     109,   108,    15,    15,   100,   106,     8,    19,   103,   114,
     114,   106,   108,   114,   114,    17,    16,    16,     3,     4,
      15,    21,    24,    25,    27,    40,    44,    48,    49,    50,
      51,    53,    54,    62,    63,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   101,
     102,   103,   115,   116,   117,   121,   123,   124,   125,   126,
     127,   109,    17,   109,   112,   100,   103,   123,   127,   123,
     123,   123,   103,    15,    15,    15,   123,   100,   103,   106,
     123,    15,    15,    15,    15,    15,    15,    15,    15,    15,
      15,    15,    15,    15,    15,    15,    15,    15,    15,    15,
      15,    15,    15,    15,    15,    14,    15,   106,     7,   117,
     106,    20,    22,    23,    26,    27,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,   106,   106,   114,
     109,   100,   107,   107,    15,    16,    41,   100,   103,   122,
     123,   122,    58,   116,    55,   106,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   124,    16,   120,   121,   122,   106,   123,   123,   123,
     123,   123,   124,   124,   124,   124,   124,   123,   123,   123,
     123,   123,   123,   100,     6,   106,   106,    45,    46,   119,
      16,    16,    18,    16,   100,    56,   102,    16,    16,    16,
      16,    16,    16,    16,    16,    16,    18,    16,    16,    16,
      18,    16,    16,    18,    16,    16,    16,    16,    16,    16,
      16,    16,    18,    16,   100,     6,   116,   103,   120,   121,
     100,    47,   106,   106,   122,   106,   116,   123,    56,   123,
     123,   123,   120,   113,   115,   116,   106,    42,    43,   100,
     116,    52,   100,   102,   103,    16,    16,    18,    61,   115,
     116,   106,   106,   116,   106,    57,   118,   118,   123,   100,
      65,   116,   119,    27,   102,    58,    58,    16,   106,   106,
      43,   102,   100,   100,   106,   106,   116,   116,    59,    59,
     106,   106
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,   104,   105,   106,   106,   107,   107,   107,   108,   108,
     108,   109,   109,   109,   109,   109,   110,   110,   111,   111,
     112,   112,   113,   113,   114,   114,   114,   114,   115,   115,
     116,   116,   116,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   118,   118,   118,   119,
     119,   120,   120,   121,   121,   121,   121,   121,   121,   121,
     122,   122,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   124,   124,   124,
     124,   124,   124,   125,   125,   125,   125,   125,   126,   126,
     126,   126,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,    11,     0,     2,     0,     3,     3,     0,     5,
       3,     1,     1,     1,     1,     1,     0,     2,    13,    13,
       3,     2,     2,     1,     0,     4,     2,     2,     2,     3,
       0,     2,     2,     1,     7,     9,     7,     6,    13,    13,
       5,     2,     2,     2,     3,     4,     0,     2,     3,     5,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     1,     3,     3,
       3,     3,     3,     1,     3,     2,     4,     1,     0,     5,
       5,     5,     0,     4,     4,     4,     4,     4,     4,     8,
       4,     4,     6,     4,     4,     1,     4,     4,     4,     4,
       4,     1,     6,     4,     4,     4,     1,     4,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     1
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
#line 210 "sintatica.y"
        {
		cout << " >>>>>>>>>>><<<<<<<<<<   " << endl;
		cout << " >>>> reconhecido <<<<   " << endl;
		cout << " >>>>>>>>>>><<<<<<<<<<   " << endl;
	}
#line 1892 "bin/sintatica.tab.c"
    break;

  case 3: /* endline: %empty  */
#line 218 "sintatica.y"
                    {  }
#line 1898 "bin/sintatica.tab.c"
    break;

  case 4: /* endline: TK_NL endline  */
#line 219 "sintatica.y"
                    {  }
#line 1904 "bin/sintatica.tab.c"
    break;

  case 5: /* bloco_var: %empty  */
#line 227 "sintatica.y"
                              {  }
#line 1910 "bin/sintatica.tab.c"
    break;

  case 6: /* bloco_var: TK_VAR endline lstids  */
#line 228 "sintatica.y"
                            {  }
#line 1916 "bin/sintatica.tab.c"
    break;

  case 7: /* bloco_var: TK_VAR lstids endline  */
#line 229 "sintatica.y"
                                {  }
#line 1922 "bin/sintatica.tab.c"
    break;

  case 8: /* lstids: %empty  */
#line 233 "sintatica.y"
                                                                        {  }
#line 1928 "bin/sintatica.tab.c"
    break;

  case 9: /* lstids: TK_ID TK_OP_VAR tipo endline lstids  */
#line 234 "sintatica.y"
                                                                        {  }
#line 1934 "bin/sintatica.tab.c"
    break;

  case 10: /* lstids: TK_ID TK_VIRGULA lstids  */
#line 235 "sintatica.y"
                                     {  }
#line 1940 "bin/sintatica.tab.c"
    break;

  case 11: /* tipo: TK_TIPO_INTEIRO  */
#line 239 "sintatica.y"
                       { }
#line 1946 "bin/sintatica.tab.c"
    break;

  case 12: /* tipo: TK_TIPO_LITERAL  */
#line 240 "sintatica.y"
                           { }
#line 1952 "bin/sintatica.tab.c"
    break;

  case 13: /* tipo: TK_TIPO_CARACTER  */
#line 241 "sintatica.y"
                           { }
#line 1958 "bin/sintatica.tab.c"
    break;

  case 14: /* tipo: TK_TIPO_LOGICO  */
#line 242 "sintatica.y"
                           { }
#line 1964 "bin/sintatica.tab.c"
    break;

  case 15: /* tipo: TK_TIPO_NUMERICO  */
#line 243 "sintatica.y"
                           { }
#line 1970 "bin/sintatica.tab.c"
    break;

  case 16: /* bloco_subalgo: %empty  */
#line 252 "sintatica.y"
                                 {  }
#line 1976 "bin/sintatica.tab.c"
    break;

  case 17: /* bloco_subalgo: subalgoritmo bloco_subalgo  */
#line 253 "sintatica.y"
                                     {  }
#line 1982 "bin/sintatica.tab.c"
    break;

  case 18: /* subalgoritmo: TK_PROCEDIMENTO TK_ID TK_OP arglist TK_CP TK_NL bloco_var endline TK_INICIO endline comandos TK_FIMPROCEDIMENTO endline  */
#line 257 "sintatica.y"
                                                                                                                                  {  }
#line 1988 "bin/sintatica.tab.c"
    break;

  case 19: /* subalgoritmo: TK_FUNCAO TK_ID TK_OP arglist TK_CP auxfuncao bloco_var TK_INICIO TK_NL auxfuncao2 TK_FIMFUNCAO TK_NL endline  */
#line 258 "sintatica.y"
                                                                                                                        {  }
#line 1994 "bin/sintatica.tab.c"
    break;

  case 20: /* auxfuncao: TK_OP_VAR tipo TK_NL  */
#line 262 "sintatica.y"
                               {  }
#line 2000 "bin/sintatica.tab.c"
    break;

  case 21: /* auxfuncao: tipo TK_NL  */
#line 263 "sintatica.y"
                     {  }
#line 2006 "bin/sintatica.tab.c"
    break;

  case 22: /* auxfuncao2: comandos retornofuncao  */
#line 266 "sintatica.y"
                                 {  }
#line 2012 "bin/sintatica.tab.c"
    break;

  case 23: /* auxfuncao2: retornofuncao  */
#line 267 "sintatica.y"
                        {  }
#line 2018 "bin/sintatica.tab.c"
    break;

  case 24: /* arglist: %empty  */
#line 270 "sintatica.y"
                                       {  }
#line 2024 "bin/sintatica.tab.c"
    break;

  case 25: /* arglist: TK_ID TK_OP_VAR tipo arglist  */
#line 271 "sintatica.y"
                                       {  }
#line 2030 "bin/sintatica.tab.c"
    break;

  case 26: /* arglist: TK_PONTO_VIRGULA arglist  */
#line 272 "sintatica.y"
                                       {  }
#line 2036 "bin/sintatica.tab.c"
    break;

  case 27: /* arglist: TK_VAR arglist  */
#line 273 "sintatica.y"
                                       {  }
#line 2042 "bin/sintatica.tab.c"
    break;

  case 28: /* retornofuncao: TK_RETORNE endline  */
#line 279 "sintatica.y"
                                 {  }
#line 2048 "bin/sintatica.tab.c"
    break;

  case 29: /* retornofuncao: TK_RETORNE exp endline  */
#line 280 "sintatica.y"
                                 {  }
#line 2054 "bin/sintatica.tab.c"
    break;

  case 30: /* comandos: %empty  */
#line 288 "sintatica.y"
                           {  }
#line 2060 "bin/sintatica.tab.c"
    break;

  case 31: /* comandos: comando endline  */
#line 289 "sintatica.y"
                       {  }
#line 2066 "bin/sintatica.tab.c"
    break;

  case 32: /* comandos: comandos comando  */
#line 290 "sintatica.y"
                       {  }
#line 2072 "bin/sintatica.tab.c"
    break;

  case 33: /* comando: exp  */
#line 294 "sintatica.y"
              {   }
#line 2078 "bin/sintatica.tab.c"
    break;

  case 34: /* comando: TK_SE exp TK_ENTAO endline comandos TK_FIMSE endline  */
#line 296 "sintatica.y"
                                                               {  }
#line 2084 "bin/sintatica.tab.c"
    break;

  case 35: /* comando: TK_SE exp TK_ENTAO endline comandos TK_SENAO endline comandos TK_FIMSE  */
#line 297 "sintatica.y"
                                                                                 {  }
#line 2090 "bin/sintatica.tab.c"
    break;

  case 36: /* comando: TK_ENQUANTO exp TK_FACA TK_NL comandos TK_FIMENQUANTO endline  */
#line 300 "sintatica.y"
                                  {  }
#line 2096 "bin/sintatica.tab.c"
    break;

  case 37: /* comando: TK_REPITA TK_NL comandos TK_ATE exp TK_NL  */
#line 303 "sintatica.y"
                            {  }
#line 2102 "bin/sintatica.tab.c"
    break;

  case 38: /* comando: TK_PARA TK_ID TK_DE TK_NUM_INT TK_ATE TK_NUM_INT passovariacao TK_FACA TK_NL endline comandos TK_FIMPARA endline  */
#line 307 "sintatica.y"
                               { }
#line 2108 "bin/sintatica.tab.c"
    break;

  case 39: /* comando: TK_PARA TK_ID TK_DE TK_NUM_INT TK_ATE TK_ID passovariacao TK_FACA TK_NL endline comandos TK_FIMPARA endline  */
#line 311 "sintatica.y"
                               { }
#line 2114 "bin/sintatica.tab.c"
    break;

  case 40: /* comando: TK_ESCOLHA TK_ID TK_NL caselist TK_FIMESCOLHA  */
#line 315 "sintatica.y"
                          { }
#line 2120 "bin/sintatica.tab.c"
    break;

  case 41: /* comando: comandoIO endline  */
#line 316 "sintatica.y"
                            { }
#line 2126 "bin/sintatica.tab.c"
    break;

  case 42: /* comando: predefinedFuncions endline  */
#line 317 "sintatica.y"
                                     { }
#line 2132 "bin/sintatica.tab.c"
    break;

  case 43: /* comando: retornofuncao endline  */
#line 318 "sintatica.y"
                                { }
#line 2138 "bin/sintatica.tab.c"
    break;

  case 44: /* comando: TK_ID TK_OP TK_CP  */
#line 320 "sintatica.y"
                            {   }
#line 2144 "bin/sintatica.tab.c"
    break;

  case 45: /* comando: TK_ID TK_OP constantlist TK_CP  */
#line 321 "sintatica.y"
                                         {   }
#line 2150 "bin/sintatica.tab.c"
    break;

  case 46: /* passovariacao: %empty  */
#line 326 "sintatica.y"
                  {  }
#line 2156 "bin/sintatica.tab.c"
    break;

  case 47: /* passovariacao: TK_PASSO TK_NUM_INT  */
#line 327 "sintatica.y"
                              { }
#line 2162 "bin/sintatica.tab.c"
    break;

  case 48: /* passovariacao: TK_PASSO TK_OP_SUB TK_NUM_INT  */
#line 328 "sintatica.y"
                                                        { }
#line 2168 "bin/sintatica.tab.c"
    break;

  case 49: /* caselist: TK_CASO constantlist TK_NL comandos caselist  */
#line 332 "sintatica.y"
                                                       { }
#line 2174 "bin/sintatica.tab.c"
    break;

  case 50: /* caselist: TK_OUTROCASO TK_NL comandos  */
#line 333 "sintatica.y"
                                      { }
#line 2180 "bin/sintatica.tab.c"
    break;

  case 51: /* constantlist: constant  */
#line 337 "sintatica.y"
                                           { }
#line 2186 "bin/sintatica.tab.c"
    break;

  case 52: /* constantlist: constant TK_VIRGULA constantlist  */
#line 338 "sintatica.y"
                                           { }
#line 2192 "bin/sintatica.tab.c"
    break;

  case 53: /* constant: TK_NUM  */
#line 342 "sintatica.y"
                                        {  }
#line 2198 "bin/sintatica.tab.c"
    break;

  case 54: /* constant: TK_NUM_INT  */
#line 343 "sintatica.y"
                                        {  }
#line 2204 "bin/sintatica.tab.c"
    break;

  case 55: /* constant: TK_ID  */
#line 344 "sintatica.y"
                                        {  }
#line 2210 "bin/sintatica.tab.c"
    break;

  case 56: /* constant: VLR_STRING  */
#line 345 "sintatica.y"
                                        {  }
#line 2216 "bin/sintatica.tab.c"
    break;

  case 57: /* constant: VLR_CHARACTER  */
#line 346 "sintatica.y"
                                        {  }
#line 2222 "bin/sintatica.tab.c"
    break;

  case 58: /* constant: TK_CONST_FALSO  */
#line 347 "sintatica.y"
                                        {  }
#line 2228 "bin/sintatica.tab.c"
    break;

  case 59: /* constant: TK_CONST_VERDADEIRO  */
#line 348 "sintatica.y"
                                        {  }
#line 2234 "bin/sintatica.tab.c"
    break;

  case 60: /* explist: exp  */
#line 352 "sintatica.y"
                                 {  }
#line 2240 "bin/sintatica.tab.c"
    break;

  case 61: /* explist: exp TK_VIRGULA explist  */
#line 353 "sintatica.y"
                                 {  }
#line 2246 "bin/sintatica.tab.c"
    break;

  case 62: /* exp: TK_ID TK_OP_ATRIB factor  */
#line 357 "sintatica.y"
                                                      {  }
#line 2252 "bin/sintatica.tab.c"
    break;

  case 63: /* exp: factor  */
#line 358 "sintatica.y"
                 {  }
#line 2258 "bin/sintatica.tab.c"
    break;

  case 64: /* exp: TK_ID  */
#line 359 "sintatica.y"
                {  }
#line 2264 "bin/sintatica.tab.c"
    break;

  case 65: /* exp: exp TK_OP_ADD exp  */
#line 360 "sintatica.y"
                                {  }
#line 2270 "bin/sintatica.tab.c"
    break;

  case 66: /* exp: exp TK_OP_SUB exp  */
#line 361 "sintatica.y"
                                {  }
#line 2276 "bin/sintatica.tab.c"
    break;

  case 67: /* exp: exp TK_OP_LT exp  */
#line 362 "sintatica.y"
                            {  }
#line 2282 "bin/sintatica.tab.c"
    break;

  case 68: /* exp: exp TK_OP_LTEQ exp  */
#line 363 "sintatica.y"
                            {  }
#line 2288 "bin/sintatica.tab.c"
    break;

  case 69: /* exp: exp TK_OP_GT exp  */
#line 364 "sintatica.y"
                            {  }
#line 2294 "bin/sintatica.tab.c"
    break;

  case 70: /* exp: exp TK_OP_GTEQ exp  */
#line 365 "sintatica.y"
                            {  }
#line 2300 "bin/sintatica.tab.c"
    break;

  case 71: /* exp: exp TK_OP_EQ exp  */
#line 366 "sintatica.y"
                            {  }
#line 2306 "bin/sintatica.tab.c"
    break;

  case 72: /* exp: exp TK_OP_NOTEQ exp  */
#line 367 "sintatica.y"
                            {  }
#line 2312 "bin/sintatica.tab.c"
    break;

  case 73: /* exp: exp TK_OP_E exp  */
#line 368 "sintatica.y"
                            {  }
#line 2318 "bin/sintatica.tab.c"
    break;

  case 74: /* exp: exp TK_OP_OU exp  */
#line 369 "sintatica.y"
                            {  }
#line 2324 "bin/sintatica.tab.c"
    break;

  case 75: /* exp: exp TK_OP_XOU exp  */
#line 370 "sintatica.y"
                            {  }
#line 2330 "bin/sintatica.tab.c"
    break;

  case 76: /* exp: TK_OP_NAO exp  */
#line 371 "sintatica.y"
                                {  }
#line 2336 "bin/sintatica.tab.c"
    break;

  case 77: /* factor: term  */
#line 376 "sintatica.y"
               {  }
#line 2342 "bin/sintatica.tab.c"
    break;

  case 78: /* factor: exp TK_OP_MUL factor  */
#line 377 "sintatica.y"
                                   {  }
#line 2348 "bin/sintatica.tab.c"
    break;

  case 79: /* factor: exp TK_OP_DIV factor  */
#line 378 "sintatica.y"
                                   {  }
#line 2354 "bin/sintatica.tab.c"
    break;

  case 80: /* factor: exp TK_OP_MOD factor  */
#line 379 "sintatica.y"
                                   {  }
#line 2360 "bin/sintatica.tab.c"
    break;

  case 81: /* factor: exp TK_OP_DIV_INT factor  */
#line 380 "sintatica.y"
                                   {  }
#line 2366 "bin/sintatica.tab.c"
    break;

  case 82: /* factor: exp TK_OP_EXP factor  */
#line 381 "sintatica.y"
                               {  }
#line 2372 "bin/sintatica.tab.c"
    break;

  case 83: /* term: constant  */
#line 385 "sintatica.y"
                                        {  }
#line 2378 "bin/sintatica.tab.c"
    break;

  case 84: /* term: TK_OP exp TK_CP  */
#line 386 "sintatica.y"
                                        {  }
#line 2384 "bin/sintatica.tab.c"
    break;

  case 85: /* term: TK_OP_SUB exp  */
#line 387 "sintatica.y"
                                        {  }
#line 2390 "bin/sintatica.tab.c"
    break;

  case 86: /* term: TK_ID TK_OP explist TK_CP  */
#line 388 "sintatica.y"
                                        { }
#line 2396 "bin/sintatica.tab.c"
    break;

  case 87: /* term: predefinedFuncions  */
#line 389 "sintatica.y"
                                        { }
#line 2402 "bin/sintatica.tab.c"
    break;

  case 88: /* comandoIO: %empty  */
#line 395 "sintatica.y"
                                             { }
#line 2408 "bin/sintatica.tab.c"
    break;

  case 89: /* comandoIO: TK_ESCREVA TK_OP explist TK_CP endline  */
#line 396 "sintatica.y"
                                                  { }
#line 2414 "bin/sintatica.tab.c"
    break;

  case 90: /* comandoIO: TK_ESCREVAL TK_OP explist TK_CP endline  */
#line 397 "sintatica.y"
                                                  { }
#line 2420 "bin/sintatica.tab.c"
    break;

  case 91: /* comandoIO: TK_LEIA TK_OP TK_ID TK_CP endline  */
#line 398 "sintatica.y"
                                                  { }
#line 2426 "bin/sintatica.tab.c"
    break;

  case 92: /* predefinedFuncions: %empty  */
#line 402 "sintatica.y"
                                                                 { }
#line 2432 "bin/sintatica.tab.c"
    break;

  case 93: /* predefinedFuncions: TK_ABS TK_OP exp TK_CP  */
#line 403 "sintatica.y"
                                                                 { }
#line 2438 "bin/sintatica.tab.c"
    break;

  case 94: /* predefinedFuncions: TK_ARCCOS TK_OP exp TK_CP  */
#line 404 "sintatica.y"
                                                                 { }
#line 2444 "bin/sintatica.tab.c"
    break;

  case 95: /* predefinedFuncions: TK_ARCSEN TK_OP exp TK_CP  */
#line 405 "sintatica.y"
                                                                 { }
#line 2450 "bin/sintatica.tab.c"
    break;

  case 96: /* predefinedFuncions: TK_ARCTAN TK_OP exp TK_CP  */
#line 406 "sintatica.y"
                                                                 { }
#line 2456 "bin/sintatica.tab.c"
    break;

  case 97: /* predefinedFuncions: TK_ASC TK_OP exp TK_CP  */
#line 407 "sintatica.y"
                                                                 { }
#line 2462 "bin/sintatica.tab.c"
    break;

  case 98: /* predefinedFuncions: TK_COMPR TK_OP exp TK_CP  */
#line 408 "sintatica.y"
                                                                 { }
#line 2468 "bin/sintatica.tab.c"
    break;

  case 99: /* predefinedFuncions: TK_COPIA TK_OP exp TK_VIRGULA exp TK_VIRGULA exp TK_CP  */
#line 409 "sintatica.y"
                                                                 { }
#line 2474 "bin/sintatica.tab.c"
    break;

  case 100: /* predefinedFuncions: TK_COS TK_OP exp TK_CP  */
#line 410 "sintatica.y"
                                                                 { }
#line 2480 "bin/sintatica.tab.c"
    break;

  case 101: /* predefinedFuncions: TK_COTAN TK_OP exp TK_CP  */
#line 411 "sintatica.y"
                                                                 { }
#line 2486 "bin/sintatica.tab.c"
    break;

  case 102: /* predefinedFuncions: TK_EXP TK_OP exp TK_VIRGULA exp TK_CP  */
#line 412 "sintatica.y"
                                                                 { }
#line 2492 "bin/sintatica.tab.c"
    break;

  case 103: /* predefinedFuncions: TK_GRAUPRAD TK_OP exp TK_CP  */
#line 413 "sintatica.y"
                                                                 { }
#line 2498 "bin/sintatica.tab.c"
    break;

  case 104: /* predefinedFuncions: TK_FUN_INT TK_OP exp TK_CP  */
#line 414 "sintatica.y"
                                                                 { }
#line 2504 "bin/sintatica.tab.c"
    break;

  case 105: /* predefinedFuncions: TK_INTERROMPA  */
#line 415 "sintatica.y"
                                                                 { }
#line 2510 "bin/sintatica.tab.c"
    break;

  case 106: /* predefinedFuncions: TK_LOG TK_OP exp TK_CP  */
#line 416 "sintatica.y"
                                                                 { }
#line 2516 "bin/sintatica.tab.c"
    break;

  case 107: /* predefinedFuncions: TK_LOGN TK_OP exp TK_CP  */
#line 417 "sintatica.y"
                                                                 { }
#line 2522 "bin/sintatica.tab.c"
    break;

  case 108: /* predefinedFuncions: TK_MAIUSC TK_OP exp TK_CP  */
#line 418 "sintatica.y"
                                                                 { }
#line 2528 "bin/sintatica.tab.c"
    break;

  case 109: /* predefinedFuncions: TK_MINUSC TK_OP exp TK_CP  */
#line 419 "sintatica.y"
                                                                 { }
#line 2534 "bin/sintatica.tab.c"
    break;

  case 110: /* predefinedFuncions: TK_NUMPCARAC TK_OP exp TK_CP  */
#line 420 "sintatica.y"
                                                                 { }
#line 2540 "bin/sintatica.tab.c"
    break;

  case 111: /* predefinedFuncions: TK_PI  */
#line 422 "sintatica.y"
                                                                 {
 		double pi = 3.14159265358979323846; 
 		std::string s = "";
		s = std::to_string( pi );
 		yyval.traducao = s; }
#line 2550 "bin/sintatica.tab.c"
    break;

  case 112: /* predefinedFuncions: TK_POS TK_OP exp TK_VIRGULA exp TK_CP  */
#line 428 "sintatica.y"
                                                                 { }
#line 2556 "bin/sintatica.tab.c"
    break;

  case 113: /* predefinedFuncions: TK_QUAD TK_OP exp TK_CP  */
#line 429 "sintatica.y"
                                                                 { }
#line 2562 "bin/sintatica.tab.c"
    break;

  case 114: /* predefinedFuncions: TK_RADPGRAU TK_OP exp TK_CP  */
#line 430 "sintatica.y"
                                                                 { }
#line 2568 "bin/sintatica.tab.c"
    break;

  case 115: /* predefinedFuncions: TK_RAIZQ TK_OP exp TK_CP  */
#line 431 "sintatica.y"
                                                                 { }
#line 2574 "bin/sintatica.tab.c"
    break;

  case 116: /* predefinedFuncions: TK_RAND  */
#line 432 "sintatica.y"
                                                                 { }
#line 2580 "bin/sintatica.tab.c"
    break;

  case 117: /* predefinedFuncions: TK_RANDI TK_OP exp TK_CP  */
#line 433 "sintatica.y"
                                                                 { }
#line 2586 "bin/sintatica.tab.c"
    break;

  case 118: /* predefinedFuncions: TK_SEN TK_OP exp TK_CP  */
#line 434 "sintatica.y"
                                                                 { }
#line 2592 "bin/sintatica.tab.c"
    break;

  case 119: /* predefinedFuncions: TK_TAN TK_OP exp TK_CP  */
#line 435 "sintatica.y"
                                                                 { }
#line 2598 "bin/sintatica.tab.c"
    break;

  case 120: /* predefinedFuncions: TK_ALEATORIO  */
#line 437 "sintatica.y"
                        { }
#line 2604 "bin/sintatica.tab.c"
    break;

  case 121: /* predefinedFuncions: TK_CRONOMETRO  */
#line 438 "sintatica.y"
                        { }
#line 2610 "bin/sintatica.tab.c"
    break;

  case 122: /* predefinedFuncions: TK_DEBUG  */
#line 439 "sintatica.y"
                        { }
#line 2616 "bin/sintatica.tab.c"
    break;

  case 123: /* predefinedFuncions: TK_ECO  */
#line 440 "sintatica.y"
                        { }
#line 2622 "bin/sintatica.tab.c"
    break;

  case 124: /* predefinedFuncions: TK_PAUSA  */
#line 441 "sintatica.y"
                        { }
#line 2628 "bin/sintatica.tab.c"
    break;

  case 125: /* predefinedFuncions: TK_TIMER  */
#line 442 "sintatica.y"
                        { }
#line 2634 "bin/sintatica.tab.c"
    break;

  case 126: /* predefinedFuncions: TK_ARQUIVO  */
#line 443 "sintatica.y"
                        { }
#line 2640 "bin/sintatica.tab.c"
    break;

  case 127: /* predefinedFuncions: TK_MENSAGEM  */
#line 444 "sintatica.y"
                        { }
#line 2646 "bin/sintatica.tab.c"
    break;


#line 2650 "bin/sintatica.tab.c"

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

#line 448 "sintatica.y"


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
