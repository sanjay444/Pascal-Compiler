/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 46 "gram.y"


/* Cause the `yydebug' variable to be defined.  */
#include "tree.h"
#include "encode.h"
#define YYDEBUG 1

void set_yydebug(int);
void yyerror(const char *);

/* Like YYERROR but do call yyerror */
#define YYERROR1 { yyerror ("syntax error"); YYERROR; }


/* Line 268 of yacc.c  */
#line 86 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LEX_ID = 258,
     LEX_ARRAY = 259,
     LEX_BEGIN = 260,
     LEX_CASE = 261,
     LEX_CONST = 262,
     LEX_DO = 263,
     LEX_DOWNTO = 264,
     LEX_END = 265,
     LEX_FILE = 266,
     LEX_FOR = 267,
     LEX_FUNCTION = 268,
     LEX_GOTO = 269,
     LEX_IF = 270,
     LEX_LABEL = 271,
     LEX_NIL = 272,
     LEX_OF = 273,
     LEX_PACKED = 274,
     LEX_PROCEDURE = 275,
     LEX_PROGRAM = 276,
     LEX_RECORD = 277,
     LEX_REPEAT = 278,
     LEX_SET = 279,
     LEX_THEN = 280,
     LEX_TO = 281,
     LEX_TYPE = 282,
     LEX_UNTIL = 283,
     LEX_VAR = 284,
     LEX_WHILE = 285,
     LEX_WITH = 286,
     LEX_FORWARD = 287,
     pp_SIN = 288,
     pp_COS = 289,
     pp_EXP = 290,
     pp_LN = 291,
     pp_SQRT = 292,
     pp_ARCTAN = 293,
     rr_POW = 294,
     rr_EXPON = 295,
     r_WRITE = 296,
     r_READ = 297,
     r_INITFDR = 298,
     r_LAZYTRYGET = 299,
     r_LAZYGET = 300,
     r_LAZYUNGET = 301,
     r_POW = 302,
     r_EXPON = 303,
     z_ABS = 304,
     z_ARCTAN = 305,
     z_COS = 306,
     z_EXP = 307,
     z_LN = 308,
     z_SIN = 309,
     z_SQRT = 310,
     z_POW = 311,
     z_EXPON = 312,
     set_card = 313,
     set_isempty = 314,
     set_equal = 315,
     set_le = 316,
     set_less = 317,
     set_in = 318,
     set_clear = 319,
     set_include = 320,
     set_exclude = 321,
     set_include_range = 322,
     set_copy = 323,
     set_intersection = 324,
     set_union = 325,
     set_diff = 326,
     set_symdiff = 327,
     p_DONEFDR = 328,
     gpc_IOCHECK = 329,
     gpc_RUNTIME_ERROR = 330,
     p_INPUT = 331,
     p_OUTPUT = 332,
     p_REWRITE = 333,
     p_RESET = 334,
     p_PUT = 335,
     p_GET = 336,
     p_WRITE = 337,
     p_READ = 338,
     p_WRITELN = 339,
     p_READLN = 340,
     p_PAGE = 341,
     p_NEW = 342,
     p_DISPOSE = 343,
     p_ABS = 344,
     p_SQR = 345,
     p_SIN = 346,
     p_COS = 347,
     p_EXP = 348,
     p_LN = 349,
     p_SQRT = 350,
     p_ARCTAN = 351,
     p_TRUNC = 352,
     p_ROUND = 353,
     p_PACK = 354,
     p_UNPACK = 355,
     p_ORD = 356,
     p_CHR = 357,
     p_SUCC = 358,
     p_PRED = 359,
     p_ODD = 360,
     p_EOF = 361,
     p_EOLN = 362,
     p_MAXINT = 363,
     p_TRUE = 364,
     p_FALSE = 365,
     bp_RANDOM = 366,
     bp_RANDOMIZE = 367,
     BREAK = 368,
     CONTINUE = 369,
     RETURN_ = 370,
     RESULT = 371,
     EXIT = 372,
     FAIL = 373,
     p_CLOSE = 374,
     CONJUGATE = 375,
     p_DEFINESIZE = 376,
     SIZEOF = 377,
     BITSIZEOF = 378,
     ALIGNOF = 379,
     TYPEOF = 380,
     gpc_RETURNADDRESS = 381,
     gpc_FRAMEADDRESS = 382,
     LEX_LABEL_ADDR = 383,
     LEX_INTCONST = 384,
     LEX_STRCONST = 385,
     LEX_REALCONST = 386,
     LEX_RANGE = 387,
     LEX_ELLIPSIS = 388,
     LEX_ASSIGN = 389,
     LEX_IN = 390,
     LEX_NE = 391,
     LEX_GE = 392,
     LEX_LE = 393,
     LEX_OR = 394,
     LEX_OR_ELSE = 395,
     LEX_CEIL_PLUS = 396,
     LEX_CEIL_MINUS = 397,
     LEX_FLOOR_PLUS = 398,
     LEX_FLOOR_MINUS = 399,
     LEX_DIV = 400,
     LEX_MOD = 401,
     LEX_AND = 402,
     LEX_AND_THEN = 403,
     LEX_SHL = 404,
     LEX_SHR = 405,
     LEX_XOR = 406,
     LEX_CEIL_MULT = 407,
     LEX_CEIL_DIV = 408,
     LEX_FLOOR_MULT = 409,
     LEX_FLOOR_DIV = 410,
     LEX_POW = 411,
     LEX_POWER = 412,
     LEX_IS = 413,
     LEX_AS = 414,
     LEX_NOT = 415,
     LEX_EXTERNAL = 416,
     ucsd_STR = 417,
     p_MARK = 418,
     p_RELEASE = 419,
     p_UPDATE = 420,
     p_GETTIMESTAMP = 421,
     p_UNBIND = 422,
     p_EXTEND = 423,
     bp_APPEND = 424,
     p_BIND = 425,
     p_SEEKREAD = 426,
     p_SEEKWRITE = 427,
     p_SEEKUPDATE = 428,
     LEX_SYMDIFF = 429,
     p_ARG = 430,
     p_CARD = 431,
     p_EMPTY = 432,
     p_POSITION = 433,
     p_LASTPOSITION = 434,
     p_LENGTH = 435,
     p_TRIM = 436,
     p_BINDING = 437,
     p_DATE = 438,
     p_TIME = 439,
     LEX_RENAME = 440,
     LEX_IMPORT = 441,
     LEX_USES = 442,
     LEX_QUALIFIED = 443,
     LEX_ONLY = 444,
     prec_if = 445,
     LEX_ELSE = 446,
     lower_than_error = 447
   };
#endif
/* Tokens.  */
#define LEX_ID 258
#define LEX_ARRAY 259
#define LEX_BEGIN 260
#define LEX_CASE 261
#define LEX_CONST 262
#define LEX_DO 263
#define LEX_DOWNTO 264
#define LEX_END 265
#define LEX_FILE 266
#define LEX_FOR 267
#define LEX_FUNCTION 268
#define LEX_GOTO 269
#define LEX_IF 270
#define LEX_LABEL 271
#define LEX_NIL 272
#define LEX_OF 273
#define LEX_PACKED 274
#define LEX_PROCEDURE 275
#define LEX_PROGRAM 276
#define LEX_RECORD 277
#define LEX_REPEAT 278
#define LEX_SET 279
#define LEX_THEN 280
#define LEX_TO 281
#define LEX_TYPE 282
#define LEX_UNTIL 283
#define LEX_VAR 284
#define LEX_WHILE 285
#define LEX_WITH 286
#define LEX_FORWARD 287
#define pp_SIN 288
#define pp_COS 289
#define pp_EXP 290
#define pp_LN 291
#define pp_SQRT 292
#define pp_ARCTAN 293
#define rr_POW 294
#define rr_EXPON 295
#define r_WRITE 296
#define r_READ 297
#define r_INITFDR 298
#define r_LAZYTRYGET 299
#define r_LAZYGET 300
#define r_LAZYUNGET 301
#define r_POW 302
#define r_EXPON 303
#define z_ABS 304
#define z_ARCTAN 305
#define z_COS 306
#define z_EXP 307
#define z_LN 308
#define z_SIN 309
#define z_SQRT 310
#define z_POW 311
#define z_EXPON 312
#define set_card 313
#define set_isempty 314
#define set_equal 315
#define set_le 316
#define set_less 317
#define set_in 318
#define set_clear 319
#define set_include 320
#define set_exclude 321
#define set_include_range 322
#define set_copy 323
#define set_intersection 324
#define set_union 325
#define set_diff 326
#define set_symdiff 327
#define p_DONEFDR 328
#define gpc_IOCHECK 329
#define gpc_RUNTIME_ERROR 330
#define p_INPUT 331
#define p_OUTPUT 332
#define p_REWRITE 333
#define p_RESET 334
#define p_PUT 335
#define p_GET 336
#define p_WRITE 337
#define p_READ 338
#define p_WRITELN 339
#define p_READLN 340
#define p_PAGE 341
#define p_NEW 342
#define p_DISPOSE 343
#define p_ABS 344
#define p_SQR 345
#define p_SIN 346
#define p_COS 347
#define p_EXP 348
#define p_LN 349
#define p_SQRT 350
#define p_ARCTAN 351
#define p_TRUNC 352
#define p_ROUND 353
#define p_PACK 354
#define p_UNPACK 355
#define p_ORD 356
#define p_CHR 357
#define p_SUCC 358
#define p_PRED 359
#define p_ODD 360
#define p_EOF 361
#define p_EOLN 362
#define p_MAXINT 363
#define p_TRUE 364
#define p_FALSE 365
#define bp_RANDOM 366
#define bp_RANDOMIZE 367
#define BREAK 368
#define CONTINUE 369
#define RETURN_ 370
#define RESULT 371
#define EXIT 372
#define FAIL 373
#define p_CLOSE 374
#define CONJUGATE 375
#define p_DEFINESIZE 376
#define SIZEOF 377
#define BITSIZEOF 378
#define ALIGNOF 379
#define TYPEOF 380
#define gpc_RETURNADDRESS 381
#define gpc_FRAMEADDRESS 382
#define LEX_LABEL_ADDR 383
#define LEX_INTCONST 384
#define LEX_STRCONST 385
#define LEX_REALCONST 386
#define LEX_RANGE 387
#define LEX_ELLIPSIS 388
#define LEX_ASSIGN 389
#define LEX_IN 390
#define LEX_NE 391
#define LEX_GE 392
#define LEX_LE 393
#define LEX_OR 394
#define LEX_OR_ELSE 395
#define LEX_CEIL_PLUS 396
#define LEX_CEIL_MINUS 397
#define LEX_FLOOR_PLUS 398
#define LEX_FLOOR_MINUS 399
#define LEX_DIV 400
#define LEX_MOD 401
#define LEX_AND 402
#define LEX_AND_THEN 403
#define LEX_SHL 404
#define LEX_SHR 405
#define LEX_XOR 406
#define LEX_CEIL_MULT 407
#define LEX_CEIL_DIV 408
#define LEX_FLOOR_MULT 409
#define LEX_FLOOR_DIV 410
#define LEX_POW 411
#define LEX_POWER 412
#define LEX_IS 413
#define LEX_AS 414
#define LEX_NOT 415
#define LEX_EXTERNAL 416
#define ucsd_STR 417
#define p_MARK 418
#define p_RELEASE 419
#define p_UPDATE 420
#define p_GETTIMESTAMP 421
#define p_UNBIND 422
#define p_EXTEND 423
#define bp_APPEND 424
#define p_BIND 425
#define p_SEEKREAD 426
#define p_SEEKWRITE 427
#define p_SEEKUPDATE 428
#define LEX_SYMDIFF 429
#define p_ARG 430
#define p_CARD 431
#define p_EMPTY 432
#define p_POSITION 433
#define p_LASTPOSITION 434
#define p_LENGTH 435
#define p_TRIM 436
#define p_BINDING 437
#define p_DATE 438
#define p_TIME 439
#define LEX_RENAME 440
#define LEX_IMPORT 441
#define LEX_USES 442
#define LEX_QUALIFIED 443
#define LEX_ONLY 444
#define prec_if 445
#define LEX_ELSE 446
#define lower_than_error 447




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 65 "gram.y"

    char        *y_string;
    long         y_int;
    double       y_real;
    ST_ID        y_stid;
    TYPE         y_type;
    PARAM_LIST   y_paramlist;
    INDEX_LIST   y_indexlist;
    PARAM        y_param;
    VAR_ID_LIST  y_varidlist;
    EXPR	 y_expr;
    EXPR_LIST	 y_exprlist;
    EXPR_NULLOP  y_nullop;
    EXPR_UNOP    y_unop;
    EXPR_BINOP   y_binop;
    EXPR_ID      y_exprid;
    FUNC_HEAD    y_funchead;
    DIRECTIVE    y_dir;



/* Line 293 of yacc.c  */
#line 528 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 540 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2133

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  210
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  169
/* YYNRULES -- Number of rules.  */
#define YYNRULES  430
/* YYNRULES -- Number of states.  */
#define YYNSTATES  695

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   447

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     201,   202,   151,   143,   203,   142,   200,   150,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   206,   209,
     135,   136,   137,     2,   205,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   207,     2,   208,   204,     2,     2,     2,     2,     2,
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
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     138,   139,   140,   141,   144,   145,   146,   147,   148,   149,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     8,    11,    14,    19,    23,
      24,    28,    30,    34,    36,    38,    40,    42,    44,    46,
      48,    50,    52,    54,    56,    58,    60,    62,    64,    66,
      68,    70,    72,    74,    76,    78,    80,    82,    84,    86,
      88,    90,    92,    94,    96,    98,   100,   102,   104,   106,
     108,   110,   112,   114,   116,   118,   120,   122,   124,   126,
     128,   130,   131,   134,   136,   138,   139,   142,   144,   146,
     148,   150,   152,   154,   158,   160,   164,   166,   168,   171,
     173,   176,   181,   183,   186,   188,   190,   193,   195,   197,
     199,   201,   203,   205,   207,   209,   211,   213,   215,   217,
     220,   224,   226,   230,   234,   236,   238,   240,   242,   244,
     246,   248,   250,   254,   256,   260,   262,   266,   269,   271,
     273,   275,   277,   280,   284,   285,   289,   291,   295,   297,
     301,   306,   309,   312,   314,   316,   318,   320,   322,   329,
     331,   335,   337,   339,   344,   345,   349,   353,   357,   358,
     361,   365,   367,   369,   373,   377,   383,   385,   391,   395,
     397,   399,   401,   403,   407,   413,   415,   419,   421,   425,
     428,   430,   433,   438,   443,   449,   453,   458,   460,   464,
     466,   468,   469,   472,   473,   477,   479,   483,   487,   492,
     494,   498,   503,   505,   507,   509,   511,   513,   515,   517,
     525,   532,   538,   540,   544,   548,   550,   554,   556,   560,
     564,   566,   568,   570,   572,   574,   576,   578,   583,   585,
     589,   591,   593,   595,   600,   604,   606,   613,   615,   618,
     620,   624,   628,   630,   633,   635,   637,   639,   644,   649,
     658,   660,   662,   664,   666,   668,   670,   672,   673,   676,
     677,   681,   683,   687,   689,   692,   694,   697,   699,   700,
     703,   708,   713,   716,   719,   722,   725,   728,   733,   738,
     745,   746,   750,   752,   756,   758,   762,   768,   770,   772,
     774,   776,   778,   780,   782,   784,   786,   788,   790,   792,
     794,   796,   798,   800,   802,   804,   806,   808,   810,   812,
     814,   816,   818,   820,   822,   824,   826,   829,   831,   833,
     835,   837,   839,   841,   843,   847,   849,   853,   855,   857,
     861,   865,   867,   869,   873,   877,   881,   885,   887,   891,
     895,   897,   900,   902,   906,   910,   914,   916,   919,   921,
     923,   925,   927,   930,   933,   935,   937,   941,   943,   945,
     947,   949,   951,   953,   957,   961,   964,   969,   974,   979,
     982,   986,   988,   992,   994,   998,  1003,  1006,  1011,  1012,
    1016,  1018,  1020,  1022,  1024,  1026,  1028,  1030,  1032,  1034,
    1036,  1038,  1040,  1042,  1044,  1046,  1048,  1050,  1052,  1054,
    1056,  1058,  1060,  1062,  1064,  1066,  1068,  1070,  1072,  1074,
    1076,  1078,  1080,  1082,  1084,  1086,  1088,  1090,  1092,  1094,
    1096,  1097,  1099,  1100,  1103,  1107,  1111,  1113,  1117,  1119,
    1123,  1128,  1129,  1131,  1132,  1136,  1141,  1142,  1145,  1147,
    1151
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     211,     0,    -1,    -1,   212,    -1,   213,    -1,   212,   213,
      -1,   214,   200,    -1,   215,   367,   222,   298,    -1,    21,
     220,   216,    -1,    -1,   201,   217,   202,    -1,   220,    -1,
     217,   203,   220,    -1,     3,    -1,     3,    -1,   221,    -1,
       3,    -1,   108,    -1,   110,    -1,   109,    -1,    76,    -1,
      77,    -1,    78,    -1,    79,    -1,    80,    -1,    81,    -1,
      82,    -1,    83,    -1,    84,    -1,    85,    -1,    86,    -1,
     106,    -1,   107,    -1,    87,    -1,    88,    -1,    89,    -1,
      90,    -1,    91,    -1,    92,    -1,    93,    -1,    94,    -1,
      95,    -1,    96,    -1,    97,    -1,    98,    -1,    99,    -1,
     100,    -1,   101,    -1,   102,    -1,   103,    -1,   104,    -1,
     105,    -1,   113,    -1,   114,    -1,   115,    -1,   116,    -1,
     117,    -1,   118,    -1,   122,    -1,   123,    -1,   223,    -1,
      -1,   223,   224,    -1,   370,    -1,   226,    -1,    -1,   225,
     226,    -1,   227,    -1,   282,    -1,   228,    -1,   231,    -1,
     242,    -1,   279,    -1,    16,   229,   367,    -1,   230,    -1,
     229,   203,   230,    -1,   129,    -1,   220,    -1,     7,   232,
      -1,   233,    -1,   232,   233,    -1,   220,   136,   342,   367,
      -1,   219,    -1,   237,   219,    -1,   235,    -1,   238,    -1,
     237,   236,    -1,   236,    -1,   129,    -1,   131,    -1,   143,
      -1,   142,    -1,   240,    -1,   239,    -1,    17,    -1,   110,
      -1,   109,    -1,   241,    -1,   130,    -1,   241,   130,    -1,
      27,   243,   367,    -1,   244,    -1,   243,   367,   244,    -1,
     220,   136,   245,    -1,   218,    -1,   246,    -1,   247,    -1,
     252,    -1,   255,    -1,   259,    -1,   248,    -1,   251,    -1,
     201,   249,   202,    -1,   250,    -1,   249,   203,   250,    -1,
     220,    -1,   234,   132,   234,    -1,   253,   254,    -1,   204,
      -1,   205,    -1,   220,    -1,   255,    -1,    20,   256,    -1,
      13,   256,   286,    -1,    -1,   201,   257,   202,    -1,   258,
      -1,   257,   367,   258,    -1,   217,    -1,   217,   206,   218,
      -1,    29,   217,   206,   218,    -1,    29,   217,    -1,    19,
     260,    -1,   260,    -1,   261,    -1,   264,    -1,   266,    -1,
     267,    -1,     4,   207,   262,   208,    18,   245,    -1,   263,
      -1,   262,   203,   263,    -1,   247,    -1,   218,    -1,    11,
     265,    18,   245,    -1,    -1,   207,   263,   208,    -1,    24,
      18,   245,    -1,    22,   268,    10,    -1,    -1,   269,   368,
      -1,   269,   367,   271,    -1,   271,    -1,   270,    -1,   269,
     367,   270,    -1,   217,   206,   245,    -1,     6,   273,    18,
     275,   272,    -1,   368,    -1,   314,   201,   268,   202,   368,
      -1,   220,   206,   274,    -1,   274,    -1,   218,    -1,   247,
      -1,   276,    -1,   275,   367,   276,    -1,   277,   206,   201,
     268,   202,    -1,   278,    -1,   277,   203,   278,    -1,   342,
      -1,   342,   132,   342,    -1,    29,   280,    -1,   281,    -1,
     280,   281,    -1,   217,   206,   245,   367,    -1,   283,   367,
     284,   367,    -1,   283,   367,   225,   298,   367,    -1,    20,
     220,   287,    -1,    13,   220,   287,   286,    -1,   285,    -1,
     284,   367,   285,    -1,    32,    -1,   168,    -1,    -1,   206,
     218,    -1,    -1,   201,   288,   202,    -1,   289,    -1,   288,
     367,   289,    -1,   217,   206,   290,    -1,    29,   217,   206,
     290,    -1,   283,    -1,   217,   206,   291,    -1,    29,   217,
     206,   291,    -1,   218,    -1,   297,    -1,   293,    -1,   294,
      -1,   218,    -1,   293,    -1,   294,    -1,    19,     4,   207,
     295,   208,    18,   292,    -1,     4,   207,   296,   208,    18,
     292,    -1,   220,   132,   220,   206,   218,    -1,   295,    -1,
     296,   367,   295,    -1,     4,    18,   218,    -1,   299,    -1,
       5,   300,    10,    -1,   301,    -1,   300,   367,   301,    -1,
     230,   206,   302,    -1,   302,    -1,   303,    -1,   320,    -1,
     299,    -1,   304,    -1,   307,    -1,   315,    -1,    31,   305,
       8,   301,    -1,   306,    -1,   305,   203,   306,    -1,   352,
      -1,   309,    -1,   310,    -1,    15,   343,    25,   301,    -1,
     308,   198,   301,    -1,   308,    -1,     6,   344,    18,   312,
     311,    10,    -1,   368,    -1,   314,   300,    -1,   313,    -1,
     312,   367,   313,    -1,   277,   206,   301,    -1,   198,    -1,
     367,   198,    -1,   316,    -1,   317,    -1,   318,    -1,    23,
     300,    28,   343,    -1,    30,   343,     8,   301,    -1,    12,
     352,   134,   344,   319,   344,     8,   301,    -1,    26,    -1,
       9,    -1,   321,    -1,   322,    -1,   326,    -1,   329,    -1,
     335,    -1,    -1,    14,   230,    -1,    -1,   201,   324,   202,
      -1,   325,    -1,   324,   203,   325,    -1,   344,    -1,   327,
     328,    -1,   219,    -1,   351,   352,    -1,   355,    -1,    -1,
     134,   344,    -1,   333,   201,   325,   202,    -1,   334,   201,
     324,   202,    -1,    82,   330,    -1,    84,   330,    -1,    83,
     323,    -1,    85,   323,    -1,    86,   323,    -1,   169,   201,
     331,   202,    -1,    88,   201,   325,   202,    -1,    88,   201,
     325,   203,   324,   202,    -1,    -1,   201,   331,   202,    -1,
     332,    -1,   331,   203,   332,    -1,   325,    -1,   325,   206,
     344,    -1,   325,   206,   344,   206,   344,    -1,    80,    -1,
      81,    -1,   170,    -1,   171,    -1,   119,    -1,   172,    -1,
     173,    -1,   174,    -1,    78,    -1,    79,    -1,   175,    -1,
     176,    -1,    99,    -1,   100,    -1,   177,    -1,   178,    -1,
     179,    -1,   180,    -1,   121,    -1,   154,    -1,   144,    -1,
     167,    -1,   158,    -1,   156,    -1,   157,    -1,   336,    -1,
     338,    -1,   337,    -1,   115,    -1,   115,   344,    -1,   117,
      -1,   118,    -1,   113,    -1,   114,    -1,   355,    -1,     3,
      -1,   341,    -1,   340,   203,   341,    -1,   344,    -1,   344,
     132,   344,    -1,   344,    -1,   344,    -1,   344,   364,   345,
      -1,   344,   138,   345,    -1,   345,    -1,   346,    -1,   345,
     366,   346,    -1,   345,   181,   346,    -1,   345,   144,   346,
      -1,   345,   158,   346,    -1,   347,    -1,   346,   365,   347,
      -1,   346,   154,   347,    -1,   348,    -1,   237,   347,    -1,
     350,    -1,   348,   163,   350,    -1,   348,   164,   350,    -1,
     348,   165,   218,    -1,   350,    -1,   237,   349,    -1,   352,
      -1,   238,    -1,   236,    -1,   356,    -1,   167,   349,    -1,
     351,   350,    -1,   205,    -1,   353,    -1,   352,   166,   218,
      -1,   354,    -1,   359,    -1,   219,    -1,   355,    -1,    77,
      -1,    76,    -1,   353,   200,   220,    -1,   201,   344,   202,
      -1,   352,   253,    -1,   352,   207,   340,   208,    -1,   354,
     201,   324,   202,    -1,    87,   201,   339,   202,    -1,   207,
     208,    -1,   207,   357,   208,    -1,   358,    -1,   357,   203,
     358,    -1,   344,    -1,   344,   132,   344,    -1,   362,   201,
     325,   202,    -1,   361,   360,    -1,   363,   201,   324,   202,
      -1,    -1,   201,   325,   202,    -1,   106,    -1,   107,    -1,
      89,    -1,    90,    -1,    91,    -1,    92,    -1,    93,    -1,
      94,    -1,    95,    -1,    96,    -1,   182,    -1,    97,    -1,
      98,    -1,   183,    -1,   101,    -1,   102,    -1,   105,    -1,
     184,    -1,   185,    -1,   186,    -1,   187,    -1,   188,    -1,
     189,    -1,   190,    -1,   191,    -1,   103,    -1,   104,    -1,
     139,    -1,   141,    -1,   140,    -1,   136,    -1,   135,    -1,
     137,    -1,   152,    -1,   153,    -1,   150,    -1,   151,    -1,
     142,    -1,   143,    -1,   209,    -1,    -1,   209,    -1,    -1,
     192,   220,    -1,   193,   371,   367,    -1,   194,   372,   367,
      -1,   373,    -1,   371,   367,   373,    -1,   373,    -1,   372,
     203,   373,    -1,   220,   374,   375,   376,    -1,    -1,   195,
      -1,    -1,   201,   377,   202,    -1,   196,   201,   377,   202,
      -1,    -1,   138,   240,    -1,   378,    -1,   377,   203,   378,
      -1,   220,   369,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   199,   199,   200,   204,   205,   209,   213,   217,   221,
     222,   226,   227,   231,   235,   239,   243,   245,   246,   247,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   263,   264,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   277,   278,   280,   281,   282,
     283,   284,   286,   287,   288,   289,   290,   291,   292,   293,
     297,   301,   302,   306,   307,   311,   312,   316,   317,   321,
     322,   323,   324,   330,   334,   335,   340,   341,   347,   351,
     352,   356,   360,   361,   362,   363,   367,   368,   372,   373,
     377,   378,   382,   383,   387,   388,   389,   393,   397,   398,
     402,   406,   407,   411,   414,   415,   419,   420,   421,   422,
     426,   427,   431,   435,   436,   440,   444,   449,   453,   454,
     458,   459,   463,   464,   468,   469,   473,   474,   478,   479,
     480,   481,   486,   487,   491,   492,   493,   494,   500,   504,
     505,   510,   511,   516,   520,   521,   527,   531,   535,   536,
     537,   538,   542,   543,   547,   551,   555,   556,   560,   561,
     565,   566,   570,   571,   575,   579,   580,   584,   585,   591,
     595,   596,   600,   604,   605,   609,   610,   614,   615,   619,
     620,   624,   625,   631,   632,   636,   637,   641,   642,   643,
     644,   645,   649,   650,   654,   655,   659,   660,   661,   665,
     669,   673,   677,   678,   682,   686,   690,   694,   695,   699,
     700,   704,   705,   709,   710,   711,   712,   716,   720,   721,
     725,   729,   730,   734,   738,   739,   743,   747,   748,   752,
     753,   757,   761,   762,   766,   767,   768,   772,   776,   780,
     784,   785,   789,   790,   791,   792,   793,   797,   801,   807,
     808,   812,   813,   817,   823,   827,   828,   829,   833,   834,
     838,   839,   840,   841,   842,   843,   844,   845,   846,   847,
     851,   852,   856,   857,   861,   862,   863,   868,   869,   870,
     871,   872,   873,   874,   875,   879,   880,   881,   882,   883,
     884,   885,   886,   887,   888,   889,   890,   891,   892,   893,
     894,   895,   899,   900,   901,   905,   906,   907,   908,   912,
     916,   920,   921,   925,   926,   930,   931,   937,   941,   945,
     946,   947,   951,   952,   953,   954,   955,   959,   960,   961,
     965,   966,   970,   971,   972,   973,   977,   978,   982,   983,
     984,   985,   986,   987,   991,   995,   996,  1000,  1001,  1005,
    1006,  1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,  1021,
    1022,  1026,  1027,  1031,  1032,  1036,  1037,  1038,  1042,  1043,
    1047,  1048,  1052,  1053,  1054,  1055,  1056,  1057,  1058,  1059,
    1060,  1061,  1062,  1063,  1064,  1065,  1066,  1067,  1068,  1069,
    1070,  1071,  1072,  1073,  1074,  1078,  1079,  1083,  1084,  1085,
    1086,  1087,  1088,  1092,  1093,  1094,  1095,  1099,  1100,  1104,
    1108,  1109,  1113,  1114,  1118,  1119,  1123,  1124,  1128,  1129,
    1133,  1137,  1138,  1142,  1143,  1144,  1148,  1149,  1153,  1154,
    1158
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LEX_ID", "LEX_ARRAY", "LEX_BEGIN",
  "LEX_CASE", "LEX_CONST", "LEX_DO", "LEX_DOWNTO", "LEX_END", "LEX_FILE",
  "LEX_FOR", "LEX_FUNCTION", "LEX_GOTO", "LEX_IF", "LEX_LABEL", "LEX_NIL",
  "LEX_OF", "LEX_PACKED", "LEX_PROCEDURE", "LEX_PROGRAM", "LEX_RECORD",
  "LEX_REPEAT", "LEX_SET", "LEX_THEN", "LEX_TO", "LEX_TYPE", "LEX_UNTIL",
  "LEX_VAR", "LEX_WHILE", "LEX_WITH", "LEX_FORWARD", "pp_SIN", "pp_COS",
  "pp_EXP", "pp_LN", "pp_SQRT", "pp_ARCTAN", "rr_POW", "rr_EXPON",
  "r_WRITE", "r_READ", "r_INITFDR", "r_LAZYTRYGET", "r_LAZYGET",
  "r_LAZYUNGET", "r_POW", "r_EXPON", "z_ABS", "z_ARCTAN", "z_COS", "z_EXP",
  "z_LN", "z_SIN", "z_SQRT", "z_POW", "z_EXPON", "set_card", "set_isempty",
  "set_equal", "set_le", "set_less", "set_in", "set_clear", "set_include",
  "set_exclude", "set_include_range", "set_copy", "set_intersection",
  "set_union", "set_diff", "set_symdiff", "p_DONEFDR", "gpc_IOCHECK",
  "gpc_RUNTIME_ERROR", "p_INPUT", "p_OUTPUT", "p_REWRITE", "p_RESET",
  "p_PUT", "p_GET", "p_WRITE", "p_READ", "p_WRITELN", "p_READLN", "p_PAGE",
  "p_NEW", "p_DISPOSE", "p_ABS", "p_SQR", "p_SIN", "p_COS", "p_EXP",
  "p_LN", "p_SQRT", "p_ARCTAN", "p_TRUNC", "p_ROUND", "p_PACK", "p_UNPACK",
  "p_ORD", "p_CHR", "p_SUCC", "p_PRED", "p_ODD", "p_EOF", "p_EOLN",
  "p_MAXINT", "p_TRUE", "p_FALSE", "bp_RANDOM", "bp_RANDOMIZE", "BREAK",
  "CONTINUE", "RETURN_", "RESULT", "EXIT", "FAIL", "p_CLOSE", "CONJUGATE",
  "p_DEFINESIZE", "SIZEOF", "BITSIZEOF", "ALIGNOF", "TYPEOF",
  "gpc_RETURNADDRESS", "gpc_FRAMEADDRESS", "LEX_LABEL_ADDR",
  "LEX_INTCONST", "LEX_STRCONST", "LEX_REALCONST", "LEX_RANGE",
  "LEX_ELLIPSIS", "LEX_ASSIGN", "'<'", "'='", "'>'", "LEX_IN", "LEX_NE",
  "LEX_GE", "LEX_LE", "'-'", "'+'", "LEX_OR", "LEX_OR_ELSE",
  "LEX_CEIL_PLUS", "LEX_CEIL_MINUS", "LEX_FLOOR_PLUS", "LEX_FLOOR_MINUS",
  "'/'", "'*'", "LEX_DIV", "LEX_MOD", "LEX_AND", "LEX_AND_THEN", "LEX_SHL",
  "LEX_SHR", "LEX_XOR", "LEX_CEIL_MULT", "LEX_CEIL_DIV", "LEX_FLOOR_MULT",
  "LEX_FLOOR_DIV", "LEX_POW", "LEX_POWER", "LEX_IS", "LEX_AS", "LEX_NOT",
  "LEX_EXTERNAL", "ucsd_STR", "p_MARK", "p_RELEASE", "p_UPDATE",
  "p_GETTIMESTAMP", "p_UNBIND", "p_EXTEND", "bp_APPEND", "p_BIND",
  "p_SEEKREAD", "p_SEEKWRITE", "p_SEEKUPDATE", "LEX_SYMDIFF", "p_ARG",
  "p_CARD", "p_EMPTY", "p_POSITION", "p_LASTPOSITION", "p_LENGTH",
  "p_TRIM", "p_BINDING", "p_DATE", "p_TIME", "LEX_RENAME", "LEX_IMPORT",
  "LEX_USES", "LEX_QUALIFIED", "LEX_ONLY", "prec_if", "LEX_ELSE",
  "lower_than_error", "'.'", "'('", "')'", "','", "'^'", "'@'", "':'",
  "'['", "']'", "';'", "$accept", "pascal_program",
  "program_component_list", "program_component",
  "main_program_declaration", "program_heading", "optional_par_id_list",
  "id_list", "typename", "identifier", "new_identifier",
  "new_identifier_1", "import_or_any_declaration_part",
  "any_declaration_import_part", "any_or_import_decl",
  "any_declaration_part", "any_decl", "simple_decl",
  "label_declaration_part", "label_list", "label",
  "constant_definition_part", "constant_definition_list",
  "constant_definition", "constant", "number", "unsigned_number", "sign",
  "constant_literal", "predefined_literal", "combined_string", "string",
  "type_definition_part", "type_definition_list", "type_definition",
  "type_denoter", "type_denoter_1", "new_ordinal_type", "enumerated_type",
  "enum_list", "enumerator", "subrange_type", "new_pointer_type",
  "pointer_char", "pointer_domain_type", "new_procedural_type",
  "optional_procedural_type_formal_parameter_list",
  "procedural_type_formal_parameter_list",
  "procedural_type_formal_parameter", "new_structured_type",
  "unpacked_structured_type", "array_type", "array_index_list",
  "ordinal_index_type", "file_type", "direct_access_index_type",
  "set_type", "record_type", "record_field_list", "fixed_part",
  "record_section", "variant_part", "rest_of_variant", "variant_selector",
  "variant_type", "variant_list", "variant", "case_constant_list",
  "one_case_constant", "variable_declaration_part",
  "variable_declaration_list", "variable_declaration",
  "function_declaration", "function_heading", "directive_list",
  "directive", "functiontype", "optional_par_formal_parameter_list",
  "formal_parameter_list", "formal_parameter", "parameter_form",
  "conformant_array_schema", "typename_or_conformant_array_schema",
  "packed_conformant_array_schema", "unpacked_conformant_array_schema",
  "index_type_specification", "index_type_specification_list",
  "open_array", "statement_part", "compound_statement",
  "statement_sequence", "statement", "unlabelled_statement",
  "structured_statement", "with_statement", "structured_variable_list",
  "structured_variable", "conditional_statement", "simple_if",
  "if_statement", "case_statement", "optional_semicolon_or_else_branch",
  "case_element_list", "case_element", "case_default",
  "repetitive_statement", "repeat_statement", "while_statement",
  "for_statement", "for_direction", "simple_statement", "empty_statement",
  "goto_statement", "optional_par_actual_parameter_list",
  "actual_parameter_list", "actual_parameter",
  "assignment_or_call_statement",
  "variable_or_function_access_maybe_assignment", "rest_of_statement",
  "standard_procedure_statement", "optional_par_write_parameter_list",
  "write_actual_parameter_list", "write_actual_parameter",
  "rts_proc_onepar", "rts_proc_parlist", "statement_extensions",
  "return_statement", "break_statement", "continue_statement",
  "variable_access_or_typename", "index_expression_list",
  "index_expression_item", "static_expression", "boolean_expression",
  "expression", "simple_expression", "term", "signed_primary", "primary",
  "signed_factor", "factor", "address_operator",
  "variable_or_function_access", "variable_or_function_access_no_as",
  "variable_or_function_access_no_standard_function",
  "variable_or_function_access_no_id", "set_constructor",
  "set_constructor_element_list", "member_designator",
  "standard_functions", "optional_par_actual_parameter", "rts_fun_optpar",
  "rts_fun_onepar", "rts_fun_parlist", "relational_operator",
  "multiplying_operator", "adding_operator", "semi", "optional_semicolon",
  "optional_rename", "import_part", "import_specification_list",
  "uses_list", "import_specification", "optional_access_qualifier",
  "optional_import_qualifier", "optional_unit_filename",
  "import_clause_list", "import_clause", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,    60,    61,    62,   390,   391,
     392,   393,    45,    43,   394,   395,   396,   397,   398,   399,
      47,    42,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
      46,    40,    41,    44,    94,    64,    58,    91,    93,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   210,   211,   211,   212,   212,   213,   214,   215,   216,
     216,   217,   217,   218,   219,   220,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     222,   223,   223,   224,   224,   225,   225,   226,   226,   227,
     227,   227,   227,   228,   229,   229,   230,   230,   231,   232,
     232,   233,   234,   234,   234,   234,   235,   235,   236,   236,
     237,   237,   238,   238,   239,   239,   239,   240,   241,   241,
     242,   243,   243,   244,   245,   245,   246,   246,   246,   246,
     247,   247,   248,   249,   249,   250,   251,   252,   253,   253,
     254,   254,   255,   255,   256,   256,   257,   257,   258,   258,
     258,   258,   259,   259,   260,   260,   260,   260,   261,   262,
     262,   263,   263,   264,   265,   265,   266,   267,   268,   268,
     268,   268,   269,   269,   270,   271,   272,   272,   273,   273,
     274,   274,   275,   275,   276,   277,   277,   278,   278,   279,
     280,   280,   281,   282,   282,   283,   283,   284,   284,   285,
     285,   286,   286,   287,   287,   288,   288,   289,   289,   289,
     289,   289,   290,   290,   291,   291,   292,   292,   292,   293,
     294,   295,   296,   296,   297,   298,   299,   300,   300,   301,
     301,   302,   302,   303,   303,   303,   303,   304,   305,   305,
     306,   307,   307,   308,   309,   309,   310,   311,   311,   312,
     312,   313,   314,   314,   315,   315,   315,   316,   317,   318,
     319,   319,   320,   320,   320,   320,   320,   321,   322,   323,
     323,   324,   324,   325,   326,   327,   327,   327,   328,   328,
     329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
     330,   330,   331,   331,   332,   332,   332,   333,   333,   333,
     333,   333,   333,   333,   333,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   335,   335,   335,   336,   336,   336,   336,   337,
     338,   339,   339,   340,   340,   341,   341,   342,   343,   344,
     344,   344,   345,   345,   345,   345,   345,   346,   346,   346,
     347,   347,   348,   348,   348,   348,   349,   349,   350,   350,
     350,   350,   350,   350,   351,   352,   352,   353,   353,   354,
     354,   355,   355,   355,   355,   355,   355,   355,   355,   356,
     356,   357,   357,   358,   358,   359,   359,   359,   360,   360,
     361,   361,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   363,   363,   364,   364,   364,
     364,   364,   364,   365,   365,   365,   365,   366,   366,   367,
     368,   368,   369,   369,   370,   370,   371,   371,   372,   372,
     373,   374,   374,   375,   375,   375,   376,   376,   377,   377,
     378
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     2,     4,     3,     0,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     1,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     1,     1,     2,     1,
       2,     4,     1,     2,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     1,     3,     2,     1,     1,
       1,     1,     2,     3,     0,     3,     1,     3,     1,     3,
       4,     2,     2,     1,     1,     1,     1,     1,     6,     1,
       3,     1,     1,     4,     0,     3,     3,     3,     0,     2,
       3,     1,     1,     3,     3,     5,     1,     5,     3,     1,
       1,     1,     1,     3,     5,     1,     3,     1,     3,     2,
       1,     2,     4,     4,     5,     3,     4,     1,     3,     1,
       1,     0,     2,     0,     3,     1,     3,     3,     4,     1,
       3,     4,     1,     1,     1,     1,     1,     1,     1,     7,
       6,     5,     1,     3,     3,     1,     3,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     3,
       1,     1,     1,     4,     3,     1,     6,     1,     2,     1,
       3,     3,     1,     2,     1,     1,     1,     4,     4,     8,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     0,
       3,     1,     3,     1,     2,     1,     2,     1,     0,     2,
       4,     4,     2,     2,     2,     2,     2,     4,     4,     6,
       0,     3,     1,     3,     1,     3,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     1,     1,     3,
       3,     1,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     2,     1,     3,     3,     3,     1,     2,     1,     1,
       1,     1,     2,     2,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     3,     3,     2,     4,     4,     4,     2,
       3,     1,     3,     1,     3,     4,     2,     4,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     0,     2,     3,     3,     1,     3,     1,     3,
       4,     0,     1,     0,     3,     4,     0,     2,     1,     3,
       2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     3,     4,     0,     0,    16,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    31,    32,
      17,    19,    18,    52,    53,    54,    55,    56,    57,    58,
      59,     9,    15,     1,     5,     6,   409,    61,     0,     8,
       0,    60,     0,    11,   247,     7,   205,     0,     0,     0,
       0,     0,     0,     0,     0,    62,    64,    67,    69,    70,
      71,    72,    68,     0,    63,    10,     0,    14,     0,     0,
       0,     0,   247,     0,     0,   352,   351,    22,    23,    24,
      25,   270,   249,   270,   249,   249,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,   370,   371,   309,   310,   305,
     307,   308,   281,   295,    76,   297,   296,   300,   301,   299,
     298,     0,   279,   280,   282,   283,   284,   287,   288,   291,
     292,   293,   294,   380,   383,   387,   388,   389,   390,   391,
     392,   393,   394,     0,   344,   349,    77,     0,   213,     0,
     207,   210,   211,   214,   215,   225,   221,   222,   216,   234,
     235,   236,   212,   242,   243,   244,   258,   245,     0,     0,
     246,   302,   304,   303,     0,     0,   345,   347,   350,   348,
     368,     0,     0,     0,    78,    79,   183,     0,    74,   183,
       0,     0,   101,     0,   169,   170,   421,     0,   416,     0,
     418,    65,    12,    14,    94,   352,   351,     0,   372,   373,
     374,   375,   376,   377,   378,   379,   381,   382,   384,   385,
     395,   396,   386,   370,   371,    96,    95,    88,    98,    89,
      91,    90,     0,     0,   349,   340,     0,   339,    93,    92,
      97,     0,   321,   322,   327,   330,   332,     0,   338,   350,
     341,     0,   248,     0,   318,     0,     0,     0,   218,   220,
       0,   262,     0,   264,   263,   265,   266,     0,     0,   306,
       0,     0,   247,   206,   247,   247,     0,   254,     0,     0,
     256,     0,   118,   119,     0,   355,     0,     0,     0,   366,
       0,     0,     0,    80,     0,   181,     0,    73,   175,     0,
     100,     0,   171,   422,   423,   414,     0,   415,   179,   180,
       0,     0,   177,     0,   342,   336,   359,   363,     0,   361,
     331,    99,     0,   401,   400,   402,     0,   397,   399,   398,
       0,   407,   408,     0,     0,     0,     0,   405,   406,   403,
     404,     0,     0,     0,     0,     0,   343,     0,   247,     0,
     247,   247,     0,   274,     0,   272,   253,     0,   251,    14,
       0,   350,     0,     0,   354,   285,   286,   277,   278,   270,
     249,   270,   249,   249,     0,   289,   290,   309,   310,   305,
     307,   308,   209,   208,   224,   259,     0,     0,    13,   346,
       0,   313,   315,   353,     0,     0,     0,     0,     0,   317,
       0,     0,   189,     0,   185,     0,   176,    75,    13,     0,
     144,   124,     0,   124,   148,     0,     0,   104,    82,     0,
      84,    87,     0,    85,   103,   105,   106,   110,   111,   107,
       0,   108,   109,   133,   134,   135,   136,   137,   102,     0,
       0,     0,   426,   417,   419,    66,     0,   173,   337,     0,
       0,   360,     0,   165,   410,   229,   167,   320,   319,   325,
     326,   324,   323,   329,   328,   333,   334,   335,     0,   223,
     237,   238,   217,   219,     0,   271,     0,   250,     0,   358,
     268,     0,   267,   260,   261,     0,   356,     0,   357,   369,
     365,   367,    81,     0,     0,   184,     0,   182,     0,     0,
       0,     0,   181,   132,   122,     0,     0,     0,   410,   152,
     151,     0,   115,     0,   113,     0,    83,    86,   120,   117,
     121,   172,     0,   412,     0,   428,     0,   420,   174,   178,
     364,   362,     0,   247,   232,   409,     0,   247,     0,   227,
       0,   241,   240,     0,   275,   273,   252,     0,   314,   316,
       0,     0,     0,   192,   187,   190,   194,   195,   193,   186,
     142,   141,     0,   139,     0,     0,     0,   128,     0,   126,
     123,    13,    19,    18,   160,     0,   161,     0,   159,     0,
     147,     0,   149,   146,   112,     0,   116,     0,     0,   430,
     424,     0,   427,   166,   231,   226,   228,   233,   230,   168,
       0,     0,   269,   188,   191,     0,     0,     0,     0,     0,
     145,   143,   131,     0,   125,     0,     0,     0,   154,   153,
     150,   114,   425,   413,   429,   247,   276,   204,     0,   202,
       0,     0,   140,     0,     0,   129,   127,   158,   410,   162,
       0,   239,     0,     0,     0,     0,   138,   130,   155,     0,
       0,   156,     0,     0,     0,   203,     0,   148,   163,   148,
       0,     0,   196,   200,   197,   198,     0,     0,     0,   201,
     199,   410,   164,   411,   157
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,     6,    59,   526,   437,   254,
      63,    52,    60,    61,    75,   330,    76,    77,    78,   207,
     167,    79,   204,   205,   439,   440,   255,   256,   257,   258,
     259,   260,    80,   211,   212,   444,   445,   446,   447,   533,
     534,   448,   449,   450,   539,   451,   522,   588,   589,   452,
     453,   454,   582,   583,   455,   520,   456,   457,   527,   528,
     529,   530,   668,   597,   598,   658,   659,   472,   473,    81,
     214,   215,    82,    83,   331,   332,   426,   315,   423,   424,
     574,   575,   683,   576,   577,   649,   650,   578,    65,   168,
     169,   170,   171,   172,   173,   277,   278,   174,   175,   176,
     177,   556,   474,   475,   557,   178,   179,   180,   181,   563,
     182,   183,   184,   283,   377,   378,   185,   186,   297,   187,
     281,   374,   375,   188,   189,   190,   191,   192,   193,   380,
     410,   411,   476,   273,   376,   262,   263,   264,   265,   334,
     266,   267,   268,   196,   197,   269,   270,   338,   339,   199,
     309,   200,   201,   202,   350,   362,   356,   294,   559,   609,
      84,   217,   219,   218,   324,   462,   547,   544,   545
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -592
static const yytype_int16 yypact[] =
{
      36,  1844,    76,    36,  -592,  -116,   -58,  -592,  -592,  -592,
    -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    -592,   -33,  -592,  -592,  -592,  -592,  -592,  -592,  1844,  -592,
     144,    83,    40,  -592,  1058,  -592,  -592,  1844,  1844,  1628,
    1844,  1844,  1844,  1844,  1844,  -592,  -592,  -592,  -592,  -592,
    -592,  -592,  -592,   -58,  -592,  -592,  1844,   -34,   855,  1439,
    1628,   855,  1058,   855,  1439,   -12,     1,     0,    23,    30,
      48,  -148,  -100,   -17,     3,     7,    61,    84,   101,   106,
     120,   134,   164,   167,   170,   172,   175,   177,   184,   195,
     201,   203,   204,   206,   208,     5,    98,   193,   205,   664,
     209,   210,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    -592,   211,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    -592,  -592,  -592,   855,  -592,    65,  -592,   214,  -592,    11,
    -592,  -592,  -592,  -592,  -592,   212,  -592,  -592,  -592,  -592,
    -592,  -592,  -592,  -592,  -592,  -592,   283,  -592,   221,   222,
    -592,  -592,  -592,  -592,  1439,  -107,   225,   232,   103,  -592,
     233,   242,   244,   310,  1844,  -592,   246,  -147,  -592,   246,
     312,   -58,  -592,  -170,  1844,  -592,   256,   -58,  -592,   -71,
    -592,    -9,  -592,  -592,  -592,  -592,  -592,    61,  -592,  -592,
    -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    -592,  -592,   855,   596,  -592,  -592,   855,  -592,  -592,  -592,
     322,   291,   -56,   368,  -592,   198,  -592,   923,  -107,  -592,
    -592,   -14,  -592,   428,   498,    18,   447,    12,  -592,  -107,
     855,  -592,   855,  -592,  -592,  -592,  -592,  1498,   855,   498,
     855,   422,  1250,  -592,  1058,  1058,   855,  -592,   855,   855,
    -107,   454,  -592,  -592,   855,  -592,  1844,   855,   855,  -592,
     855,   855,   855,  -592,  1736,   261,  1628,  -592,  -592,  1179,
    1844,  1179,  -592,  -592,   -35,  1844,  1844,  -592,  -592,  -592,
     359,   -58,  -592,   855,  -592,  -592,  -592,   480,   -94,  -592,
    -592,  -592,   855,  -592,  -592,  -592,   855,  -592,  -592,  -592,
     855,  -592,  -592,   855,   855,   855,   855,  -592,  -592,  -592,
    -592,   855,   855,   923,   923,   454,  -592,   855,  1058,   855,
    1058,  1058,  1439,   273,    55,  -592,   498,    88,  -592,   260,
     279,   280,    95,   130,  -592,  -592,  -592,  -592,  -592,   289,
     290,   289,   290,   290,    84,  -592,  -592,  -592,  -592,   855,
    -592,  -592,  -592,  -592,  -592,   498,   292,   135,  -592,  -592,
     -11,  -592,   491,  -592,   142,   293,   294,   146,   -58,   498,
    1844,   -61,  -592,   -75,  -592,   454,  -592,  -592,   360,   295,
     297,   299,   174,   299,  1902,   483,  1844,  -592,  -592,   366,
    -592,  -592,    31,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    1784,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,   -58,
     305,  1844,   370,  -592,  -592,  -592,   -58,    -9,  -592,   855,
     855,  -592,    22,  -592,   -76,  -592,   378,   -56,   -56,   368,
     368,   368,   368,  -592,  -592,  -592,  -592,  -592,   348,  -592,
    -592,  -592,  -592,  -592,   855,  -592,   855,  -592,   855,  -592,
    -592,   855,  -592,  -592,  -592,   855,  -592,   855,  -592,  -592,
    -592,  -592,  -592,    45,    46,  -592,  1736,  -592,    44,    44,
     493,  2010,   261,  -592,  -592,  1382,    47,   502,   306,  -592,
    -592,  1179,  -592,   156,  -592,    34,  -592,  -592,  -592,  -592,
    -592,  -592,  1844,   324,   178,  -592,   384,  -592,  -592,  -592,
     498,  -592,   855,  1058,  -592,    20,   516,  1058,   732,  -592,
     855,  -592,  -592,   855,   301,  -592,  -592,   188,  -592,   498,
      46,    10,   523,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    -592,  -592,    -3,  -592,   320,  1179,  1844,    64,   -72,  -592,
    -592,  -101,   397,   399,  -592,   326,  -592,   518,  -592,  1179,
    -592,  1902,  -592,  -592,  -592,  1844,  -592,   191,  1844,  -592,
    -592,  1844,  -592,  -592,  -592,  -592,   -58,  -592,  -592,  -592,
     215,   855,  -592,  -592,  -592,   454,  1844,   330,    44,   520,
    -592,  -592,    69,   454,  -592,  2010,    44,   855,  -592,  -592,
    -592,  -592,  -592,  -592,  -592,  1058,   498,  -592,   410,  -592,
     192,  1844,  -592,  1179,   454,  -592,  -592,  -592,   -76,  -592,
     100,  -592,  1844,   527,  1844,   339,  -592,  -592,  -592,   347,
     732,  -592,   352,   343,   104,  -592,   536,  1902,  -592,  1902,
     454,   357,  -592,  -592,  -592,  -592,   104,   353,   363,  -592,
    -592,   358,  -592,  -592,  -592
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -592,  -592,  -592,   563,  -592,  -592,  -592,   -43,  -230,   -60,
      -1,  -592,  -592,  -592,  -592,  -592,   239,  -592,  -592,  -592,
     -51,  -592,  -592,   367,    35,  -592,   -55,  -239,    15,  -592,
      26,  -592,  -592,  -592,   254,  -312,  -592,  -289,  -592,  -592,
     -30,  -592,  -592,  -121,  -592,   127,   145,  -592,   -53,  -592,
     147,  -592,  -592,  -492,  -592,  -592,  -592,  -592,  -531,  -592,
     -21,   -15,  -592,  -592,   -49,  -592,   -82,  -589,    37,  -592,
    -592,   376,  -592,  -295,  -592,   128,    72,   387,  -592,    85,
      32,    33,   -80,  -591,  -570,  -572,  -592,  -592,   278,   -52,
     -89,  -253,   317,  -592,  -592,  -592,   250,  -592,  -592,  -592,
    -592,  -592,  -592,    53,   -18,  -592,  -592,  -592,  -592,  -592,
    -592,  -592,  -592,   -50,  -285,  -169,  -592,  -592,  -592,  -592,
     -92,   351,   150,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    -592,   137,  -300,   -87,   -86,  -222,  -173,  -192,  -592,   314,
    -207,   -40,   -54,  -592,  -592,   -48,  -592,  -592,   179,  -592,
    -592,  -592,  -592,  -592,  -592,  -592,  -592,    -5,  -503,  -592,
    -592,  -592,  -592,   -57,  -592,  -592,  -592,   110,    43
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -412
static const yytype_int16 yytable[] =
{
      51,    57,   261,   275,   165,   274,   276,   274,    66,   459,
     195,   284,   418,   333,   407,    62,   198,   220,   208,   422,
     371,   293,   414,   328,   194,   602,   417,   584,   625,   213,
    -411,   -14,   165,    86,   223,   271,   321,   223,   195,   272,
     279,   403,   404,   289,   198,   335,   369,   428,   660,   408,
     571,   224,   194,   280,   285,   286,   316,     1,   -26,   301,
     366,   224,    56,   166,   340,   572,   203,   206,   166,   209,
     210,   409,   216,   216,   305,  -255,    53,   291,   221,   665,
     442,   660,   442,   684,    55,   222,   351,   352,   353,   166,
      67,   166,   675,  -255,   333,   684,    68,   302,   303,    69,
     304,   282,   354,    70,   685,   -16,   -27,   408,   681,   470,
      71,   373,    72,  -257,   471,   489,   685,   491,   492,   382,
     367,   373,   554,   572,   477,   355,   335,   515,   478,   406,
     634,  -257,   326,   555,    56,   487,   652,    56,    56,   415,
     300,   416,    86,   245,   246,   514,   687,   305,   688,    64,
     305,    56,   301,   245,   246,   671,   485,   486,   305,   329,
     247,   460,   249,   247,   248,   249,   461,   337,    58,   483,
     484,   213,   -16,   247,   248,   249,   250,   251,   429,   305,
     479,   480,   481,   482,   280,   430,   250,   251,   694,   -28,
     302,   303,   505,   304,   -20,   517,   434,   506,   435,  -255,
     628,  -285,   317,   203,   282,   629,   320,   -21,   282,   -29,
     405,   -31,   325,   -30,   327,   372,   567,   626,   412,   603,
      56,   422,  -411,   645,  -286,   552,   419,    56,   553,   581,
     581,  -277,   165,   195,   165,   165,   596,  -257,   195,   381,
     195,   195,    85,    86,   198,   436,   198,   198,    86,  -278,
      86,   570,   194,   599,   194,   194,   419,   495,   496,   438,
     619,   438,   287,  -255,   441,   427,   441,    86,   463,   464,
     633,   421,    86,   631,  -255,   654,    73,    74,    66,   442,
     442,   488,   490,   274,   573,   288,   442,   638,   580,   580,
     497,   498,   442,   166,   166,   594,   442,   500,   501,   284,
     614,  -257,  -372,   552,   -32,   413,   672,  -373,   165,   342,
     165,   165,  -257,   289,   195,   166,   195,   195,   279,   210,
     198,  -374,   198,   198,   216,   216,   467,   373,   194,   566,
     194,   194,   502,   496,   443,  -375,   443,   504,   498,   581,
     573,   666,   285,   286,   508,   498,   442,   596,   511,   498,
     343,   344,   345,   346,   347,   348,   349,   561,   604,   605,
     442,   363,   364,   365,    64,  -376,    67,   166,  -377,   166,
     166,  -378,    68,  -379,   562,    69,  -381,   513,  -382,    70,
     610,   611,   536,   550,   337,  -289,    71,   537,    72,   442,
     622,   498,   661,   642,   611,   647,  -290,   442,   580,   -52,
     663,    56,  -384,   655,  -385,  -395,   594,  -396,   564,  -386,
     295,   -53,   290,   512,   442,   -56,   -57,   296,   516,   412,
     292,   569,   298,   299,   667,   306,   343,   344,   345,   346,
     347,   348,   349,   307,   308,   532,   343,   344,   345,   346,
     347,   348,   349,   310,   682,   311,   312,   314,   319,   538,
     689,   323,   341,   368,   541,   370,   682,   408,   438,   438,
     543,   548,  -312,   441,   441,   438,   419,   425,   616,   558,
     441,   438,   419,   421,   419,   438,   441,   620,   587,   494,
     441,   499,  -311,   343,   344,   345,   346,   347,   348,   349,
     280,   282,   -14,   165,   503,   509,   510,   165,   535,   195,
     521,   531,   518,   195,   519,   198,   542,   621,   546,   198,
     560,   585,   600,   194,   248,   555,   608,   194,   357,   358,
     359,   360,   361,   601,   595,   438,   615,   627,   630,   -96,
     441,   -95,   636,   443,   443,   646,   637,   651,   653,   438,
     443,   543,   662,   632,   441,   674,   443,   676,   677,   680,
     443,   419,   166,   679,   686,   691,   166,   343,   344,   345,
     346,   347,   348,   349,   626,   692,    54,   693,   438,   465,
     606,   313,   612,   441,   458,   641,   438,   540,   524,   523,
     639,   441,   656,   635,   419,   165,   640,   657,   678,   613,
     322,   195,   587,   438,   590,   549,   318,   198,   441,   223,
     443,   579,   623,   624,   532,   194,   690,   643,   466,   402,
     543,   618,   469,   224,   443,   343,   344,   345,   346,   347,
     348,   349,   493,   507,   384,   648,   343,   344,   345,   346,
     347,   348,   349,   343,   344,   345,   346,   347,   348,   349,
     669,   383,   568,   443,   166,   664,   565,   468,     0,   551,
     648,   443,   607,   670,   644,     0,     0,     0,     0,     0,
       0,   673,     0,   648,     0,     0,     0,   223,   443,     0,
       0,     0,   225,   226,     0,     0,     0,     0,     0,     0,
       0,   224,     0,   227,     0,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,     0,     0,   238,   239,   240,
     241,   242,   243,   244,     0,   245,   246,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   247,   248,   249,     0,     0,
       0,     0,     0,     0,     0,   223,     0,     0,   250,   251,
     225,   226,     0,     0,     0,     0,     0,     0,     0,   224,
       0,   227,     0,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   252,     0,   238,   239,   240,   241,   242,
     243,   244,     0,   245,   246,     0,     0,     0,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,     0,     0,
       0,     0,     0,   247,   248,   249,     0,   163,     0,     0,
       0,   164,     0,   253,   336,     0,   250,   251,   225,   226,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   227,
       0,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   252,     0,   238,   239,   240,   241,   242,   243,   244,
       0,   245,   246,     0,     0,     0,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,     0,     0,   223,     0,
       0,   247,   248,   249,     0,   163,     0,     0,     0,   164,
     -54,   253,   224,     0,   250,   251,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   252,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,     0,     0,   223,     0,     0,     0,
     617,   225,   226,   163,     0,     0,     0,   164,     0,   253,
     224,     0,   227,     0,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,     0,     0,   238,   239,   240,   241,
     242,   243,   244,     0,   245,   246,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   247,   248,   249,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,   251,   225,
     226,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     227,     0,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   252,     0,   238,   239,   240,   241,   242,   243,
     244,     0,   245,   246,     0,     0,     0,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,     0,     0,     0,
       0,     0,   247,   248,   249,     0,   163,     0,     0,     0,
     164,    87,   253,    64,    88,     0,     0,     0,     0,     0,
      89,     0,    90,    91,     0,     0,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,    93,    94,
     252,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   163,     0,     0,     0,   164,     0,
     253,     0,     0,     0,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,    40,    41,    42,     0,
       0,   127,   128,   129,    46,   130,   131,   132,     0,   133,
      49,    50,   428,   429,     0,     0,     0,   134,     0,     0,
     430,     0,   431,     0,     0,     0,   224,     0,   432,   433,
       0,   434,   135,   435,     0,     0,     0,     0,     0,     0,
       0,     0,   136,     0,   137,   138,   139,     0,     0,     0,
       0,     0,     0,     0,     0,   140,     0,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,     0,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
       0,     0,     0,   223,     0,    64,    88,     0,     0,   163,
       0,     0,    89,   164,    90,    91,     0,     0,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
      93,    94,     0,     0,     0,     0,     0,     0,   245,   246,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   247,   248,
     249,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   250,   251,     0,     0,     0,   225,   226,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   227,   394,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   395,
     396,   238,   239,   240,   241,   242,   243,   244,     0,     0,
       0,     0,     0,   397,   398,   399,     0,   400,   401,   132,
       0,   133,     0,     0,     0,     0,     0,     0,     0,     0,
     436,     0,     0,   302,   303,   591,     0,     0,     0,     0,
       0,     0,     0,     0,   135,     0,     0,     0,     0,   224,
       0,     0,     0,     0,   136,     0,   137,   138,   139,     0,
       0,     0,     0,     0,     0,     0,     0,   140,     0,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     0,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   223,     0,     0,     0,     0,     0,     0,     0,
       0,   163,     0,     0,     0,   164,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,   592,   593,     0,     0,    43,    44,    45,    46,    47,
      48,   379,     0,     0,    49,    50,     0,     0,     0,     0,
       0,   247,   248,   249,     0,   225,   226,     0,     0,     0,
       0,     0,     0,     0,   250,   251,   227,     0,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,     0,     0,
     238,   239,   240,   241,   242,   243,   244,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   225,   226,     0,     0,     0,     0,
       0,     0,     0,   436,     0,   227,     0,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,     0,     0,   238,
     239,   240,   241,   242,   243,   244,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,     7,     0,     0,     0,     0,     0,     0,     0,     0,
     163,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   163,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     7,
       0,    43,    44,    45,    46,    47,    48,     0,     0,    68,
      49,    50,     0,     0,     0,     0,    70,   134,     0,     0,
       0,     0,     0,     0,     0,   420,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   431,     0,     0,
       0,     0,     0,     0,   433,     0,     0,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     7,     0,    43,
      44,    45,    46,    47,    48,     0,     0,     0,    49,    50,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,     0,     0,    43,    44,    45,
      46,    47,    48,     0,     0,     7,    49,    50,   525,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,     0,     0,    43,    44,    45,
      46,    47,    48,     0,     0,     0,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     7,     0,    43,    44,    45,    46,    47,
      48,     0,     0,     0,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   586,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     0,     0,    43,    44,    45,    46,    47,    48,     0,
       0,     0,    49,    50
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-592))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       1,     6,    88,    92,    64,    91,    93,    93,    60,   321,
      64,   103,   312,   252,   299,    58,    64,    74,    69,   314,
       8,    10,   307,    32,    64,   528,   311,   519,    18,    72,
      10,   132,    92,   203,     3,    89,   206,     3,    92,    90,
      94,   294,   295,   129,    92,   252,    28,     3,   637,     3,
       4,    17,    92,   201,   104,   105,   203,    21,   206,   166,
     267,    17,   209,    64,   256,    19,    67,    68,    69,    70,
      71,   301,    73,    74,   195,    10,     0,   163,    83,   651,
     319,   670,   321,   674,   200,    86,   142,   143,   144,    90,
       7,    92,   664,    28,   333,   686,    13,   204,   205,    16,
     207,   201,   158,    20,   674,   206,   206,     3,     4,   203,
      27,   280,    29,    10,   208,   368,   686,   370,   371,   288,
     134,   290,   198,    19,   346,   181,   333,   202,   350,   298,
     202,    28,   203,   209,   209,   365,   628,   209,   209,   308,
     194,   310,   203,   109,   110,   206,   677,   268,   679,     5,
     271,   209,   166,   109,   110,   658,   363,   364,   279,   168,
     129,   196,   131,   129,   130,   131,   201,   253,   201,   361,
     362,   214,   206,   129,   130,   131,   142,   143,     4,   300,
     353,   354,   355,   356,   201,    11,   142,   143,   691,   206,
     204,   205,   203,   207,   206,   425,    22,   208,    24,   134,
     203,   201,   207,   204,   201,   208,   211,   206,   201,   206,
     296,   206,   217,   206,   219,   203,   501,   207,   304,   531,
     209,   516,   202,     8,   201,   203,   312,   209,   206,   518,
     519,   201,   292,   287,   294,   295,   525,   134,   292,   287,
     294,   295,   202,   203,   292,   201,   294,   295,   203,   201,
     203,   206,   292,   206,   294,   295,   342,   202,   203,   319,
     560,   321,   201,   198,   319,   316,   321,   203,   325,   326,
     206,   314,   203,   585,   209,   206,   193,   194,   330,   518,
     519,   367,   369,   369,   514,   201,   525,   599,   518,   519,
     202,   203,   531,   294,   295,   525,   535,   202,   203,   391,
     553,   198,   201,   203,   206,   306,   206,   201,   368,    18,
     370,   371,   209,   399,   368,   316,   370,   371,   372,   320,
     368,   201,   370,   371,   325,   326,   331,   496,   368,   498,
     370,   371,   202,   203,   319,   201,   321,   202,   203,   628,
     570,   653,   392,   393,   202,   203,   585,   636,   202,   203,
     135,   136,   137,   138,   139,   140,   141,     9,   202,   203,
     599,   163,   164,   165,     5,   201,     7,   368,   201,   370,
     371,   201,    13,   201,    26,    16,   201,   420,   201,    20,
     202,   203,   442,   469,   470,   201,    27,   442,    29,   628,
     202,   203,   645,   202,   203,   625,   201,   636,   628,   206,
     208,   209,   201,   633,   201,   201,   636,   201,   494,   201,
     198,   206,   201,   418,   653,   206,   206,   134,   423,   505,
     206,   507,   201,   201,   654,   200,   135,   136,   137,   138,
     139,   140,   141,   201,   201,   436,   135,   136,   137,   138,
     139,   140,   141,   201,   674,   201,   136,   201,   136,   450,
     680,   195,   130,    25,   459,     8,   686,     3,   518,   519,
     461,   466,   202,   518,   519,   525,   552,   206,   557,   474,
     525,   531,   558,   516,   560,   535,   531,   563,   521,   206,
     535,   202,   202,   135,   136,   137,   138,   139,   140,   141,
     201,   201,   132,   553,   202,   202,   202,   557,   132,   553,
     201,    18,   207,   557,   207,   553,   201,   206,   138,   557,
     132,    18,    10,   553,   130,   209,   192,   557,   150,   151,
     152,   153,   154,   528,   525,   585,    10,     4,   208,   132,
     585,   132,   206,   518,   519,   621,    18,   207,    18,   599,
     525,   542,   132,   586,   599,    18,   531,   208,   201,   206,
     535,   637,   553,   201,    18,   202,   557,   135,   136,   137,
     138,   139,   140,   141,   207,   202,     3,   209,   628,   330,
     535,   204,   546,   628,   320,   605,   636,   450,   433,   432,
     601,   636,   635,   588,   670,   645,   601,   636,   670,   552,
     214,   645,   635,   653,   522,   467,   209,   645,   653,     3,
     585,   516,   570,   570,   605,   645,   686,   608,   330,   292,
     611,   558,   132,    17,   599,   135,   136,   137,   138,   139,
     140,   141,   372,   132,   202,   626,   135,   136,   137,   138,
     139,   140,   141,   135,   136,   137,   138,   139,   140,   141,
     658,   290,   505,   628,   645,   650,   496,   333,    -1,   470,
     651,   636,   542,   658,   611,    -1,    -1,    -1,    -1,    -1,
      -1,   662,    -1,   664,    -1,    -1,    -1,     3,   653,    -1,
      -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    -1,    87,    -1,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    -1,    -1,   101,   102,   103,
     104,   105,   106,   107,    -1,   109,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,   142,   143,
      76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      -1,    87,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,   167,    -1,   101,   102,   103,   104,   105,
     106,   107,    -1,   109,   110,    -1,    -1,    -1,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,    -1,    -1,
      -1,    -1,    -1,   129,   130,   131,    -1,   201,    -1,    -1,
      -1,   205,    -1,   207,   208,    -1,   142,   143,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   167,    -1,   101,   102,   103,   104,   105,   106,   107,
      -1,   109,   110,    -1,    -1,    -1,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,    -1,    -1,     3,    -1,
      -1,   129,   130,   131,    -1,   201,    -1,    -1,    -1,   205,
     206,   207,    17,    -1,   142,   143,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,    -1,    -1,     3,    -1,    -1,    -1,
     198,    76,    77,   201,    -1,    -1,    -1,   205,    -1,   207,
      17,    -1,    87,    -1,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    -1,    -1,   101,   102,   103,   104,
     105,   106,   107,    -1,   109,   110,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   129,   130,   131,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    76,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   167,    -1,   101,   102,   103,   104,   105,   106,
     107,    -1,   109,   110,    -1,    -1,    -1,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,    -1,    -1,    -1,
      -1,    -1,   129,   130,   131,    -1,   201,    -1,    -1,    -1,
     205,     3,   207,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
     167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,   205,    -1,
     207,    -1,    -1,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    -1,
      -1,   113,   114,   115,   116,   117,   118,   119,    -1,   121,
     122,   123,     3,     4,    -1,    -1,    -1,   129,    -1,    -1,
      11,    -1,    13,    -1,    -1,    -1,    17,    -1,    19,    20,
      -1,    22,   144,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   154,    -1,   156,   157,   158,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   167,    -1,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,    -1,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
      -1,    -1,    -1,     3,    -1,     5,     6,    -1,    -1,   201,
      -1,    -1,    12,   205,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,    -1,    -1,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,    -1,    -1,
      -1,    -1,    -1,   113,   114,   115,    -1,   117,   118,   119,
      -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     201,    -1,    -1,   204,   205,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    -1,    -1,   154,    -1,   156,   157,   158,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,    -1,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   201,    -1,    -1,    -1,   205,    -1,    -1,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    -1,    -1,   113,   114,   115,   116,   117,
     118,     3,    -1,    -1,   122,   123,    -1,    -1,    -1,    -1,
      -1,   129,   130,   131,    -1,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,    87,    -1,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    -1,    -1,
     101,   102,   103,   104,   105,   106,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   201,    -1,    87,    -1,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    -1,    -1,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,     3,
      -1,   113,   114,   115,   116,   117,   118,    -1,    -1,    13,
     122,   123,    -1,    -1,    -1,    -1,    20,   129,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,     3,    -1,   113,
     114,   115,   116,   117,   118,    -1,    -1,    -1,   122,   123,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    -1,    -1,   113,   114,   115,
     116,   117,   118,    -1,    -1,     3,   122,   123,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    -1,    -1,   113,   114,   115,
     116,   117,   118,    -1,    -1,    -1,   122,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,     3,    -1,   113,   114,   115,   116,   117,
     118,    -1,    -1,    -1,   122,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    -1,    -1,   113,   114,   115,   116,   117,   118,    -1,
      -1,    -1,   122,   123
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    21,   211,   212,   213,   214,   215,     3,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   113,   114,   115,   116,   117,   118,   122,
     123,   220,   221,     0,   213,   200,   209,   367,   201,   216,
     222,   223,   217,   220,     5,   298,   299,     7,    13,    16,
      20,    27,    29,   193,   194,   224,   226,   227,   228,   231,
     242,   279,   282,   283,   370,   202,   203,     3,     6,    12,
      14,    15,    23,    30,    31,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   113,   114,   115,
     117,   118,   119,   121,   129,   144,   154,   156,   157,   158,
     167,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   201,   205,   219,   220,   230,   299,   300,
     301,   302,   303,   304,   307,   308,   309,   310,   315,   316,
     317,   318,   320,   321,   322,   326,   327,   329,   333,   334,
     335,   336,   337,   338,   351,   352,   353,   354,   355,   359,
     361,   362,   363,   220,   232,   233,   220,   229,   230,   220,
     220,   243,   244,   217,   280,   281,   220,   371,   373,   372,
     373,   367,   220,     3,    17,    76,    77,    87,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   101,   102,
     103,   104,   105,   106,   107,   109,   110,   129,   130,   131,
     142,   143,   167,   207,   219,   236,   237,   238,   239,   240,
     241,   344,   345,   346,   347,   348,   350,   351,   352,   355,
     356,   352,   230,   343,   344,   300,   343,   305,   306,   352,
     201,   330,   201,   323,   330,   323,   323,   201,   201,   344,
     201,   344,   206,    10,   367,   198,   134,   328,   201,   201,
     352,   166,   204,   205,   207,   253,   200,   201,   201,   360,
     201,   201,   136,   233,   201,   287,   203,   367,   287,   136,
     367,   206,   281,   195,   374,   367,   203,   367,    32,   168,
     225,   284,   285,   237,   349,   350,   208,   344,   357,   358,
     347,   130,    18,   135,   136,   137,   138,   139,   140,   141,
     364,   142,   143,   144,   158,   181,   366,   150,   151,   152,
     153,   154,   365,   163,   164,   165,   350,   134,    25,    28,
       8,     8,   203,   325,   331,   332,   344,   324,   325,     3,
     339,   355,   325,   331,   202,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    88,    99,   100,   113,   114,   115,
     117,   118,   302,   301,   301,   344,   325,   324,     3,   218,
     340,   341,   344,   220,   324,   325,   325,   324,   342,   344,
      29,   217,   283,   288,   289,   206,   286,   230,     3,     4,
      11,    13,    19,    20,    22,    24,   201,   218,   219,   234,
     235,   236,   237,   238,   245,   246,   247,   248,   251,   252,
     253,   255,   259,   260,   261,   264,   266,   267,   244,   245,
     196,   201,   375,   373,   373,   226,   298,   367,   349,   132,
     203,   208,   277,   278,   312,   313,   342,   345,   345,   346,
     346,   346,   346,   347,   347,   350,   350,   218,   344,   301,
     343,   301,   301,   306,   206,   202,   203,   202,   203,   202,
     202,   203,   202,   202,   202,   203,   208,   132,   202,   202,
     202,   202,   367,   217,   206,   202,   367,   218,   207,   207,
     265,   201,   256,   260,   256,     6,   217,   268,   269,   270,
     271,    18,   220,   249,   250,   132,   219,   236,   220,   254,
     255,   367,   201,   220,   377,   378,   138,   376,   367,   285,
     344,   358,   203,   206,   198,   209,   311,   314,   367,   368,
     132,     9,    26,   319,   344,   332,   325,   324,   341,   344,
     206,     4,    19,   218,   290,   291,   293,   294,   297,   289,
     218,   247,   262,   263,   263,    18,    29,   217,   257,   258,
     286,     3,   109,   110,   218,   220,   247,   273,   274,   206,
      10,   367,   368,   245,   202,   203,   234,   377,   192,   369,
     202,   203,   240,   278,   301,    10,   300,   198,   313,   342,
     344,   206,   202,   290,   291,    18,   207,     4,   203,   208,
     208,   245,   217,   206,   202,   367,   206,    18,   245,   270,
     271,   250,   202,   220,   378,     8,   344,   218,   220,   295,
     296,   207,   263,    18,   206,   218,   258,   274,   275,   276,
     277,   301,   132,   208,   367,   295,   245,   218,   272,   314,
     367,   368,   206,   220,    18,   295,   208,   201,   276,   201,
     206,     4,   218,   292,   293,   294,    18,   268,   268,   218,
     292,   202,   202,   209,   368
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 199 "gram.y"
    {}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 200 "gram.y"
    {}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 204 "gram.y"
    {}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 205 "gram.y"
    {}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 209 "gram.y"
    {}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 213 "gram.y"
    {}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 217 "gram.y"
    {}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 221 "gram.y"
    {}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 222 "gram.y"
    { (yyval.y_varidlist) = (yyvsp[(2) - (3)].y_varidlist); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 226 "gram.y"
    { (yyval.y_varidlist) = build_var_id_list(NULL, (yyvsp[(1) - (1)].y_stid)); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 227 "gram.y"
    { (yyval.y_varidlist) = build_var_id_list((yyvsp[(1) - (3)].y_varidlist), (yyvsp[(3) - (3)].y_stid)); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 231 "gram.y"
    { (yyval.y_type) = check_typename(st_enter_id((yyvsp[(1) - (1)].y_string))); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 235 "gram.y"
    { (yyval.y_stid) = st_enter_id((yyvsp[(1) - (1)].y_string)); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 239 "gram.y"
    { (yyval.y_stid) = (yyvsp[(1) - (1)].y_string); }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 243 "gram.y"
    { (yyval.y_string) = st_enter_id((yyvsp[(1) - (1)].y_string)); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 297 "gram.y"
    {}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 301 "gram.y"
    {}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 302 "gram.y"
    {}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 306 "gram.y"
    {}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 307 "gram.y"
    {}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 311 "gram.y"
    {}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 312 "gram.y"
    {}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 316 "gram.y"
    {}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 317 "gram.y"
    {}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 321 "gram.y"
    {/*ignore*/}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 322 "gram.y"
    {/*ignore*/}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 323 "gram.y"
    {}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 324 "gram.y"
    {}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 330 "gram.y"
    {}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 334 "gram.y"
    {}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 335 "gram.y"
    {}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 340 "gram.y"
    {}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 341 "gram.y"
    {}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 347 "gram.y"
    {}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 351 "gram.y"
    {}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 352 "gram.y"
    {}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 356 "gram.y"
    {}
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 360 "gram.y"
    {}
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 361 "gram.y"
    { }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 362 "gram.y"
    { (yyval.y_expr) = (yyvsp[(1) - (1)].y_expr); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 363 "gram.y"
    { (yyval.y_expr) = (yyvsp[(1) - (1)].y_expr); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 367 "gram.y"
    { (yyval.y_expr) = make_un_expr((yyvsp[(1) - (2)].y_unop), (yyvsp[(2) - (2)].y_expr)); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 368 "gram.y"
    { (yyval.y_expr) = (yyvsp[(1) - (1)].y_expr); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 372 "gram.y"
    { (yyval.y_expr) = make_intconst_expr((yyvsp[(1) - (1)].y_int), ty_build_basic(TYSIGNEDLONGINT)); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 373 "gram.y"
    { (yyval.y_expr) = make_realconst_expr( (double)(yyvsp[(1) - (1)].y_real)); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 377 "gram.y"
    { (yyval.y_unop) = UPLUS_OP; }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 378 "gram.y"
    { (yyval.y_unop) = NEG_OP; }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 382 "gram.y"
    { (yyval.y_expr) = make_strconst_expr((yyvsp[(1) - (1)].y_string)); }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 383 "gram.y"
    { (yyval.y_expr) = (yyvsp[(1) - (1)].y_expr); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 387 "gram.y"
    { (yyval.y_expr) = make_null_expr(NIL_OP); }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 388 "gram.y"
    { (yyval.y_expr) = make_intconst_expr(0, ty_build_basic(TYSIGNEDCHAR)); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 389 "gram.y"
    { (yyval.y_expr) = make_intconst_expr(1, ty_build_basic(TYSIGNEDCHAR)); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 393 "gram.y"
    { (yyval.y_string) = (yyvsp[(1) - (1)].y_string); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 397 "gram.y"
    {}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 398 "gram.y"
    {}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 402 "gram.y"
    { resolve_all_ptr(); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 406 "gram.y"
    {}
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 407 "gram.y"
    {}
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 411 "gram.y"
    { create_typename( (yyvsp[(1) - (3)].y_stid), (yyvsp[(3) - (3)].y_type) ); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 414 "gram.y"
    { (yyval.y_type) = (yyvsp[(1) - (1)].y_type); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 415 "gram.y"
    { (yyval.y_type) = (yyvsp[(1) - (1)].y_type); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 419 "gram.y"
    { (yyval.y_type) = (yyvsp[(1) - (1)].y_type);}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 420 "gram.y"
    { (yyval.y_type) = (yyvsp[(1) - (1)].y_type); }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 421 "gram.y"
    { (yyval.y_type) = (yyvsp[(1) - (1)].y_type); }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 422 "gram.y"
    { (yyval.y_type) = (yyvsp[(1) - (1)].y_type); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 426 "gram.y"
    {}
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 427 "gram.y"
    { (yyval.y_type) = (yyvsp[(1) - (1)].y_type); }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 431 "gram.y"
    {}
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 435 "gram.y"
    {}
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 436 "gram.y"
    {}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 440 "gram.y"
    {}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 444 "gram.y"
    { (yyval.y_type) = check_subrange((yyvsp[(1) - (3)].y_expr),(yyvsp[(3) - (3)].y_expr)); }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 449 "gram.y"
    { (yyval.y_type) = (yyvsp[(2) - (2)].y_type) ; }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 453 "gram.y"
    {}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 454 "gram.y"
    {}
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 458 "gram.y"
    { (yyval.y_type) = ty_build_ptr((yyvsp[(1) - (1)].y_stid), NULL); }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 459 "gram.y"
    { (yyval.y_type) = ty_build_ptr(NULL, (yyvsp[(1) - (1)].y_type)); }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 463 "gram.y"
    { (yyval.y_type) = ty_build_func(ty_build_basic(TYVOID), (yyvsp[(2) - (2)].y_paramlist), TRUE); }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 464 "gram.y"
    { (yyval.y_type) = ty_build_func((yyvsp[(3) - (3)].y_type), (yyvsp[(2) - (3)].y_paramlist), TRUE); }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 468 "gram.y"
    {(yyval.y_paramlist) = NULL;}
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 469 "gram.y"
    {(yyval.y_paramlist) = check_param((yyvsp[(2) - (3)].y_paramlist));}
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 473 "gram.y"
    { (yyval.y_paramlist) = (yyvsp[(1) - (1)].y_paramlist); }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 474 "gram.y"
    { (yyval.y_paramlist) = concatenate_param_list ((yyvsp[(1) - (3)].y_paramlist), (yyvsp[(3) - (3)].y_paramlist)); }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 478 "gram.y"
    {(yyval.y_paramlist)=build_param_list((yyvsp[(1) - (1)].y_varidlist),ty_build_basic(TYERROR),FALSE);}
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 479 "gram.y"
    { (yyval.y_paramlist) = build_param_list((yyvsp[(1) - (3)].y_varidlist), (yyvsp[(3) - (3)].y_type), FALSE); }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 480 "gram.y"
    { (yyval.y_paramlist) = build_param_list((yyvsp[(2) - (4)].y_varidlist), (yyvsp[(4) - (4)].y_type), TRUE); }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 481 "gram.y"
    {(yyval.y_paramlist)=build_param_list((yyvsp[(2) - (2)].y_varidlist),ty_build_basic(TYERROR),TRUE); /*treat as semantic errors*/}
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 486 "gram.y"
    { (yyval.y_type) = (yyvsp[(2) - (2)].y_type); }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 487 "gram.y"
    { (yyval.y_type) = (yyvsp[(1) - (1)].y_type); }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 491 "gram.y"
    { (yyval.y_type) = (yyvsp[(1) - (1)].y_type); }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 492 "gram.y"
    {}
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 493 "gram.y"
    {}
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 494 "gram.y"
    {}
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 500 "gram.y"
    { (yyval.y_type) = check_array((yyvsp[(6) - (6)].y_type), (yyvsp[(3) - (6)].y_indexlist)); }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 504 "gram.y"
    { (yyval.y_indexlist) = create_list_from_type( (yyvsp[(1) - (1)].y_type) ); }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 505 "gram.y"
    { (yyval.y_indexlist) = concatenate_index_lists((yyvsp[(1) - (3)].y_indexlist), (yyvsp[(3) - (3)].y_type)); }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 510 "gram.y"
    { (yyval.y_type) = (yyvsp[(1) - (1)].y_type); }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 511 "gram.y"
    { (yyval.y_type) = (yyvsp[(1) - (1)].y_type); }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 516 "gram.y"
    {}
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 520 "gram.y"
    {}
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 521 "gram.y"
    {}
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 527 "gram.y"
    {}
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 531 "gram.y"
    {}
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 535 "gram.y"
    {}
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 536 "gram.y"
    {}
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 537 "gram.y"
    {}
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 538 "gram.y"
    {}
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 542 "gram.y"
    {}
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 543 "gram.y"
    {}
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 547 "gram.y"
    {}
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 551 "gram.y"
    {}
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 555 "gram.y"
    {}
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 556 "gram.y"
    {}
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 560 "gram.y"
    {}
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 561 "gram.y"
    {}
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 565 "gram.y"
    {}
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 566 "gram.y"
    {}
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 570 "gram.y"
    {}
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 571 "gram.y"
    {}
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 575 "gram.y"
    {}
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 579 "gram.y"
    {}
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 580 "gram.y"
    {}
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 584 "gram.y"
    {}
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 585 "gram.y"
    {}
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 591 "gram.y"
    {}
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 595 "gram.y"
    {}
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 596 "gram.y"
    {}
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 600 "gram.y"
    { create_gdecl((yyvsp[(1) - (4)].y_varidlist), (yyvsp[(3) - (4)].y_type)); decl((yyvsp[(3) - (4)].y_type), (yyvsp[(1) - (4)].y_varidlist));}
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 604 "gram.y"
    {}
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 605 "gram.y"
    {}
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 609 "gram.y"
    {}
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 610 "gram.y"
    {}
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 614 "gram.y"
    { (yyval.y_dir) = (yyvsp[(1) - (1)].y_dir); }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 615 "gram.y"
    {}
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 619 "gram.y"
    { (yyval.y_dir) = DIR_FORWARD;  }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 620 "gram.y"
    { (yyval.y_dir) = DIR_EXTERNAL; }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 624 "gram.y"
    {}
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 625 "gram.y"
    { (yyval.y_type) = check_function_type((yyvsp[(2) - (2)].y_type)); }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 631 "gram.y"
    {}
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 632 "gram.y"
    {}
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 636 "gram.y"
    {}
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 637 "gram.y"
    {}
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 641 "gram.y"
    {}
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 642 "gram.y"
    {}
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 643 "gram.y"
    {}
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 644 "gram.y"
    {}
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 645 "gram.y"
    {}
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 649 "gram.y"
    {}
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 650 "gram.y"
    {}
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 654 "gram.y"
    {}
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 655 "gram.y"
    {}
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 659 "gram.y"
    {}
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 660 "gram.y"
    {}
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 661 "gram.y"
    {}
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 665 "gram.y"
    {}
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 669 "gram.y"
    {}
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 673 "gram.y"
    {}
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 677 "gram.y"
    {}
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 678 "gram.y"
    {}
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 682 "gram.y"
    {}
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 686 "gram.y"
    {}
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 690 "gram.y"
    {}
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 694 "gram.y"
    {}
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 695 "gram.y"
    {}
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 699 "gram.y"
    {}
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 700 "gram.y"
    {}
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 704 "gram.y"
    {}
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 705 "gram.y"
    {}
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 709 "gram.y"
    {}
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 710 "gram.y"
    {}
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 711 "gram.y"
    {}
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 712 "gram.y"
    {}
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 716 "gram.y"
    {}
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 720 "gram.y"
    {}
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 721 "gram.y"
    {}
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 725 "gram.y"
    {}
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 729 "gram.y"
    {}
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 730 "gram.y"
    {}
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 734 "gram.y"
    {}
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 738 "gram.y"
    {}
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 739 "gram.y"
    {}
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 743 "gram.y"
    {}
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 747 "gram.y"
    {}
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 748 "gram.y"
    {}
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 752 "gram.y"
    {}
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 753 "gram.y"
    {}
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 757 "gram.y"
    {}
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 761 "gram.y"
    {}
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 762 "gram.y"
    {}
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 766 "gram.y"
    {}
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 767 "gram.y"
    {}
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 768 "gram.y"
    {}
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 772 "gram.y"
    {}
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 776 "gram.y"
    {}
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 780 "gram.y"
    {}
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 784 "gram.y"
    {}
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 785 "gram.y"
    {}
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 789 "gram.y"
    {}
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 790 "gram.y"
    {}
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 791 "gram.y"
    {}
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 792 "gram.y"
    {}
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 793 "gram.y"
    {}
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 797 "gram.y"
    {}
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 801 "gram.y"
    {}
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 807 "gram.y"
    {}
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 808 "gram.y"
    { (yyval.y_exprlist) = expr_list_reverse((yyvsp[(2) - (3)].y_exprlist)); }
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 812 "gram.y"
    { }
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 813 "gram.y"
    { }
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 817 "gram.y"
    {}
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 823 "gram.y"
    {}
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 827 "gram.y"
    {}
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 828 "gram.y"
    {}
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 829 "gram.y"
    {}
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 833 "gram.y"
    {}
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 834 "gram.y"
    {}
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 838 "gram.y"
    {}
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 839 "gram.y"
    {}
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 840 "gram.y"
    {}
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 841 "gram.y"
    {}
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 842 "gram.y"
    {}
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 843 "gram.y"
    {}
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 844 "gram.y"
    {}
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 845 "gram.y"
    {}
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 846 "gram.y"
    {}
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 847 "gram.y"
    {}
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 851 "gram.y"
    {}
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 852 "gram.y"
    {}
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 856 "gram.y"
    {}
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 857 "gram.y"
    {}
    break;

  case 274:

/* Line 1806 of yacc.c  */
#line 861 "gram.y"
    {}
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 862 "gram.y"
    {}
    break;

  case 276:

/* Line 1806 of yacc.c  */
#line 863 "gram.y"
    {}
    break;

  case 277:

/* Line 1806 of yacc.c  */
#line 868 "gram.y"
    {}
    break;

  case 278:

/* Line 1806 of yacc.c  */
#line 869 "gram.y"
    {}
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 870 "gram.y"
    {}
    break;

  case 280:

/* Line 1806 of yacc.c  */
#line 871 "gram.y"
    {}
    break;

  case 281:

/* Line 1806 of yacc.c  */
#line 872 "gram.y"
    {}
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 873 "gram.y"
    {}
    break;

  case 283:

/* Line 1806 of yacc.c  */
#line 874 "gram.y"
    {}
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 875 "gram.y"
    {}
    break;

  case 285:

/* Line 1806 of yacc.c  */
#line 879 "gram.y"
    {}
    break;

  case 286:

/* Line 1806 of yacc.c  */
#line 880 "gram.y"
    {}
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 881 "gram.y"
    {}
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 882 "gram.y"
    {}
    break;

  case 289:

/* Line 1806 of yacc.c  */
#line 883 "gram.y"
    {}
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 884 "gram.y"
    {}
    break;

  case 291:

/* Line 1806 of yacc.c  */
#line 885 "gram.y"
    {}
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 886 "gram.y"
    {}
    break;

  case 293:

/* Line 1806 of yacc.c  */
#line 887 "gram.y"
    {}
    break;

  case 294:

/* Line 1806 of yacc.c  */
#line 888 "gram.y"
    {}
    break;

  case 295:

/* Line 1806 of yacc.c  */
#line 889 "gram.y"
    {}
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 890 "gram.y"
    {}
    break;

  case 297:

/* Line 1806 of yacc.c  */
#line 891 "gram.y"
    {}
    break;

  case 298:

/* Line 1806 of yacc.c  */
#line 892 "gram.y"
    {}
    break;

  case 299:

/* Line 1806 of yacc.c  */
#line 893 "gram.y"
    {}
    break;

  case 300:

/* Line 1806 of yacc.c  */
#line 894 "gram.y"
    {}
    break;

  case 301:

/* Line 1806 of yacc.c  */
#line 895 "gram.y"
    {}
    break;

  case 302:

/* Line 1806 of yacc.c  */
#line 899 "gram.y"
    {}
    break;

  case 303:

/* Line 1806 of yacc.c  */
#line 900 "gram.y"
    {}
    break;

  case 304:

/* Line 1806 of yacc.c  */
#line 901 "gram.y"
    {}
    break;

  case 305:

/* Line 1806 of yacc.c  */
#line 905 "gram.y"
    {}
    break;

  case 306:

/* Line 1806 of yacc.c  */
#line 906 "gram.y"
    {}
    break;

  case 307:

/* Line 1806 of yacc.c  */
#line 907 "gram.y"
    {}
    break;

  case 308:

/* Line 1806 of yacc.c  */
#line 908 "gram.y"
    {}
    break;

  case 309:

/* Line 1806 of yacc.c  */
#line 912 "gram.y"
    {}
    break;

  case 310:

/* Line 1806 of yacc.c  */
#line 916 "gram.y"
    {}
    break;

  case 311:

/* Line 1806 of yacc.c  */
#line 920 "gram.y"
    {}
    break;

  case 312:

/* Line 1806 of yacc.c  */
#line 921 "gram.y"
    {}
    break;

  case 313:

/* Line 1806 of yacc.c  */
#line 925 "gram.y"
    {}
    break;

  case 314:

/* Line 1806 of yacc.c  */
#line 926 "gram.y"
    {}
    break;

  case 315:

/* Line 1806 of yacc.c  */
#line 930 "gram.y"
    {}
    break;

  case 316:

/* Line 1806 of yacc.c  */
#line 931 "gram.y"
    {}
    break;

  case 317:

/* Line 1806 of yacc.c  */
#line 937 "gram.y"
    {}
    break;

  case 318:

/* Line 1806 of yacc.c  */
#line 941 "gram.y"
    {}
    break;

  case 319:

/* Line 1806 of yacc.c  */
#line 945 "gram.y"
    {}
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 946 "gram.y"
    {}
    break;

  case 321:

/* Line 1806 of yacc.c  */
#line 947 "gram.y"
    {}
    break;

  case 322:

/* Line 1806 of yacc.c  */
#line 951 "gram.y"
    {}
    break;

  case 323:

/* Line 1806 of yacc.c  */
#line 952 "gram.y"
    {}
    break;

  case 324:

/* Line 1806 of yacc.c  */
#line 953 "gram.y"
    {}
    break;

  case 325:

/* Line 1806 of yacc.c  */
#line 954 "gram.y"
    {}
    break;

  case 326:

/* Line 1806 of yacc.c  */
#line 955 "gram.y"
    {}
    break;

  case 327:

/* Line 1806 of yacc.c  */
#line 959 "gram.y"
    {}
    break;

  case 328:

/* Line 1806 of yacc.c  */
#line 960 "gram.y"
    {}
    break;

  case 329:

/* Line 1806 of yacc.c  */
#line 961 "gram.y"
    {}
    break;

  case 330:

/* Line 1806 of yacc.c  */
#line 965 "gram.y"
    {}
    break;

  case 331:

/* Line 1806 of yacc.c  */
#line 966 "gram.y"
    {}
    break;

  case 332:

/* Line 1806 of yacc.c  */
#line 970 "gram.y"
    {}
    break;

  case 333:

/* Line 1806 of yacc.c  */
#line 971 "gram.y"
    {}
    break;

  case 334:

/* Line 1806 of yacc.c  */
#line 972 "gram.y"
    {}
    break;

  case 335:

/* Line 1806 of yacc.c  */
#line 973 "gram.y"
    {}
    break;

  case 336:

/* Line 1806 of yacc.c  */
#line 977 "gram.y"
    {}
    break;

  case 337:

/* Line 1806 of yacc.c  */
#line 978 "gram.y"
    {}
    break;

  case 338:

/* Line 1806 of yacc.c  */
#line 982 "gram.y"
    {}
    break;

  case 339:

/* Line 1806 of yacc.c  */
#line 983 "gram.y"
    {}
    break;

  case 340:

/* Line 1806 of yacc.c  */
#line 984 "gram.y"
    {}
    break;

  case 341:

/* Line 1806 of yacc.c  */
#line 985 "gram.y"
    {}
    break;

  case 342:

/* Line 1806 of yacc.c  */
#line 986 "gram.y"
    {}
    break;

  case 343:

/* Line 1806 of yacc.c  */
#line 987 "gram.y"
    {}
    break;

  case 344:

/* Line 1806 of yacc.c  */
#line 991 "gram.y"
    {}
    break;

  case 345:

/* Line 1806 of yacc.c  */
#line 995 "gram.y"
    {}
    break;

  case 346:

/* Line 1806 of yacc.c  */
#line 996 "gram.y"
    {}
    break;

  case 347:

/* Line 1806 of yacc.c  */
#line 1000 "gram.y"
    {}
    break;

  case 348:

/* Line 1806 of yacc.c  */
#line 1001 "gram.y"
    {}
    break;

  case 349:

/* Line 1806 of yacc.c  */
#line 1005 "gram.y"
    {}
    break;

  case 350:

/* Line 1806 of yacc.c  */
#line 1006 "gram.y"
    {}
    break;

  case 351:

/* Line 1806 of yacc.c  */
#line 1010 "gram.y"
    {}
    break;

  case 352:

/* Line 1806 of yacc.c  */
#line 1011 "gram.y"
    {}
    break;

  case 353:

/* Line 1806 of yacc.c  */
#line 1012 "gram.y"
    {}
    break;

  case 354:

/* Line 1806 of yacc.c  */
#line 1013 "gram.y"
    {}
    break;

  case 355:

/* Line 1806 of yacc.c  */
#line 1014 "gram.y"
    {}
    break;

  case 356:

/* Line 1806 of yacc.c  */
#line 1015 "gram.y"
    {}
    break;

  case 357:

/* Line 1806 of yacc.c  */
#line 1016 "gram.y"
    {}
    break;

  case 358:

/* Line 1806 of yacc.c  */
#line 1017 "gram.y"
    {}
    break;

  case 359:

/* Line 1806 of yacc.c  */
#line 1021 "gram.y"
    {}
    break;

  case 360:

/* Line 1806 of yacc.c  */
#line 1022 "gram.y"
    {}
    break;

  case 361:

/* Line 1806 of yacc.c  */
#line 1026 "gram.y"
    {}
    break;

  case 362:

/* Line 1806 of yacc.c  */
#line 1027 "gram.y"
    {}
    break;

  case 363:

/* Line 1806 of yacc.c  */
#line 1031 "gram.y"
    {}
    break;

  case 364:

/* Line 1806 of yacc.c  */
#line 1032 "gram.y"
    {}
    break;

  case 365:

/* Line 1806 of yacc.c  */
#line 1036 "gram.y"
    {}
    break;

  case 366:

/* Line 1806 of yacc.c  */
#line 1037 "gram.y"
    {}
    break;

  case 367:

/* Line 1806 of yacc.c  */
#line 1038 "gram.y"
    {}
    break;

  case 368:

/* Line 1806 of yacc.c  */
#line 1042 "gram.y"
    {}
    break;

  case 369:

/* Line 1806 of yacc.c  */
#line 1043 "gram.y"
    {}
    break;

  case 370:

/* Line 1806 of yacc.c  */
#line 1047 "gram.y"
    { (yyval.y_nullop) = UN_EOF_OP; }
    break;

  case 371:

/* Line 1806 of yacc.c  */
#line 1048 "gram.y"
    { (yyval.y_nullop) = UN_EOLN_OP; }
    break;

  case 372:

/* Line 1806 of yacc.c  */
#line 1052 "gram.y"
    { (yyval.y_unop) = ABS_OP; }
    break;

  case 373:

/* Line 1806 of yacc.c  */
#line 1053 "gram.y"
    { (yyval.y_unop) = SQR_OP; }
    break;

  case 374:

/* Line 1806 of yacc.c  */
#line 1054 "gram.y"
    { (yyval.y_unop) = SIN_OP; }
    break;

  case 375:

/* Line 1806 of yacc.c  */
#line 1055 "gram.y"
    { (yyval.y_unop) = COS_OP; }
    break;

  case 376:

/* Line 1806 of yacc.c  */
#line 1056 "gram.y"
    { (yyval.y_unop) = EXP_OP; }
    break;

  case 377:

/* Line 1806 of yacc.c  */
#line 1057 "gram.y"
    { (yyval.y_unop) = LN_OP; }
    break;

  case 378:

/* Line 1806 of yacc.c  */
#line 1058 "gram.y"
    { (yyval.y_unop) = SQRT_OP; }
    break;

  case 379:

/* Line 1806 of yacc.c  */
#line 1059 "gram.y"
    { (yyval.y_unop) = ARCTAN_OP; }
    break;

  case 380:

/* Line 1806 of yacc.c  */
#line 1060 "gram.y"
    { (yyval.y_unop) = ARG_OP; }
    break;

  case 381:

/* Line 1806 of yacc.c  */
#line 1061 "gram.y"
    { (yyval.y_unop) = TRUNC_OP; }
    break;

  case 382:

/* Line 1806 of yacc.c  */
#line 1062 "gram.y"
    { (yyval.y_unop) = ROUND_OP; }
    break;

  case 383:

/* Line 1806 of yacc.c  */
#line 1063 "gram.y"
    { (yyval.y_unop) = CARD_OP; }
    break;

  case 384:

/* Line 1806 of yacc.c  */
#line 1064 "gram.y"
    { (yyval.y_unop) = ORD_OP; }
    break;

  case 385:

/* Line 1806 of yacc.c  */
#line 1065 "gram.y"
    { (yyval.y_unop) = CHR_OP; }
    break;

  case 386:

/* Line 1806 of yacc.c  */
#line 1066 "gram.y"
    { (yyval.y_unop) = ODD_OP; }
    break;

  case 387:

/* Line 1806 of yacc.c  */
#line 1067 "gram.y"
    { (yyval.y_unop) = EMPTY_OP; }
    break;

  case 388:

/* Line 1806 of yacc.c  */
#line 1068 "gram.y"
    { (yyval.y_unop) = POSITION_OP; }
    break;

  case 389:

/* Line 1806 of yacc.c  */
#line 1069 "gram.y"
    { (yyval.y_unop) = LASTPOSITION_OP; }
    break;

  case 390:

/* Line 1806 of yacc.c  */
#line 1070 "gram.y"
    { (yyval.y_unop) = LENGTH_OP; }
    break;

  case 391:

/* Line 1806 of yacc.c  */
#line 1071 "gram.y"
    { (yyval.y_unop) = TRIM_OP; }
    break;

  case 392:

/* Line 1806 of yacc.c  */
#line 1072 "gram.y"
    { (yyval.y_unop) = BINDING_OP; }
    break;

  case 393:

/* Line 1806 of yacc.c  */
#line 1073 "gram.y"
    { (yyval.y_unop) = DATE_OP; }
    break;

  case 394:

/* Line 1806 of yacc.c  */
#line 1074 "gram.y"
    { (yyval.y_unop) = TIME_OP; }
    break;

  case 395:

/* Line 1806 of yacc.c  */
#line 1078 "gram.y"
    { (yyval.y_unop) = UN_SUCC_OP; }
    break;

  case 396:

/* Line 1806 of yacc.c  */
#line 1079 "gram.y"
    { (yyval.y_unop) = UN_PRED_OP; }
    break;

  case 397:

/* Line 1806 of yacc.c  */
#line 1083 "gram.y"
    { (yyval.y_binop) = NE_OP;        }
    break;

  case 398:

/* Line 1806 of yacc.c  */
#line 1084 "gram.y"
    { (yyval.y_binop) = LE_OP;        }
    break;

  case 399:

/* Line 1806 of yacc.c  */
#line 1085 "gram.y"
    { (yyval.y_binop) = GE_OP;        }
    break;

  case 400:

/* Line 1806 of yacc.c  */
#line 1086 "gram.y"
    { (yyval.y_binop) = EQ_OP;        }
    break;

  case 401:

/* Line 1806 of yacc.c  */
#line 1087 "gram.y"
    { (yyval.y_binop) = LESS_OP;      }
    break;

  case 402:

/* Line 1806 of yacc.c  */
#line 1088 "gram.y"
    { (yyval.y_binop) = GREATER_OP;   }
    break;

  case 403:

/* Line 1806 of yacc.c  */
#line 1092 "gram.y"
    { (yyval.y_binop) = DIV_OP;     }
    break;

  case 404:

/* Line 1806 of yacc.c  */
#line 1093 "gram.y"
    { (yyval.y_binop) = MOD_OP;     }
    break;

  case 405:

/* Line 1806 of yacc.c  */
#line 1094 "gram.y"
    { (yyval.y_binop) = REALDIV_OP; }
    break;

  case 406:

/* Line 1806 of yacc.c  */
#line 1095 "gram.y"
    { (yyval.y_binop) = MUL_OP;     }
    break;

  case 407:

/* Line 1806 of yacc.c  */
#line 1099 "gram.y"
    { (yyval.y_binop) = SUB_OP; }
    break;

  case 408:

/* Line 1806 of yacc.c  */
#line 1100 "gram.y"
    { (yyval.y_binop) = ADD_OP; }
    break;

  case 409:

/* Line 1806 of yacc.c  */
#line 1104 "gram.y"
    {}
    break;

  case 410:

/* Line 1806 of yacc.c  */
#line 1108 "gram.y"
    {}
    break;

  case 411:

/* Line 1806 of yacc.c  */
#line 1109 "gram.y"
    {}
    break;

  case 412:

/* Line 1806 of yacc.c  */
#line 1113 "gram.y"
    {}
    break;

  case 413:

/* Line 1806 of yacc.c  */
#line 1114 "gram.y"
    {}
    break;

  case 414:

/* Line 1806 of yacc.c  */
#line 1118 "gram.y"
    {}
    break;

  case 415:

/* Line 1806 of yacc.c  */
#line 1119 "gram.y"
    {}
    break;

  case 416:

/* Line 1806 of yacc.c  */
#line 1123 "gram.y"
    {}
    break;

  case 417:

/* Line 1806 of yacc.c  */
#line 1124 "gram.y"
    {}
    break;

  case 418:

/* Line 1806 of yacc.c  */
#line 1128 "gram.y"
    {}
    break;

  case 419:

/* Line 1806 of yacc.c  */
#line 1129 "gram.y"
    {}
    break;

  case 420:

/* Line 1806 of yacc.c  */
#line 1133 "gram.y"
    {}
    break;

  case 421:

/* Line 1806 of yacc.c  */
#line 1137 "gram.y"
    {}
    break;

  case 422:

/* Line 1806 of yacc.c  */
#line 1138 "gram.y"
    {}
    break;

  case 423:

/* Line 1806 of yacc.c  */
#line 1142 "gram.y"
    {}
    break;

  case 424:

/* Line 1806 of yacc.c  */
#line 1143 "gram.y"
    {}
    break;

  case 425:

/* Line 1806 of yacc.c  */
#line 1144 "gram.y"
    {}
    break;

  case 426:

/* Line 1806 of yacc.c  */
#line 1148 "gram.y"
    {}
    break;

  case 427:

/* Line 1806 of yacc.c  */
#line 1149 "gram.y"
    {}
    break;

  case 428:

/* Line 1806 of yacc.c  */
#line 1153 "gram.y"
    {}
    break;

  case 429:

/* Line 1806 of yacc.c  */
#line 1154 "gram.y"
    {}
    break;

  case 430:

/* Line 1806 of yacc.c  */
#line 1158 "gram.y"
    {}
    break;



/* Line 1806 of yacc.c  */
#line 5538 "y.tab.c"
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 1161 "gram.y"


void yyerror(const char *msg)
{
    error(msg);
}

/* Sets the value of the 'yydebug' variable to VALUE.
   This is a function so we don't have to have YYDEBUG defined
   in order to build the compiler.  */
void
set_yydebug (int value)
{
#if YYDEBUG != 0
  yydebug = value;
#else
  warning ("YYDEBUG not defined.");
#endif
}

