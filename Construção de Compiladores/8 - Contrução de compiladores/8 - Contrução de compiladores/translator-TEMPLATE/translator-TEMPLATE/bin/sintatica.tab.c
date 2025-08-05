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
  YYSYMBOL_arglist = 112,                  /* arglist  */
  YYSYMBOL_retornofuncao = 113,            /* retornofuncao  */
  YYSYMBOL_comandos = 114,                 /* comandos  */
  YYSYMBOL_comando = 115,                  /* comando  */
  YYSYMBOL_passovariacao = 116,            /* passovariacao  */
  YYSYMBOL_caselist = 117,                 /* caselist  */
  YYSYMBOL_constantlist = 118,             /* constantlist  */
  YYSYMBOL_constant = 119,                 /* constant  */
  YYSYMBOL_explist = 120,                  /* explist  */
  YYSYMBOL_exp = 121,                      /* exp  */
  YYSYMBOL_factor = 122,                   /* factor  */
  YYSYMBOL_term = 123,                     /* term  */
  YYSYMBOL_comandoIO = 124,                /* comandoIO  */
  YYSYMBOL_predefinedFuncions = 125        /* predefinedFuncions  */
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
#define YYLAST   2178

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  328

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
       0,   204,   204,   218,   219,   227,   228,   232,   233,   234,
     238,   239,   240,   241,   242,   251,   252,   256,   257,   261,
     262,   263,   264,   268,   269,   277,   278,   279,   283,   284,
     285,   286,   289,   292,   295,   298,   299,   304,   305,   306,
     310,   311,   315,   316,   320,   321,   322,   323,   324,   325,
     326,   330,   331,   332,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   354,
     355,   356,   357,   358,   359,   363,   364,   365,   366,   367,
     374,   375,   376,   377,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   401,   407,   408,   409,   410,   411,   412,
     413,   414,   416,   417,   418,   419,   420,   421,   422,   423
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
  "lstids", "tipo", "bloco_subalgo", "subalgoritmo", "arglist",
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

#define YYPACT_NINF (-215)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-52)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      18,    14,    25,   -73,  -215,   -73,    27,  -215,   -73,   -48,
     -60,   -53,   -49,    68,   -48,    34,  -215,    60,    61,   -16,
    -215,    29,   -60,     5,     5,   -73,  -215,  -215,  -215,  -215,
    -215,   -73,  -215,     5,     5,    69,    71,    73,  1461,   -60,
    -215,  -215,    29,    74,   -10,  -215,  -215,  1764,  1764,  -215,
    -215,  1764,  1764,    -7,    78,    80,    82,  1764,    -2,    -1,
    -215,    86,    88,    89,    94,   100,   101,   107,   108,   109,
     116,   117,   119,   120,   121,   122,   123,   126,   127,   130,
     137,  -215,  -215,   140,   141,  -215,   142,   156,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,     7,   653,   -73,
    -215,  2099,    32,  -215,   -73,   -73,  -215,     5,    29,    27,
     124,  -215,   138,  -215,  1969,    39,    50,  1663,  1663,    91,
    1461,   125,  1764,  1764,  1764,  1764,  1764,  1764,  1764,  1764,
    1764,  1764,  1764,  1764,  1764,  1764,  1764,  1764,  1764,  1764,
    1764,  1764,  1764,  1764,  1764,  1764,  1764,  1663,   -73,  -215,
    -215,  1764,  1764,  1764,  1764,  1764,  1764,  1764,  1764,  1764,
    1764,  1764,  1865,  1865,  1865,  1865,  1865,  -215,  -215,  -215,
      83,   -73,  -215,   -73,    12,   162,   166,  1991,   168,    85,
     754,    84,   270,   344,   368,   392,   422,   447,   548,   649,
     750,  2013,   851,   952,  1053,  2035,  1154,  1255,  2057,  1356,
    1457,  1558,  1582,  1669,  1760,  1784,  2099,   171,  -215,   138,
    2119,  2139,  -215,  -215,  1675,  1675,  1675,  1675,  1675,  1675,
     173,  -215,  -215,  -215,  -215,  -215,    27,   184,  1461,     4,
      92,   146,   -73,   -73,  1663,   -73,  1461,  1764,   139,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  1764,  -215,
    -215,  -215,  1764,  -215,  -215,  1764,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,   -73,    97,   451,  -215,    98,   176,
    1461,  -215,  -215,  -215,  -215,  -215,   855,    10,   103,  1859,
    1883,  2079,   194,  1461,   -73,   -73,  1461,     4,   956,   -73,
    -215,   149,  -215,  -215,  1764,   111,  1057,  1461,  -215,   552,
    -215,  -215,   -17,   145,  1949,  1461,   -73,  1158,  -215,   105,
    -215,   112,  -215,  1259,  -215,  -215,  -215,  1461,  1562,   147,
    1360,  -215,    33,   113,   -73,  -215,  -215,  -215
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     3,     1,     3,     5,     4,     3,    15,
       7,     0,     0,     0,    15,     0,     6,     0,     0,     0,
      16,     0,     7,    19,    19,     3,    10,    11,    12,    13,
      14,     3,     8,    19,    19,     0,     0,     0,    25,     7,
      22,    21,     0,     0,     0,    47,    48,    84,    84,    49,
      50,    84,    84,     0,     0,     0,     0,    84,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,   108,     0,     0,   103,     0,     0,   113,   114,
     115,   116,   117,   118,   119,    44,    45,    46,    80,     3,
      75,    28,    68,    69,     3,     3,     9,    19,     0,     5,
       0,    79,    67,    77,     0,     0,     0,    84,    84,     0,
      25,     0,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,     3,    27,
      26,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    35,    36,    20,
       0,     3,    76,     3,     0,     0,     0,    52,     0,     0,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,     0,     2,    64,
      65,    66,    56,    57,    60,    61,    58,    59,    62,    63,
      46,    70,    71,    73,    72,    74,     5,     0,    25,     0,
       0,     0,     3,     3,    84,     3,    25,    84,     0,   110,
      92,   111,    87,    86,    88,    93,    95,   106,    84,   107,
      98,    99,    84,    89,    90,    84,   100,   101,   102,   109,
      85,   105,    96,    78,     3,     0,    80,    46,     0,    42,
      25,    34,    83,    81,    53,    82,    80,     0,     0,     0,
       0,     0,     0,    25,     3,     3,    25,     0,    80,     3,
      32,    37,    94,   104,    84,     0,    80,    25,    29,    80,
      43,    31,     0,     0,     0,    25,     3,    80,    40,     0,
      38,     0,    91,    80,    17,    30,    39,    25,    84,     0,
      80,    23,     3,     0,     3,    24,    18,    33
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -215,  -215,    -5,  -107,    -8,   -31,   195,  -215,   -15,  -215,
    -116,   -97,  -215,   -85,   -72,  -214,  -113,   198,  -215,   -84,
    -215,   -32
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     6,     9,    16,    31,    13,    14,    36,   319,
      98,    99,   303,   231,   268,   100,   176,   101,   102,   103,
     104,   111
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,   149,   171,    10,   180,   178,   105,    45,    46,    37,
     309,   107,    11,    33,    32,   269,    12,     3,    40,    41,
      38,   146,   147,     1,    34,     4,    39,     5,    49,    50,
     151,   106,   152,   153,   207,     8,   154,   155,    26,    27,
      28,    29,    30,    15,   156,   157,   158,   159,   160,   161,
      17,    21,    22,   151,    18,   152,   153,   229,   230,   154,
     155,   162,   163,   164,   165,   166,   105,   156,   157,   158,
     159,   160,   161,   269,    19,    23,    24,   170,   221,   222,
     223,   224,   225,   149,    25,   310,    42,    43,   105,    44,
     109,   108,   169,   116,   150,   117,   115,   118,   120,   167,
     168,   122,   121,   123,   124,    95,    96,   267,    35,   125,
     290,   151,   266,   152,   153,   126,   127,   154,   155,   264,
     276,   274,   128,   129,   130,   156,   157,   158,   159,   160,
     161,   131,   132,     5,   133,   134,   135,   136,   137,   174,
     172,   138,   139,   208,   151,   140,   152,   153,   105,   179,
     154,   155,   141,   175,   288,   142,   143,   144,   156,   157,
     158,   159,   160,   161,   154,   155,   227,   296,   228,   149,
     299,   145,   156,   157,   158,   159,   160,   161,   232,   149,
     181,   307,   233,   226,   235,   236,   238,   263,   147,   313,
     265,   149,   270,   271,   287,   278,   105,   283,   286,   149,
     295,   320,   149,   311,   105,   291,   302,   316,   323,    20,
     149,   305,   317,   326,   308,   300,   149,     0,     0,     0,
       0,     0,     0,   149,     0,     0,     0,   272,   273,     0,
     275,     0,     0,     0,   105,     0,     0,     0,   105,     0,
       0,     0,     0,     0,   105,   110,   112,     0,     0,   113,
     114,   105,     0,     0,   105,   119,   105,     0,     0,   282,
       0,     0,     0,     0,   105,   105,     0,   105,     0,     0,
       0,     0,     0,   105,     0,   105,     0,     0,     0,   297,
     298,   105,     0,     0,   301,   105,   239,     0,   105,     0,
     151,     0,   152,   153,     0,     0,   154,   155,     0,     0,
       0,   314,     0,     0,   156,   157,   158,   159,   160,   161,
       0,     0,     0,   321,     0,   177,   177,   325,     0,   327,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   177,     0,     0,     0,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     240,     0,     0,     0,   151,     0,   152,   153,     0,     0,
     154,   155,     0,     0,     0,     0,     0,     0,   156,   157,
     158,   159,   160,   161,   241,     0,     0,     0,   151,     0,
     152,   153,     0,     0,   154,   155,     0,     0,     0,     0,
       0,     0,   156,   157,   158,   159,   160,   161,   242,     0,
       0,     0,   151,     0,   152,   153,     0,     0,   154,   155,
       0,     0,     0,     0,     0,     0,   156,   157,   158,   159,
     160,   161,   177,     0,     0,   277,     0,     0,   243,     0,
       0,     0,   151,     0,   152,   153,   279,     0,   154,   155,
     280,     0,     0,   281,    45,    46,   156,   157,   158,   159,
     160,   161,     0,   244,     0,     0,    47,   151,     0,   152,
     153,     0,    48,   154,   155,    49,    50,     0,    51,     0,
       0,   156,   157,   158,   159,   160,   161,     0,     0,     0,
       0,    52,   304,   284,   285,    53,     0,     0,     0,    54,
      55,    56,    57,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    60,     0,   322,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,     0,    95,    96,    97,    45,    46,     0,     0,     0,
       0,     0,     0,     0,   245,     0,     0,    47,   151,     0,
     152,   153,     0,    48,   154,   155,    49,    50,     0,    51,
       0,     0,   156,   157,   158,   159,   160,   161,     0,     0,
       0,     0,    52,     0,     0,     0,    53,   229,   230,     0,
      54,    55,    56,    57,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,     0,    60,     0,     0,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,     0,    95,    96,    97,    45,    46,     0,     0,
     148,     0,     0,     0,     0,   246,     0,     0,    47,   151,
       0,   152,   153,     0,    48,   154,   155,    49,    50,     0,
      51,     0,     0,   156,   157,   158,   159,   160,   161,     0,
       0,     0,     0,    52,     0,     0,     0,    53,     0,     0,
       0,    54,    55,    56,    57,     0,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    60,     0,     0,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,     0,    95,    96,    97,    45,    46,     0,
       0,     0,     0,     0,     0,     0,   247,     0,     0,    47,
     151,     0,   152,   153,     0,    48,   154,   155,    49,    50,
       0,    51,     0,     0,   156,   157,   158,   159,   160,   161,
       0,     0,     0,     0,    52,     0,     0,     0,    53,     0,
       0,     0,    54,    55,    56,    57,     0,    58,    59,     0,
     237,     0,     0,     0,     0,     0,     0,    60,     0,     0,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     0,    95,    96,    97,    45,    46,
       0,     0,     0,     0,     0,     0,     0,   249,     0,     0,
      47,   151,     0,   152,   153,     0,    48,   154,   155,    49,
      50,     0,    51,     0,     0,   156,   157,   158,   159,   160,
     161,     0,     0,     0,     0,    52,     0,     0,     0,    53,
       0,     0,     0,    54,    55,    56,    57,   289,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    60,     0,
       0,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,     0,    95,    96,    97,    45,
      46,     0,     0,     0,     0,     0,     0,     0,   250,     0,
       0,    47,   151,     0,   152,   153,     0,    48,   154,   155,
      49,    50,     0,    51,     0,     0,   156,   157,   158,   159,
     160,   161,     0,     0,     0,     0,    52,     0,     0,     0,
      53,     0,     0,   -41,    54,    55,    56,    57,     0,    58,
      59,     0,     0,     0,     0,     0,     0,     0,     0,    60,
       0,     0,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,     0,    95,    96,    97,
      45,    46,     0,     0,     0,     0,     0,     0,     0,   251,
       0,     0,    47,   151,     0,   152,   153,     0,    48,   154,
     155,    49,    50,     0,    51,     0,     0,   156,   157,   158,
     159,   160,   161,     0,     0,     0,     0,    52,     0,     0,
       0,    53,     0,     0,     0,    54,    55,    56,    57,     0,
      58,    59,     0,     0,     0,     0,     0,     0,     0,     0,
      60,     0,   306,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,     0,    95,    96,
      97,    45,    46,     0,     0,     0,     0,     0,     0,     0,
     253,     0,     0,    47,   151,     0,   152,   153,     0,    48,
     154,   155,    49,    50,     0,    51,     0,     0,   156,   157,
     158,   159,   160,   161,     0,     0,     0,     0,    52,     0,
       0,   315,    53,     0,     0,     0,    54,    55,    56,    57,
       0,    58,    59,     0,     0,     0,     0,     0,     0,     0,
       0,    60,     0,     0,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,     0,    95,
      96,    97,    45,    46,     0,     0,     0,     0,     0,     0,
       0,   254,     0,     0,    47,   151,     0,   152,   153,     0,
      48,   154,   155,    49,    50,     0,    51,     0,     0,   156,
     157,   158,   159,   160,   161,     0,     0,     0,     0,    52,
       0,     0,     0,    53,     0,     0,     0,    54,    55,    56,
      57,     0,    58,    59,     0,     0,     0,     0,     0,     0,
       0,   318,    60,     0,     0,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,     0,
      95,    96,    97,    45,    46,     0,     0,     0,     0,     0,
       0,     0,   256,     0,     0,    47,   151,     0,   152,   153,
       0,    48,   154,   155,    49,    50,     0,    51,     0,     0,
     156,   157,   158,   159,   160,   161,     0,     0,     0,     0,
      52,     0,     0,     0,    53,     0,     0,     0,    54,    55,
      56,    57,     0,    58,    59,     0,     0,     0,     0,   324,
       0,     0,     0,    60,     0,     0,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
       0,    95,    96,    97,    45,    46,     0,     0,     0,     0,
       0,     0,     0,   257,     0,     0,    47,   151,     0,   152,
     153,     0,    48,   154,   155,    49,    50,     0,    51,     0,
       0,   156,   157,   158,   159,   160,   161,     0,     0,     0,
       0,    52,     0,     0,     0,    53,     0,     0,     0,    54,
      55,    56,    57,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    60,     0,     0,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,     0,    95,    96,    97,    45,    46,     0,     0,     0,
       0,     0,     0,     0,   258,     0,     0,    47,   151,     0,
     152,   153,     0,    48,   154,   155,    49,    50,     0,    51,
       0,     0,   156,   157,   158,   159,   160,   161,   259,     0,
       0,     0,   151,     0,   152,   153,     0,     0,   154,   155,
       0,     0,     0,     0,     0,     0,   156,   157,   158,   159,
     160,   161,     0,    -3,     0,    60,     0,     0,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,     5,    95,    96,    97,    45,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,   -51,
       0,     0,     0,     0,    48,   260,     0,    49,    50,   151,
      51,   152,   153,     0,     0,   154,   155,     0,     0,     0,
       0,   154,   155,   156,   157,   158,   159,   160,   161,   -52,
     -52,   -52,   -52,   -52,   -52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    60,     0,     0,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,     0,    95,    96,    97,    45,    46,     0,
       0,     0,     0,     0,     0,     0,   261,     0,     0,    47,
     151,     0,   152,   153,     0,    48,   154,   155,    49,    50,
       0,    51,     0,     0,   156,   157,   158,   159,   160,   161,
     262,     0,     0,     0,   151,     0,   152,   153,     0,     0,
     154,   155,     0,     0,     0,     0,     0,     0,   156,   157,
     158,   159,   160,   161,     0,     0,     0,    60,     0,     0,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     0,    95,    96,    97,    45,    46,
       0,     0,     0,     0,     0,   292,     0,     0,     0,   151,
      47,   152,   153,     0,     0,   154,   155,     0,     0,    49,
      50,     0,    51,   156,   157,   158,   159,   160,   161,   293,
       0,     0,     0,   151,     0,   152,   153,     0,     0,   154,
     155,     0,     0,     0,     0,     0,     0,   156,   157,   158,
     159,   160,   161,     0,     0,     0,     0,     0,    60,     0,
       0,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,   312,    95,    96,   220,   151,
       0,   152,   153,     0,     0,   154,   155,     0,     0,     0,
       0,     0,     0,   156,   157,   158,   159,   160,   161,   151,
       0,   152,   153,     0,     0,   154,   155,     0,     0,     0,
       0,     0,     0,   156,   157,   158,   159,   160,   161,   234,
     173,   151,     0,   152,   153,     0,     0,   154,   155,     0,
       0,     0,     0,     0,     0,   156,   157,   158,   159,   160,
     161,   248,     0,   151,     0,   152,   153,     0,     0,   154,
     155,     0,     0,     0,     0,     0,     0,   156,   157,   158,
     159,   160,   161,   252,     0,   151,     0,   152,   153,     0,
       0,   154,   155,     0,     0,     0,     0,     0,     0,   156,
     157,   158,   159,   160,   161,   255,     0,   151,     0,   152,
     153,     0,     0,   154,   155,     0,     0,     0,     0,     0,
       0,   156,   157,   158,   159,   160,   161,   294,     0,   151,
       0,   152,   153,     0,     0,   154,   155,     0,     0,     0,
       0,     0,     0,   156,   157,   158,   159,   160,   161,   151,
       0,   152,   153,     0,     0,   154,   155,     0,     0,     0,
       0,     0,     0,   156,   157,   158,   159,   160,   161,   151,
       0,     0,   153,     0,     0,   154,   155,     0,     0,     0,
       0,     0,     0,   156,   157,   158,   159,   160,   161,   151,
       0,     0,     0,     0,     0,   154,   155,     0,     0,     0,
       0,     0,     0,   156,   157,   158,   159,   160,   161
};

static const yytype_int16 yycheck[] =
{
       5,    98,   109,     8,   120,   118,    38,     3,     4,    24,
      27,    42,    60,     8,    22,   229,    64,     3,    33,    34,
      25,    14,    15,     5,    19,     0,    31,   100,    24,    25,
      20,    39,    22,    23,   147,     8,    26,    27,     9,    10,
      11,    12,    13,   103,    34,    35,    36,    37,    38,    39,
     103,    17,    18,    20,   103,    22,    23,    45,    46,    26,
      27,    29,    30,    31,    32,    33,    98,    34,    35,    36,
      37,    38,    39,   287,     6,    15,    15,   108,   162,   163,
     164,   165,   166,   180,   100,   102,    17,    16,   120,    16,
     100,    17,   107,    15,    99,    15,   103,    15,   100,   104,
     105,    15,   103,    15,    15,   101,   102,   103,   103,    15,
     100,    20,   228,    22,    23,    15,    15,    26,    27,   226,
     236,   234,    15,    15,    15,    34,    35,    36,    37,    38,
      39,    15,    15,   100,    15,    15,    15,    15,    15,   100,
      16,    15,    15,   148,    20,    15,    22,    23,   180,    58,
      26,    27,    15,   103,   270,    15,    15,    15,    34,    35,
      36,    37,    38,    39,    26,    27,   171,   283,   173,   266,
     286,    15,    34,    35,    36,    37,    38,    39,    16,   276,
      55,   297,    16,   100,    16,   100,   102,    16,    15,   305,
       6,   288,   100,    47,    18,    56,   228,   100,   100,   296,
       6,   317,   299,    58,   236,   102,    57,   102,    61,    14,
     307,   100,   100,   100,   299,   287,   313,    -1,    -1,    -1,
      -1,    -1,    -1,   320,    -1,    -1,    -1,   232,   233,    -1,
     235,    -1,    -1,    -1,   266,    -1,    -1,    -1,   270,    -1,
      -1,    -1,    -1,    -1,   276,    47,    48,    -1,    -1,    51,
      52,   283,    -1,    -1,   286,    57,   288,    -1,    -1,   264,
      -1,    -1,    -1,    -1,   296,   297,    -1,   299,    -1,    -1,
      -1,    -1,    -1,   305,    -1,   307,    -1,    -1,    -1,   284,
     285,   313,    -1,    -1,   289,   317,    16,    -1,   320,    -1,
      20,    -1,    22,    23,    -1,    -1,    26,    27,    -1,    -1,
      -1,   306,    -1,    -1,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,   318,    -1,   117,   118,   322,    -1,   324,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,    -1,    -1,    -1,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
      16,    -1,    -1,    -1,    20,    -1,    22,    23,    -1,    -1,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    16,    -1,    -1,    -1,    20,    -1,
      22,    23,    -1,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    16,    -1,
      -1,    -1,    20,    -1,    22,    23,    -1,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,   234,    -1,    -1,   237,    -1,    -1,    16,    -1,
      -1,    -1,    20,    -1,    22,    23,   248,    -1,    26,    27,
     252,    -1,    -1,   255,     3,     4,    34,    35,    36,    37,
      38,    39,    -1,    16,    -1,    -1,    15,    20,    -1,    22,
      23,    -1,    21,    26,    27,    24,    25,    -1,    27,    -1,
      -1,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    40,   294,    42,    43,    44,    -1,    -1,    -1,    48,
      49,    50,    51,    -1,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,   318,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    -1,   101,   102,   103,     3,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    -1,    -1,    15,    20,    -1,
      22,    23,    -1,    21,    26,    27,    24,    25,    -1,    27,
      -1,    -1,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    45,    46,    -1,
      48,    49,    50,    51,    -1,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    -1,   101,   102,   103,     3,     4,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    16,    -1,    -1,    15,    20,
      -1,    22,    23,    -1,    21,    26,    27,    24,    25,    -1,
      27,    -1,    -1,    34,    35,    36,    37,    38,    39,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    48,    49,    50,    51,    -1,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    -1,   101,   102,   103,     3,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    15,
      20,    -1,    22,    23,    -1,    21,    26,    27,    24,    25,
      -1,    27,    -1,    -1,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    48,    49,    50,    51,    -1,    53,    54,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    -1,   101,   102,   103,     3,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,
      15,    20,    -1,    22,    23,    -1,    21,    26,    27,    24,
      25,    -1,    27,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    -1,   101,   102,   103,     3,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,
      -1,    15,    20,    -1,    22,    23,    -1,    21,    26,    27,
      24,    25,    -1,    27,    -1,    -1,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      44,    -1,    -1,    47,    48,    49,    50,    51,    -1,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    -1,   101,   102,   103,
       3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      -1,    -1,    15,    20,    -1,    22,    23,    -1,    21,    26,
      27,    24,    25,    -1,    27,    -1,    -1,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    48,    49,    50,    51,    -1,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    -1,   101,   102,
     103,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    -1,    -1,    15,    20,    -1,    22,    23,    -1,    21,
      26,    27,    24,    25,    -1,    27,    -1,    -1,    34,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    43,    44,    -1,    -1,    -1,    48,    49,    50,    51,
      -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    -1,   101,
     102,   103,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    -1,    15,    20,    -1,    22,    23,    -1,
      21,    26,    27,    24,    25,    -1,    27,    -1,    -1,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    48,    49,    50,
      51,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    -1,
     101,   102,   103,     3,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    -1,    15,    20,    -1,    22,    23,
      -1,    21,    26,    27,    24,    25,    -1,    27,    -1,    -1,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    44,    -1,    -1,    -1,    48,    49,
      50,    51,    -1,    53,    54,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    63,    -1,    -1,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      -1,   101,   102,   103,     3,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    -1,    -1,    15,    20,    -1,    22,
      23,    -1,    21,    26,    27,    24,    25,    -1,    27,    -1,
      -1,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    44,    -1,    -1,    -1,    48,
      49,    50,    51,    -1,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    -1,   101,   102,   103,     3,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    -1,    -1,    15,    20,    -1,
      22,    23,    -1,    21,    26,    27,    24,    25,    -1,    27,
      -1,    -1,    34,    35,    36,    37,    38,    39,    16,    -1,
      -1,    -1,    20,    -1,    22,    23,    -1,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    -1,    61,    -1,    63,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,     3,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,
      -1,    -1,    -1,    -1,    21,    16,    -1,    24,    25,    20,
      27,    22,    23,    -1,    -1,    26,    27,    -1,    -1,    -1,
      -1,    26,    27,    34,    35,    36,    37,    38,    39,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    -1,   101,   102,   103,     3,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    15,
      20,    -1,    22,    23,    -1,    21,    26,    27,    24,    25,
      -1,    27,    -1,    -1,    34,    35,    36,    37,    38,    39,
      16,    -1,    -1,    -1,    20,    -1,    22,    23,    -1,    -1,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    63,    -1,    -1,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    -1,   101,   102,   103,     3,     4,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,    20,
      15,    22,    23,    -1,    -1,    26,    27,    -1,    -1,    24,
      25,    -1,    27,    34,    35,    36,    37,    38,    39,    16,
      -1,    -1,    -1,    20,    -1,    22,    23,    -1,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    16,   101,   102,   103,    20,
      -1,    22,    23,    -1,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    20,
      -1,    22,    23,    -1,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    18,
      41,    20,    -1,    22,    23,    -1,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    18,    -1,    20,    -1,    22,    23,    -1,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    18,    -1,    20,    -1,    22,    23,    -1,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    18,    -1,    20,    -1,    22,
      23,    -1,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    18,    -1,    20,
      -1,    22,    23,    -1,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    20,
      -1,    22,    23,    -1,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    20,
      -1,    -1,    23,    -1,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    20,
      -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,   105,     3,     0,   100,   106,   106,     8,   107,
     106,    60,    64,   110,   111,   103,   108,   103,   103,     6,
     110,    17,    18,    15,    15,   100,     9,    10,    11,    12,
      13,   109,   108,     8,    19,   103,   112,   112,   106,   106,
     112,   112,    17,    16,    16,     3,     4,    15,    21,    24,
      25,    27,    40,    44,    48,    49,    50,    51,    53,    54,
      63,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   101,   102,   103,   114,   115,
     119,   121,   122,   123,   124,   125,   108,   109,    17,   100,
     121,   125,   121,   121,   121,   103,    15,    15,    15,   121,
     100,   103,    15,    15,    15,    15,    15,    15,    15,    15,
      15,    15,    15,    15,    15,    15,    15,    15,    15,    15,
      15,    15,    15,    15,    15,    15,    14,    15,     7,   115,
     106,    20,    22,    23,    26,    27,    34,    35,    36,    37,
      38,    39,    29,    30,    31,    32,    33,   106,   106,   112,
     109,   107,    16,    41,   100,   103,   120,   121,   120,    58,
     114,    55,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   120,   106,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     103,   123,   123,   123,   123,   123,   100,   106,   106,    45,
      46,   117,    16,    16,    18,    16,   100,    56,   102,    16,
      16,    16,    16,    16,    16,    16,    16,    16,    18,    16,
      16,    16,    18,    16,    16,    18,    16,    16,    16,    16,
      16,    16,    16,    16,   107,     6,   114,   103,   118,   119,
     100,    47,   106,   106,   120,   106,   114,   121,    56,   121,
     121,   121,   106,   100,    42,    43,   100,    18,   114,    52,
     100,   102,    16,    16,    18,     6,   114,   106,   106,   114,
     118,   106,    57,   116,   121,   100,    65,   114,   117,    27,
     102,    58,    16,   114,   106,    43,   102,   100,    62,   113,
     114,   106,   121,    61,    59,   106,   100,   106
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,   104,   105,   106,   106,   107,   107,   108,   108,   108,
     109,   109,   109,   109,   109,   110,   110,   111,   111,   112,
     112,   112,   112,   113,   113,   114,   114,   114,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   116,   116,   116,
     117,   117,   118,   118,   119,   119,   119,   119,   119,   119,
     119,   120,   120,   120,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   122,
     122,   122,   122,   122,   122,   123,   123,   123,   123,   123,
     124,   124,   124,   124,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,    11,     0,     2,     0,     3,     0,     3,     5,
       1,     1,     1,     1,     1,     0,     2,    13,    16,     0,
       4,     2,     2,     2,     3,     0,     2,     2,     1,     7,
       9,     7,     6,    12,     5,     2,     2,     0,     2,     3,
       5,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     3,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     1,     1,
       3,     3,     3,     3,     3,     1,     3,     2,     4,     1,
       0,     5,     5,     5,     0,     4,     4,     4,     4,     4,
       4,     8,     4,     4,     6,     4,     4,     1,     4,     4,
       4,     4,     4,     1,     6,     4,     4,     4,     1,     4,
       4,     4,     1,     1,     1,     1,     1,     1,     1,     1
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
#line 1802 "bin/sintatica.tab.c"
    break;

  case 3: /* endline: %empty  */
#line 218 "sintatica.y"
                    {  }
#line 1808 "bin/sintatica.tab.c"
    break;

  case 4: /* endline: TK_NL endline  */
#line 219 "sintatica.y"
                    {  }
#line 1814 "bin/sintatica.tab.c"
    break;

  case 5: /* bloco_var: %empty  */
#line 227 "sintatica.y"
                              {  }
#line 1820 "bin/sintatica.tab.c"
    break;

  case 6: /* bloco_var: TK_VAR endline lstids  */
#line 228 "sintatica.y"
                            {  }
#line 1826 "bin/sintatica.tab.c"
    break;

  case 7: /* lstids: %empty  */
#line 232 "sintatica.y"
                                          {  }
#line 1832 "bin/sintatica.tab.c"
    break;

  case 8: /* lstids: TK_ID TK_VIRGULA lstids  */
#line 233 "sintatica.y"
                                              {  }
#line 1838 "bin/sintatica.tab.c"
    break;

  case 9: /* lstids: TK_ID TK_OP_VAR tipo endline lstids  */
#line 234 "sintatica.y"
                                              {  }
#line 1844 "bin/sintatica.tab.c"
    break;

  case 10: /* tipo: TK_TIPO_INTEIRO  */
#line 238 "sintatica.y"
                       { }
#line 1850 "bin/sintatica.tab.c"
    break;

  case 11: /* tipo: TK_TIPO_LITERAL  */
#line 239 "sintatica.y"
                           { }
#line 1856 "bin/sintatica.tab.c"
    break;

  case 12: /* tipo: TK_TIPO_CARACTER  */
#line 240 "sintatica.y"
                           { }
#line 1862 "bin/sintatica.tab.c"
    break;

  case 13: /* tipo: TK_TIPO_LOGICO  */
#line 241 "sintatica.y"
                           { }
#line 1868 "bin/sintatica.tab.c"
    break;

  case 14: /* tipo: TK_TIPO_NUMERICO  */
#line 242 "sintatica.y"
                           { }
#line 1874 "bin/sintatica.tab.c"
    break;

  case 15: /* bloco_subalgo: %empty  */
#line 251 "sintatica.y"
                                 {  }
#line 1880 "bin/sintatica.tab.c"
    break;

  case 16: /* bloco_subalgo: subalgoritmo bloco_subalgo  */
#line 252 "sintatica.y"
                                     {  }
#line 1886 "bin/sintatica.tab.c"
    break;

  case 17: /* subalgoritmo: TK_PROCEDIMENTO TK_ID TK_OP arglist TK_CP TK_NL bloco_var endline TK_INICIO TK_NL comandos TK_FIMPROCEDIMENTO endline  */
#line 256 "sintatica.y"
                                                                                                                                {  }
#line 1892 "bin/sintatica.tab.c"
    break;

  case 18: /* subalgoritmo: TK_FUNCAO TK_ID TK_OP arglist TK_CP TK_OP_VAR tipo TK_NL bloco_var endline TK_INICIO TK_NL comandos retornofuncao TK_FIMFUNCAO TK_NL  */
#line 257 "sintatica.y"
                                                                                                                                               {  }
#line 1898 "bin/sintatica.tab.c"
    break;

  case 19: /* arglist: %empty  */
#line 261 "sintatica.y"
                                       {  }
#line 1904 "bin/sintatica.tab.c"
    break;

  case 20: /* arglist: TK_ID TK_OP_VAR tipo arglist  */
#line 262 "sintatica.y"
                                       {  }
#line 1910 "bin/sintatica.tab.c"
    break;

  case 21: /* arglist: TK_PONTO_VIRGULA arglist  */
#line 263 "sintatica.y"
                                       {  }
#line 1916 "bin/sintatica.tab.c"
    break;

  case 22: /* arglist: TK_VAR arglist  */
#line 264 "sintatica.y"
                                       {  }
#line 1922 "bin/sintatica.tab.c"
    break;

  case 23: /* retornofuncao: TK_RETORNE endline  */
#line 268 "sintatica.y"
                                 {  }
#line 1928 "bin/sintatica.tab.c"
    break;

  case 24: /* retornofuncao: TK_RETORNE exp endline  */
#line 269 "sintatica.y"
                                 {  }
#line 1934 "bin/sintatica.tab.c"
    break;

  case 25: /* comandos: %empty  */
#line 277 "sintatica.y"
                           {  }
#line 1940 "bin/sintatica.tab.c"
    break;

  case 26: /* comandos: comando endline  */
#line 278 "sintatica.y"
                       {  }
#line 1946 "bin/sintatica.tab.c"
    break;

  case 27: /* comandos: comandos comando  */
#line 279 "sintatica.y"
                       {  }
#line 1952 "bin/sintatica.tab.c"
    break;

  case 28: /* comando: exp  */
#line 283 "sintatica.y"
              {   }
#line 1958 "bin/sintatica.tab.c"
    break;

  case 29: /* comando: TK_SE exp TK_ENTAO endline comandos TK_FIMSE endline  */
#line 284 "sintatica.y"
                                                               {  }
#line 1964 "bin/sintatica.tab.c"
    break;

  case 30: /* comando: TK_SE exp TK_ENTAO endline comandos TK_SENAO endline comandos TK_FIMSE  */
#line 285 "sintatica.y"
                                                                                 {  }
#line 1970 "bin/sintatica.tab.c"
    break;

  case 31: /* comando: TK_ENQUANTO exp TK_FACA TK_NL comandos TK_FIMENQUANTO endline  */
#line 288 "sintatica.y"
                                  {  }
#line 1976 "bin/sintatica.tab.c"
    break;

  case 32: /* comando: TK_REPITA TK_NL comandos TK_ATE exp TK_NL  */
#line 291 "sintatica.y"
                            {  }
#line 1982 "bin/sintatica.tab.c"
    break;

  case 33: /* comando: TK_PARA TK_ID TK_DE TK_NUM_INT TK_ATE TK_NUM_INT passovariacao TK_FACA TK_NL comandos TK_FIMPARA endline  */
#line 294 "sintatica.y"
                              { }
#line 1988 "bin/sintatica.tab.c"
    break;

  case 34: /* comando: TK_ESCOLHA TK_ID TK_NL caselist TK_FIMESCOLHA  */
#line 297 "sintatica.y"
                         { }
#line 1994 "bin/sintatica.tab.c"
    break;

  case 35: /* comando: comandoIO endline  */
#line 298 "sintatica.y"
                            { }
#line 2000 "bin/sintatica.tab.c"
    break;

  case 36: /* comando: predefinedFuncions endline  */
#line 299 "sintatica.y"
                                     { }
#line 2006 "bin/sintatica.tab.c"
    break;

  case 37: /* passovariacao: %empty  */
#line 304 "sintatica.y"
                  {  }
#line 2012 "bin/sintatica.tab.c"
    break;

  case 38: /* passovariacao: TK_PASSO TK_NUM_INT  */
#line 305 "sintatica.y"
                              { }
#line 2018 "bin/sintatica.tab.c"
    break;

  case 39: /* passovariacao: TK_PASSO TK_OP_SUB TK_NUM_INT  */
#line 306 "sintatica.y"
                                                        { }
#line 2024 "bin/sintatica.tab.c"
    break;

  case 40: /* caselist: TK_CASO constantlist TK_NL comandos caselist  */
#line 310 "sintatica.y"
                                                       { }
#line 2030 "bin/sintatica.tab.c"
    break;

  case 41: /* caselist: TK_OUTROCASO TK_NL comandos  */
#line 311 "sintatica.y"
                                      { }
#line 2036 "bin/sintatica.tab.c"
    break;

  case 42: /* constantlist: constant  */
#line 315 "sintatica.y"
                                           { }
#line 2042 "bin/sintatica.tab.c"
    break;

  case 43: /* constantlist: constant TK_VIRGULA constantlist  */
#line 316 "sintatica.y"
                                           { }
#line 2048 "bin/sintatica.tab.c"
    break;

  case 44: /* constant: TK_NUM  */
#line 320 "sintatica.y"
                                        {  }
#line 2054 "bin/sintatica.tab.c"
    break;

  case 45: /* constant: TK_NUM_INT  */
#line 321 "sintatica.y"
                                        {  }
#line 2060 "bin/sintatica.tab.c"
    break;

  case 46: /* constant: TK_ID  */
#line 322 "sintatica.y"
                                        {  }
#line 2066 "bin/sintatica.tab.c"
    break;

  case 47: /* constant: VLR_STRING  */
#line 323 "sintatica.y"
                                        {  }
#line 2072 "bin/sintatica.tab.c"
    break;

  case 48: /* constant: VLR_CHARACTER  */
#line 324 "sintatica.y"
                                        {  }
#line 2078 "bin/sintatica.tab.c"
    break;

  case 49: /* constant: TK_CONST_FALSO  */
#line 325 "sintatica.y"
                                        {  }
#line 2084 "bin/sintatica.tab.c"
    break;

  case 50: /* constant: TK_CONST_VERDADEIRO  */
#line 326 "sintatica.y"
                                        {  }
#line 2090 "bin/sintatica.tab.c"
    break;

  case 52: /* explist: exp  */
#line 331 "sintatica.y"
                                 {  }
#line 2096 "bin/sintatica.tab.c"
    break;

  case 53: /* explist: exp TK_VIRGULA explist  */
#line 332 "sintatica.y"
                                 {  }
#line 2102 "bin/sintatica.tab.c"
    break;

  case 80: /* comandoIO: %empty  */
#line 374 "sintatica.y"
                                             { }
#line 2108 "bin/sintatica.tab.c"
    break;

  case 81: /* comandoIO: TK_ESCREVA TK_OP explist TK_CP endline  */
#line 375 "sintatica.y"
                                                  { }
#line 2114 "bin/sintatica.tab.c"
    break;

  case 82: /* comandoIO: TK_ESCREVAL TK_OP explist TK_CP endline  */
#line 376 "sintatica.y"
                                                  { }
#line 2120 "bin/sintatica.tab.c"
    break;

  case 83: /* comandoIO: TK_LEIA TK_OP TK_ID TK_CP endline  */
#line 377 "sintatica.y"
                                                  { }
#line 2126 "bin/sintatica.tab.c"
    break;

  case 84: /* predefinedFuncions: %empty  */
#line 381 "sintatica.y"
                                                                 { }
#line 2132 "bin/sintatica.tab.c"
    break;

  case 85: /* predefinedFuncions: TK_ABS TK_OP exp TK_CP  */
#line 382 "sintatica.y"
                                                                 { }
#line 2138 "bin/sintatica.tab.c"
    break;

  case 86: /* predefinedFuncions: TK_ARCCOS TK_OP exp TK_CP  */
#line 383 "sintatica.y"
                                                                 { }
#line 2144 "bin/sintatica.tab.c"
    break;

  case 87: /* predefinedFuncions: TK_ARCSEN TK_OP exp TK_CP  */
#line 384 "sintatica.y"
                                                                 { }
#line 2150 "bin/sintatica.tab.c"
    break;

  case 88: /* predefinedFuncions: TK_ARCTAN TK_OP exp TK_CP  */
#line 385 "sintatica.y"
                                                                 { }
#line 2156 "bin/sintatica.tab.c"
    break;

  case 89: /* predefinedFuncions: TK_ASC TK_OP exp TK_CP  */
#line 386 "sintatica.y"
                                                                 { }
#line 2162 "bin/sintatica.tab.c"
    break;

  case 90: /* predefinedFuncions: TK_COMPR TK_OP exp TK_CP  */
#line 387 "sintatica.y"
                                                                 { }
#line 2168 "bin/sintatica.tab.c"
    break;

  case 91: /* predefinedFuncions: TK_COPIA TK_OP exp TK_VIRGULA exp TK_VIRGULA exp TK_CP  */
#line 388 "sintatica.y"
                                                                 { }
#line 2174 "bin/sintatica.tab.c"
    break;

  case 92: /* predefinedFuncions: TK_COS TK_OP exp TK_CP  */
#line 389 "sintatica.y"
                                                                 { }
#line 2180 "bin/sintatica.tab.c"
    break;

  case 93: /* predefinedFuncions: TK_COTAN TK_OP exp TK_CP  */
#line 390 "sintatica.y"
                                                                 { }
#line 2186 "bin/sintatica.tab.c"
    break;

  case 94: /* predefinedFuncions: TK_EXP TK_OP exp TK_VIRGULA exp TK_CP  */
#line 391 "sintatica.y"
                                                                 { }
#line 2192 "bin/sintatica.tab.c"
    break;

  case 95: /* predefinedFuncions: TK_GRAUPRAD TK_OP exp TK_CP  */
#line 392 "sintatica.y"
                                                                 { }
#line 2198 "bin/sintatica.tab.c"
    break;

  case 96: /* predefinedFuncions: TK_FUN_INT TK_OP exp TK_CP  */
#line 393 "sintatica.y"
                                                                 { }
#line 2204 "bin/sintatica.tab.c"
    break;

  case 97: /* predefinedFuncions: TK_INTERROMPA  */
#line 394 "sintatica.y"
                                                                 { }
#line 2210 "bin/sintatica.tab.c"
    break;

  case 98: /* predefinedFuncions: TK_LOG TK_OP exp TK_CP  */
#line 395 "sintatica.y"
                                                                 { }
#line 2216 "bin/sintatica.tab.c"
    break;

  case 99: /* predefinedFuncions: TK_LOGN TK_OP exp TK_CP  */
#line 396 "sintatica.y"
                                                                 { }
#line 2222 "bin/sintatica.tab.c"
    break;

  case 100: /* predefinedFuncions: TK_MAIUSC TK_OP exp TK_CP  */
#line 397 "sintatica.y"
                                                                 { }
#line 2228 "bin/sintatica.tab.c"
    break;

  case 101: /* predefinedFuncions: TK_MINUSC TK_OP exp TK_CP  */
#line 398 "sintatica.y"
                                                                 { }
#line 2234 "bin/sintatica.tab.c"
    break;

  case 102: /* predefinedFuncions: TK_NUMPCARAC TK_OP exp TK_CP  */
#line 399 "sintatica.y"
                                                                 { }
#line 2240 "bin/sintatica.tab.c"
    break;

  case 103: /* predefinedFuncions: TK_PI  */
#line 401 "sintatica.y"
                                                                 {
		double pi = 3.14159265358979323846; 
		std::string s = "";
		s = std::to_string( pi );
		yyval.traducao = s; }
#line 2250 "bin/sintatica.tab.c"
    break;

  case 104: /* predefinedFuncions: TK_POS TK_OP exp TK_VIRGULA exp TK_CP  */
#line 407 "sintatica.y"
                                                                 { }
#line 2256 "bin/sintatica.tab.c"
    break;

  case 105: /* predefinedFuncions: TK_QUAD TK_OP exp TK_CP  */
#line 408 "sintatica.y"
                                                                 { }
#line 2262 "bin/sintatica.tab.c"
    break;

  case 106: /* predefinedFuncions: TK_RADPGRAU TK_OP exp TK_CP  */
#line 409 "sintatica.y"
                                                                 { }
#line 2268 "bin/sintatica.tab.c"
    break;

  case 107: /* predefinedFuncions: TK_RAIZQ TK_OP exp TK_CP  */
#line 410 "sintatica.y"
                                                                 { }
#line 2274 "bin/sintatica.tab.c"
    break;

  case 108: /* predefinedFuncions: TK_RAND  */
#line 411 "sintatica.y"
                                                                 { }
#line 2280 "bin/sintatica.tab.c"
    break;

  case 109: /* predefinedFuncions: TK_RANDI TK_OP exp TK_CP  */
#line 412 "sintatica.y"
                                                                 { }
#line 2286 "bin/sintatica.tab.c"
    break;

  case 110: /* predefinedFuncions: TK_SEN TK_OP exp TK_CP  */
#line 413 "sintatica.y"
                                                                 { }
#line 2292 "bin/sintatica.tab.c"
    break;

  case 111: /* predefinedFuncions: TK_TAN TK_OP exp TK_CP  */
#line 414 "sintatica.y"
                                                                 { }
#line 2298 "bin/sintatica.tab.c"
    break;

  case 112: /* predefinedFuncions: TK_ALEATORIO  */
#line 416 "sintatica.y"
                        { }
#line 2304 "bin/sintatica.tab.c"
    break;

  case 113: /* predefinedFuncions: TK_CRONOMETRO  */
#line 417 "sintatica.y"
                        { }
#line 2310 "bin/sintatica.tab.c"
    break;

  case 114: /* predefinedFuncions: TK_DEBUG  */
#line 418 "sintatica.y"
                        { }
#line 2316 "bin/sintatica.tab.c"
    break;

  case 115: /* predefinedFuncions: TK_ECO  */
#line 419 "sintatica.y"
                        { }
#line 2322 "bin/sintatica.tab.c"
    break;

  case 116: /* predefinedFuncions: TK_PAUSA  */
#line 420 "sintatica.y"
                        { }
#line 2328 "bin/sintatica.tab.c"
    break;

  case 117: /* predefinedFuncions: TK_TIMER  */
#line 421 "sintatica.y"
                        { }
#line 2334 "bin/sintatica.tab.c"
    break;

  case 118: /* predefinedFuncions: TK_ARQUIVO  */
#line 422 "sintatica.y"
                        { }
#line 2340 "bin/sintatica.tab.c"
    break;

  case 119: /* predefinedFuncions: TK_MENSAGEM  */
#line 423 "sintatica.y"
                        { }
#line 2346 "bin/sintatica.tab.c"
    break;


#line 2350 "bin/sintatica.tab.c"

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

#line 427 "sintatica.y"


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
