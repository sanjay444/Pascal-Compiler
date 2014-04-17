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

/* Function stack variables */
ST_ID func_id_stack[BS_DEPTH];
int fi_top = -1;

/* Base offset stack */
int base_offset_stack[BS_DEPTH];
int bo_top = -1;

/* Like YYERROR but do call yyerror */
#define YYERROR1 { yyerror ("syntax error"); YYERROR; }


/* Line 268 of yacc.c  */
#line 94 "y.tab.c"

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
#line 73 "gram.y"

    char        *y_string;
    long         y_int;
    int          y_cint;
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
#line 537 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 549 "y.tab.c"

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
#define YYLAST   2248

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  210
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  172
/* YYNRULES -- Number of rules.  */
#define YYNRULES  433
/* YYNRULES -- Number of states.  */
#define YYNSTATES  698

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
       0,     0,     3,     4,     6,     8,    11,    14,    15,    21,
      25,    26,    30,    32,    36,    38,    40,    42,    44,    46,
      48,    50,    52,    54,    56,    58,    60,    62,    64,    66,
      68,    70,    72,    74,    76,    78,    80,    82,    84,    86,
      88,    90,    92,    94,    96,    98,   100,   102,   104,   106,
     108,   110,   112,   114,   116,   118,   120,   122,   124,   126,
     128,   130,   132,   133,   136,   138,   140,   141,   144,   146,
     148,   150,   152,   154,   156,   160,   162,   166,   168,   170,
     173,   175,   178,   183,   185,   188,   190,   192,   195,   197,
     199,   201,   203,   205,   207,   209,   211,   213,   215,   217,
     219,   222,   226,   228,   232,   236,   238,   240,   242,   244,
     246,   248,   250,   252,   256,   258,   262,   264,   268,   271,
     273,   275,   277,   279,   282,   286,   287,   291,   293,   297,
     299,   303,   308,   311,   314,   316,   318,   320,   322,   324,
     331,   333,   337,   339,   341,   346,   347,   351,   355,   359,
     360,   363,   367,   369,   371,   375,   379,   385,   387,   393,
     397,   399,   401,   403,   405,   409,   415,   417,   421,   423,
     427,   430,   432,   435,   440,   445,   446,   447,   455,   459,
     464,   466,   470,   472,   474,   475,   478,   479,   483,   485,
     489,   493,   498,   500,   504,   509,   511,   513,   515,   517,
     519,   521,   523,   531,   538,   544,   546,   550,   554,   556,
     560,   562,   566,   570,   572,   574,   576,   578,   580,   582,
     584,   589,   591,   595,   597,   599,   601,   606,   610,   612,
     619,   621,   624,   626,   630,   634,   636,   639,   641,   643,
     645,   650,   655,   664,   666,   668,   670,   672,   674,   676,
     678,   679,   682,   683,   687,   689,   693,   695,   698,   700,
     703,   705,   706,   709,   714,   719,   722,   725,   728,   731,
     734,   739,   744,   751,   752,   756,   758,   762,   764,   768,
     774,   776,   778,   780,   782,   784,   786,   788,   790,   792,
     794,   796,   798,   800,   802,   804,   806,   808,   810,   812,
     814,   816,   818,   820,   822,   824,   826,   828,   830,   832,
     835,   837,   839,   841,   843,   845,   847,   849,   853,   855,
     859,   861,   863,   867,   871,   873,   875,   879,   883,   887,
     891,   893,   897,   901,   903,   906,   908,   912,   916,   920,
     922,   925,   927,   929,   931,   933,   936,   939,   941,   943,
     947,   949,   951,   953,   955,   957,   959,   963,   967,   970,
     975,   980,   985,   988,   992,   994,   998,  1000,  1004,  1009,
    1012,  1017,  1018,  1022,  1024,  1026,  1028,  1030,  1032,  1034,
    1036,  1038,  1040,  1042,  1044,  1046,  1048,  1050,  1052,  1054,
    1056,  1058,  1060,  1062,  1064,  1066,  1068,  1070,  1072,  1074,
    1076,  1078,  1080,  1082,  1084,  1086,  1088,  1090,  1092,  1094,
    1096,  1098,  1100,  1102,  1103,  1105,  1106,  1109,  1113,  1117,
    1119,  1123,  1125,  1129,  1134,  1135,  1137,  1138,  1142,  1147,
    1148,  1151,  1153,  1157
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     211,     0,    -1,    -1,   212,    -1,   213,    -1,   212,   213,
      -1,   214,   200,    -1,    -1,   216,   370,   223,   215,   301,
      -1,    21,   221,   217,    -1,    -1,   201,   218,   202,    -1,
     221,    -1,   218,   203,   221,    -1,     3,    -1,     3,    -1,
     222,    -1,     3,    -1,   108,    -1,   110,    -1,   109,    -1,
      76,    -1,    77,    -1,    78,    -1,    79,    -1,    80,    -1,
      81,    -1,    82,    -1,    83,    -1,    84,    -1,    85,    -1,
      86,    -1,   106,    -1,   107,    -1,    87,    -1,    88,    -1,
      89,    -1,    90,    -1,    91,    -1,    92,    -1,    93,    -1,
      94,    -1,    95,    -1,    96,    -1,    97,    -1,    98,    -1,
      99,    -1,   100,    -1,   101,    -1,   102,    -1,   103,    -1,
     104,    -1,   105,    -1,   113,    -1,   114,    -1,   115,    -1,
     116,    -1,   117,    -1,   118,    -1,   122,    -1,   123,    -1,
     224,    -1,    -1,   224,   225,    -1,   373,    -1,   227,    -1,
      -1,   226,   227,    -1,   228,    -1,   283,    -1,   229,    -1,
     232,    -1,   243,    -1,   280,    -1,    16,   230,   370,    -1,
     231,    -1,   230,   203,   231,    -1,   129,    -1,   221,    -1,
       7,   233,    -1,   234,    -1,   233,   234,    -1,   221,   136,
     345,   370,    -1,   220,    -1,   238,   220,    -1,   236,    -1,
     239,    -1,   238,   237,    -1,   237,    -1,   129,    -1,   131,
      -1,   143,    -1,   142,    -1,   241,    -1,   240,    -1,    17,
      -1,   110,    -1,   109,    -1,   242,    -1,   130,    -1,   242,
     130,    -1,    27,   244,   370,    -1,   245,    -1,   244,   370,
     245,    -1,   221,   136,   246,    -1,   219,    -1,   247,    -1,
     248,    -1,   253,    -1,   256,    -1,   260,    -1,   249,    -1,
     252,    -1,   201,   250,   202,    -1,   251,    -1,   250,   203,
     251,    -1,   221,    -1,   235,   132,   235,    -1,   254,   255,
      -1,   204,    -1,   205,    -1,   221,    -1,   256,    -1,    20,
     257,    -1,    13,   257,   289,    -1,    -1,   201,   258,   202,
      -1,   259,    -1,   258,   370,   259,    -1,   218,    -1,   218,
     206,   219,    -1,    29,   218,   206,   219,    -1,    29,   218,
      -1,    19,   261,    -1,   261,    -1,   262,    -1,   265,    -1,
     267,    -1,   268,    -1,     4,   207,   263,   208,    18,   246,
      -1,   264,    -1,   263,   203,   264,    -1,   248,    -1,   219,
      -1,    11,   266,    18,   246,    -1,    -1,   207,   264,   208,
      -1,    24,    18,   246,    -1,    22,   269,    10,    -1,    -1,
     270,   371,    -1,   270,   370,   272,    -1,   272,    -1,   271,
      -1,   270,   370,   271,    -1,   218,   206,   246,    -1,     6,
     274,    18,   276,   273,    -1,   371,    -1,   317,   201,   269,
     202,   371,    -1,   221,   206,   275,    -1,   275,    -1,   219,
      -1,   248,    -1,   277,    -1,   276,   370,   277,    -1,   278,
     206,   201,   269,   202,    -1,   279,    -1,   278,   203,   279,
      -1,   345,    -1,   345,   132,   345,    -1,    29,   281,    -1,
     282,    -1,   281,   282,    -1,   218,   206,   246,   370,    -1,
     286,   370,   287,   370,    -1,    -1,    -1,   286,   370,   284,
     226,   285,   301,   370,    -1,    20,   221,   290,    -1,    13,
     221,   290,   289,    -1,   288,    -1,   287,   370,   288,    -1,
      32,    -1,   168,    -1,    -1,   206,   219,    -1,    -1,   201,
     291,   202,    -1,   292,    -1,   291,   370,   292,    -1,   218,
     206,   293,    -1,    29,   218,   206,   293,    -1,   286,    -1,
     218,   206,   294,    -1,    29,   218,   206,   294,    -1,   219,
      -1,   300,    -1,   296,    -1,   297,    -1,   219,    -1,   296,
      -1,   297,    -1,    19,     4,   207,   298,   208,    18,   295,
      -1,     4,   207,   299,   208,    18,   295,    -1,   221,   132,
     221,   206,   219,    -1,   298,    -1,   299,   370,   298,    -1,
       4,    18,   219,    -1,   302,    -1,     5,   303,    10,    -1,
     304,    -1,   303,   370,   304,    -1,   231,   206,   305,    -1,
     305,    -1,   306,    -1,   323,    -1,   302,    -1,   307,    -1,
     310,    -1,   318,    -1,    31,   308,     8,   304,    -1,   309,
      -1,   308,   203,   309,    -1,   355,    -1,   312,    -1,   313,
      -1,    15,   346,    25,   304,    -1,   311,   198,   304,    -1,
     311,    -1,     6,   347,    18,   315,   314,    10,    -1,   371,
      -1,   317,   303,    -1,   316,    -1,   315,   370,   316,    -1,
     278,   206,   304,    -1,   198,    -1,   370,   198,    -1,   319,
      -1,   320,    -1,   321,    -1,    23,   303,    28,   346,    -1,
      30,   346,     8,   304,    -1,    12,   355,   134,   347,   322,
     347,     8,   304,    -1,    26,    -1,     9,    -1,   324,    -1,
     325,    -1,   329,    -1,   332,    -1,   338,    -1,    -1,    14,
     231,    -1,    -1,   201,   327,   202,    -1,   328,    -1,   327,
     203,   328,    -1,   347,    -1,   330,   331,    -1,   220,    -1,
     354,   355,    -1,   358,    -1,    -1,   134,   347,    -1,   336,
     201,   328,   202,    -1,   337,   201,   327,   202,    -1,    82,
     333,    -1,    84,   333,    -1,    83,   326,    -1,    85,   326,
      -1,    86,   326,    -1,   169,   201,   334,   202,    -1,    88,
     201,   328,   202,    -1,    88,   201,   328,   203,   327,   202,
      -1,    -1,   201,   334,   202,    -1,   335,    -1,   334,   203,
     335,    -1,   328,    -1,   328,   206,   347,    -1,   328,   206,
     347,   206,   347,    -1,    80,    -1,    81,    -1,   170,    -1,
     171,    -1,   119,    -1,   172,    -1,   173,    -1,   174,    -1,
      78,    -1,    79,    -1,   175,    -1,   176,    -1,    99,    -1,
     100,    -1,   177,    -1,   178,    -1,   179,    -1,   180,    -1,
     121,    -1,   154,    -1,   144,    -1,   167,    -1,   158,    -1,
     156,    -1,   157,    -1,   339,    -1,   341,    -1,   340,    -1,
     115,    -1,   115,   347,    -1,   117,    -1,   118,    -1,   113,
      -1,   114,    -1,   358,    -1,     3,    -1,   344,    -1,   343,
     203,   344,    -1,   347,    -1,   347,   132,   347,    -1,   347,
      -1,   347,    -1,   347,   367,   348,    -1,   347,   138,   348,
      -1,   348,    -1,   349,    -1,   348,   369,   349,    -1,   348,
     181,   349,    -1,   348,   144,   349,    -1,   348,   158,   349,
      -1,   350,    -1,   349,   368,   350,    -1,   349,   154,   350,
      -1,   351,    -1,   238,   350,    -1,   353,    -1,   351,   163,
     353,    -1,   351,   164,   353,    -1,   351,   165,   219,    -1,
     353,    -1,   238,   352,    -1,   355,    -1,   239,    -1,   237,
      -1,   359,    -1,   167,   352,    -1,   354,   353,    -1,   205,
      -1,   356,    -1,   355,   166,   219,    -1,   357,    -1,   362,
      -1,   220,    -1,   358,    -1,    77,    -1,    76,    -1,   356,
     200,   221,    -1,   201,   347,   202,    -1,   355,   254,    -1,
     355,   207,   343,   208,    -1,   357,   201,   327,   202,    -1,
      87,   201,   342,   202,    -1,   207,   208,    -1,   207,   360,
     208,    -1,   361,    -1,   360,   203,   361,    -1,   347,    -1,
     347,   132,   347,    -1,   365,   201,   328,   202,    -1,   364,
     363,    -1,   366,   201,   327,   202,    -1,    -1,   201,   328,
     202,    -1,   106,    -1,   107,    -1,    89,    -1,    90,    -1,
      91,    -1,    92,    -1,    93,    -1,    94,    -1,    95,    -1,
      96,    -1,   182,    -1,    97,    -1,    98,    -1,   183,    -1,
     101,    -1,   102,    -1,   105,    -1,   184,    -1,   185,    -1,
     186,    -1,   187,    -1,   188,    -1,   189,    -1,   190,    -1,
     191,    -1,   103,    -1,   104,    -1,   139,    -1,   141,    -1,
     140,    -1,   136,    -1,   135,    -1,   137,    -1,   152,    -1,
     153,    -1,   150,    -1,   151,    -1,   142,    -1,   143,    -1,
     209,    -1,    -1,   209,    -1,    -1,   192,   221,    -1,   193,
     374,   370,    -1,   194,   375,   370,    -1,   376,    -1,   374,
     370,   376,    -1,   376,    -1,   375,   203,   376,    -1,   221,
     377,   378,   379,    -1,    -1,   195,    -1,    -1,   201,   380,
     202,    -1,   196,   201,   380,   202,    -1,    -1,   138,   241,
      -1,   381,    -1,   380,   203,   381,    -1,   221,   372,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   208,   208,   209,   213,   214,   218,   222,   222,   227,
     231,   232,   236,   237,   241,   245,   249,   253,   255,   256,
     257,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   273,   274,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   287,   288,   290,   291,
     292,   293,   294,   296,   297,   298,   299,   300,   301,   302,
     303,   307,   311,   312,   316,   317,   321,   322,   326,   327,
     331,   332,   333,   334,   340,   344,   345,   350,   351,   357,
     361,   362,   366,   370,   371,   372,   373,   377,   378,   382,
     383,   387,   388,   392,   393,   397,   398,   399,   403,   407,
     408,   412,   416,   417,   421,   424,   425,   429,   430,   431,
     432,   436,   437,   441,   445,   446,   450,   454,   459,   463,
     464,   468,   469,   473,   474,   478,   479,   483,   484,   488,
     489,   490,   491,   496,   497,   501,   502,   503,   504,   510,
     514,   515,   520,   521,   526,   530,   531,   537,   541,   545,
     546,   547,   548,   552,   553,   557,   561,   565,   566,   570,
     571,   575,   576,   580,   581,   585,   589,   590,   594,   595,
     601,   605,   606,   610,   615,   616,   617,   616,   622,   623,
     627,   628,   632,   633,   637,   638,   644,   645,   649,   650,
     654,   655,   656,   657,   658,   662,   663,   667,   668,   672,
     673,   674,   678,   682,   686,   690,   691,   695,   699,   703,
     707,   708,   712,   713,   717,   718,   722,   723,   724,   725,
     729,   733,   734,   738,   742,   743,   747,   751,   752,   756,
     760,   761,   765,   766,   770,   774,   775,   779,   780,   781,
     785,   789,   793,   797,   798,   802,   803,   804,   805,   806,
     810,   814,   820,   821,   825,   826,   830,   836,   840,   841,
     842,   846,   847,   851,   852,   853,   854,   855,   856,   857,
     858,   859,   860,   864,   865,   869,   870,   874,   875,   876,
     881,   882,   883,   884,   885,   886,   887,   888,   892,   893,
     894,   895,   896,   897,   898,   899,   900,   901,   902,   903,
     904,   905,   906,   907,   908,   912,   913,   914,   918,   919,
     920,   921,   925,   929,   933,   934,   938,   939,   943,   944,
     950,   954,   958,   959,   960,   964,   965,   966,   967,   968,
     972,   973,   974,   978,   979,   983,   984,   985,   986,   990,
     991,   995,   999,  1000,  1001,  1002,  1003,  1007,  1011,  1012,
    1016,  1017,  1021,  1022,  1026,  1027,  1028,  1029,  1030,  1031,
    1032,  1033,  1037,  1038,  1042,  1043,  1047,  1048,  1052,  1053,
    1054,  1058,  1059,  1063,  1064,  1068,  1069,  1070,  1071,  1072,
    1073,  1074,  1075,  1076,  1077,  1078,  1079,  1080,  1081,  1082,
    1083,  1084,  1085,  1086,  1087,  1088,  1089,  1090,  1094,  1095,
    1099,  1100,  1101,  1102,  1103,  1104,  1108,  1109,  1110,  1111,
    1115,  1116,  1120,  1124,  1125,  1129,  1130,  1134,  1135,  1139,
    1140,  1144,  1145,  1149,  1153,  1154,  1158,  1159,  1160,  1164,
    1165,  1169,  1170,  1174
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
  "main_program_declaration", "$@1", "program_heading",
  "optional_par_id_list", "id_list", "typename", "identifier",
  "new_identifier", "new_identifier_1", "import_or_any_declaration_part",
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
  "function_declaration", "@2", "$@3", "function_heading",
  "directive_list", "directive", "functiontype",
  "optional_par_formal_parameter_list", "formal_parameter_list",
  "formal_parameter", "parameter_form", "conformant_array_schema",
  "typename_or_conformant_array_schema", "packed_conformant_array_schema",
  "unpacked_conformant_array_schema", "index_type_specification",
  "index_type_specification_list", "open_array", "statement_part",
  "compound_statement", "statement_sequence", "statement",
  "unlabelled_statement", "structured_statement", "with_statement",
  "structured_variable_list", "structured_variable",
  "conditional_statement", "simple_if", "if_statement", "case_statement",
  "optional_semicolon_or_else_branch", "case_element_list", "case_element",
  "case_default", "repetitive_statement", "repeat_statement",
  "while_statement", "for_statement", "for_direction", "simple_statement",
  "empty_statement", "goto_statement",
  "optional_par_actual_parameter_list", "actual_parameter_list",
  "actual_parameter", "assignment_or_call_statement",
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
       0,   210,   211,   211,   212,   212,   213,   215,   214,   216,
     217,   217,   218,   218,   219,   220,   221,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   223,   224,   224,   225,   225,   226,   226,   227,   227,
     228,   228,   228,   228,   229,   230,   230,   231,   231,   232,
     233,   233,   234,   235,   235,   235,   235,   236,   236,   237,
     237,   238,   238,   239,   239,   240,   240,   240,   241,   242,
     242,   243,   244,   244,   245,   246,   246,   247,   247,   247,
     247,   248,   248,   249,   250,   250,   251,   252,   253,   254,
     254,   255,   255,   256,   256,   257,   257,   258,   258,   259,
     259,   259,   259,   260,   260,   261,   261,   261,   261,   262,
     263,   263,   264,   264,   265,   266,   266,   267,   268,   269,
     269,   269,   269,   270,   270,   271,   272,   273,   273,   274,
     274,   275,   275,   276,   276,   277,   278,   278,   279,   279,
     280,   281,   281,   282,   283,   284,   285,   283,   286,   286,
     287,   287,   288,   288,   289,   289,   290,   290,   291,   291,
     292,   292,   292,   292,   292,   293,   293,   294,   294,   295,
     295,   295,   296,   297,   298,   299,   299,   300,   301,   302,
     303,   303,   304,   304,   305,   305,   306,   306,   306,   306,
     307,   308,   308,   309,   310,   310,   311,   312,   312,   313,
     314,   314,   315,   315,   316,   317,   317,   318,   318,   318,
     319,   320,   321,   322,   322,   323,   323,   323,   323,   323,
     324,   325,   326,   326,   327,   327,   328,   329,   330,   330,
     330,   331,   331,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   333,   333,   334,   334,   335,   335,   335,
     336,   336,   336,   336,   336,   336,   336,   336,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   337,   337,   337,   338,   338,   338,   339,   339,
     339,   339,   340,   341,   342,   342,   343,   343,   344,   344,
     345,   346,   347,   347,   347,   348,   348,   348,   348,   348,
     349,   349,   349,   350,   350,   351,   351,   351,   351,   352,
     352,   353,   353,   353,   353,   353,   353,   354,   355,   355,
     356,   356,   357,   357,   358,   358,   358,   358,   358,   358,
     358,   358,   359,   359,   360,   360,   361,   361,   362,   362,
     362,   363,   363,   364,   364,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   366,   366,
     367,   367,   367,   367,   367,   367,   368,   368,   368,   368,
     369,   369,   370,   371,   371,   372,   372,   373,   373,   374,
     374,   375,   375,   376,   377,   377,   378,   378,   378,   379,
     379,   380,   380,   381
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     2,     0,     5,     3,
       0,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     1,     1,     2,
       1,     2,     4,     1,     2,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     1,     3,     2,     1,
       1,     1,     1,     2,     3,     0,     3,     1,     3,     1,
       3,     4,     2,     2,     1,     1,     1,     1,     1,     6,
       1,     3,     1,     1,     4,     0,     3,     3,     3,     0,
       2,     3,     1,     1,     3,     3,     5,     1,     5,     3,
       1,     1,     1,     1,     3,     5,     1,     3,     1,     3,
       2,     1,     2,     4,     4,     0,     0,     7,     3,     4,
       1,     3,     1,     1,     0,     2,     0,     3,     1,     3,
       3,     4,     1,     3,     4,     1,     1,     1,     1,     1,
       1,     1,     7,     6,     5,     1,     3,     3,     1,     3,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     3,     1,     1,     1,     4,     3,     1,     6,
       1,     2,     1,     3,     3,     1,     2,     1,     1,     1,
       4,     4,     8,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     0,     3,     1,     3,     1,     2,     1,     2,
       1,     0,     2,     4,     4,     2,     2,     2,     2,     2,
       4,     4,     6,     0,     3,     1,     3,     1,     3,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       1,     1,     3,     3,     1,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     2,     1,     3,     3,     3,     1,
       2,     1,     1,     1,     1,     2,     2,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     3,     3,     2,     4,
       4,     4,     2,     3,     1,     3,     1,     3,     4,     2,
       4,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     0,     2,     3,     3,     1,
       3,     1,     3,     4,     0,     1,     0,     3,     4,     0,
       2,     1,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     3,     4,     0,     0,    17,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    32,    33,
      18,    20,    19,    53,    54,    55,    56,    57,    58,    59,
      60,    10,    16,     1,     5,     6,   412,    62,     0,     9,
       7,    61,     0,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    63,    65,    68,    70,    71,    72,    73,
      69,     0,    64,    11,     0,   250,     8,   208,     0,    79,
      80,   186,    77,    78,     0,    75,   186,     0,     0,   102,
       0,   170,   171,   424,     0,   419,     0,   421,   175,    13,
      15,     0,     0,     0,     0,   250,     0,     0,   355,   354,
      23,    24,    25,    26,   273,   252,   273,   252,   252,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,   373,   374,
     312,   313,   308,   310,   311,   284,   298,   300,   299,   303,
     304,   302,   301,     0,   282,   283,   285,   286,   287,   290,
     291,   294,   295,   296,   297,   383,   386,   390,   391,   392,
     393,   394,   395,   396,   397,     0,   347,   352,     0,   216,
       0,   210,   213,   214,   217,   218,   228,   224,   225,   219,
     237,   238,   239,   215,   245,   246,   247,   261,   248,     0,
       0,   249,   305,   307,   306,     0,     0,   348,   350,   353,
     351,   371,     0,     0,     0,    81,     0,   184,     0,    74,
     178,     0,   101,     0,   172,   425,   426,   417,     0,   418,
     182,   183,    66,     0,   180,    15,    95,   355,   354,     0,
     375,   376,   377,   378,   379,   380,   381,   382,   384,   385,
     387,   388,   398,   399,   389,   373,   374,    97,    96,    89,
      99,    90,    92,    91,     0,     0,   352,   343,     0,   342,
      94,    93,    98,     0,   324,   325,   330,   333,   335,     0,
     341,   353,   344,     0,   251,     0,   321,     0,     0,     0,
     221,   223,     0,   265,     0,   267,   266,   268,   269,     0,
       0,   309,     0,     0,   250,   209,   250,   250,     0,   257,
       0,     0,   259,     0,   119,   120,     0,   358,     0,     0,
       0,   369,     0,     0,     0,   320,     0,     0,   192,     0,
     188,     0,   179,    76,    14,     0,   145,   125,     0,   125,
     149,     0,     0,   105,    83,     0,    85,    88,     0,    86,
     104,   106,   107,   111,   112,   108,     0,   109,   110,   134,
     135,   136,   137,   138,   103,     0,     0,     0,   429,   420,
     422,   176,   174,     0,   345,   339,   362,   366,     0,   364,
     334,   100,     0,   404,   403,   405,     0,   400,   402,   401,
       0,   410,   411,     0,     0,     0,     0,   408,   409,   406,
     407,     0,     0,     0,     0,     0,   346,     0,   250,     0,
     250,   250,     0,   277,     0,   275,   256,     0,   254,    15,
       0,   353,     0,     0,   357,   288,   289,   280,   281,   273,
     252,   273,   252,   252,     0,   292,   293,   312,   313,   308,
     310,   311,   212,   211,   227,   262,     0,     0,    14,   349,
       0,   316,   318,   356,     0,     0,     0,     0,    82,     0,
       0,   187,     0,   185,     0,     0,     0,     0,   184,   133,
     123,     0,     0,     0,   413,   153,   152,     0,   116,     0,
     114,     0,    84,    87,   121,   118,   122,   173,     0,   415,
       0,   431,     0,   423,    67,     0,   181,   340,     0,     0,
     363,     0,   166,   413,   232,   168,   323,   322,   328,   329,
     327,   326,   332,   331,   336,   337,   338,     0,   226,   240,
     241,   220,   222,     0,   274,     0,   253,     0,   361,   271,
       0,   270,   263,   264,     0,   359,     0,   360,   372,   368,
     370,     0,     0,     0,   195,   190,   193,   197,   198,   196,
     189,   143,   142,     0,   140,     0,     0,     0,   129,     0,
     127,   124,    14,    20,    19,   161,     0,   162,     0,   160,
       0,   148,   412,     0,   150,   147,   113,     0,   117,     0,
       0,   433,   427,     0,   430,     0,   367,   365,     0,   250,
     235,     0,   250,     0,   230,     0,   244,   243,     0,   278,
     276,   255,     0,   317,   319,   191,   194,     0,     0,     0,
       0,     0,   146,   144,   132,     0,   126,     0,     0,     0,
     155,   154,   151,   115,   428,   416,   432,   177,   167,   234,
     229,   231,   236,   233,   169,     0,     0,   272,   207,     0,
     205,     0,     0,   141,     0,     0,   130,   128,   159,   413,
     163,     0,   250,   279,     0,     0,     0,     0,   139,   131,
     156,     0,     0,   157,     0,   242,     0,     0,   206,     0,
     149,   164,   149,     0,     0,   199,   203,   200,   201,     0,
       0,     0,   204,   202,   413,   165,   414,   158
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,    64,     6,    59,   482,   353,
     276,    63,    52,    60,    61,    73,   381,    74,    75,    76,
      94,   188,    77,    89,    90,   355,   356,   277,   278,   279,
     280,   281,   282,    78,    98,    99,   360,   361,   362,   363,
     489,   490,   364,   365,   366,   495,   367,   478,   569,   570,
     368,   369,   370,   563,   564,   371,   476,   372,   373,   483,
     484,   485,   486,   670,   578,   579,   659,   660,   511,   512,
      79,   101,   102,    80,   242,   505,    81,   243,   244,   342,
     227,   339,   340,   555,   556,   686,   557,   558,   650,   651,
     559,    86,   189,   190,   191,   192,   193,   194,   299,   300,
     195,   196,   197,   198,   601,   513,   514,   602,   199,   200,
     201,   202,   608,   203,   204,   205,   305,   427,   428,   206,
     207,   319,   208,   303,   424,   425,   209,   210,   211,   212,
     213,   214,   430,   460,   461,   515,   295,   426,   284,   285,
     286,   287,   384,   288,   289,   290,   217,   218,   291,   292,
     388,   389,   220,   331,   221,   222,   223,   400,   412,   406,
     316,   584,   591,    82,   104,   106,   105,   236,   378,   503,
     500,   501
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -603
static const yytype_int16 yypact[] =
{
      48,  1959,    52,    48,  -603,   -37,   -71,  -603,  -603,  -603,
    -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,
    -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,
    -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,
    -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,
    -603,   -60,  -603,  -603,  -603,  -603,  -603,  -603,  1959,  -603,
    -603,    78,    26,  -603,   164,  1959,  1959,  1743,  1959,  1959,
    1959,  1959,  1959,  -603,  -603,  -603,  -603,  -603,  -603,  -603,
    -603,   -71,  -603,  -603,  1959,  1236,  -603,  -603,    44,  1959,
    -603,    20,  -603,  -603,   -64,  -603,    20,    97,   -71,  -603,
      47,  1959,  -603,    50,   -71,  -603,   -53,  -603,     3,  -603,
      45,   985,  1380,  1743,   985,  1236,   985,  1380,    60,    87,
      98,   103,   105,   124,  -158,   -97,   -42,   -24,   -14,   127,
     132,   134,   136,   140,   144,   148,   154,   160,   165,   168,
     178,   182,   184,   185,   186,   189,   190,   193,   191,   194,
     195,   197,   745,   198,   200,  -603,  -603,  -603,  -603,  -603,
    -603,  -603,  -603,   206,  -603,  -603,  -603,  -603,  -603,  -603,
    -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,
    -603,  -603,  -603,  -603,  -603,   985,  -603,     8,   202,  -603,
      11,  -603,  -603,  -603,  -603,  -603,   213,  -603,  -603,  -603,
    -603,  -603,  -603,  -603,  -603,  -603,  -603,   167,  -603,   211,
     212,  -603,  -603,  -603,  -603,  1380,   -89,   214,   217,     9,
    -603,   221,   223,   225,   985,  -603,  1851,   209,  1743,  -603,
    -603,   776,  1959,   776,  -603,  -603,   -35,  1959,  1959,  -603,
    -603,  -603,  -603,   -71,  -603,  -603,  -603,  -603,  -603,   127,
    -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,
    -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,
    -603,  -603,  -603,  -603,   985,   623,  -603,  -603,   985,  -603,
    -603,  -603,   265,   438,   -47,   135,  -603,    30,  -603,  1104,
     -89,  -603,  -603,   -26,  -603,   371,   544,     2,   419,     1,
    -603,   -89,   985,  -603,   985,  -603,  -603,  -603,  -603,  1617,
     985,   544,   985,   366,  1428,  -603,  1236,  1236,   985,  -603,
     985,   985,   -89,   425,  -603,  -603,   985,  -603,  1959,   985,
     985,  -603,   985,   985,   -71,   544,  1959,    62,  -603,  -123,
    -603,   425,  -603,  -603,   303,   231,   241,   248,    99,   248,
    2017,   432,  1959,  -603,  -603,   319,  -603,  -603,    31,  -603,
    -603,  -603,  -603,  -603,  -603,  -603,  1899,  -603,  -603,  -603,
    -603,  -603,  -603,  -603,  -603,   -71,   256,  1959,   320,  -603,
    -603,   196,     3,   985,  -603,  -603,  -603,   493,    -7,  -603,
    -603,  -603,   985,  -603,  -603,  -603,   985,  -603,  -603,  -603,
     985,  -603,  -603,   985,   985,   985,   985,  -603,  -603,  -603,
    -603,   985,   985,  1104,  1104,   425,  -603,   985,  1236,   985,
    1236,  1236,  1380,   254,    95,  -603,   544,   100,  -603,   259,
     260,   262,   107,   111,  -603,  -603,  -603,  -603,  -603,   266,
     267,   266,   267,   267,   132,  -603,  -603,  -603,  -603,   985,
    -603,  -603,  -603,  -603,  -603,   544,   268,   115,  -603,  -603,
      -6,  -603,   532,  -603,   117,   269,   270,   120,  -603,    64,
      59,  -603,  1851,  -603,    43,    43,   451,  2125,   209,  -603,
    -603,  1558,    71,   464,   272,  -603,  -603,   776,  -603,   128,
    -603,   323,  -603,  -603,  -603,  -603,  -603,  -603,  1959,   283,
     161,  -603,   346,  -603,  -603,   164,  -603,  -603,   985,   985,
    -603,    72,  -603,   -63,  -603,   345,   -47,   -47,   135,   135,
     135,   135,  -603,  -603,  -603,  -603,  -603,   421,  -603,  -603,
    -603,  -603,  -603,   985,  -603,   985,  -603,   985,  -603,  -603,
     985,  -603,  -603,  -603,   985,  -603,   985,  -603,  -603,  -603,
    -603,    59,    -2,   474,  -603,  -603,  -603,  -603,  -603,  -603,
    -603,  -603,  -603,    16,  -603,   274,   776,  1959,    76,   -65,
    -603,  -603,   -93,   351,   353,  -603,   280,  -603,   469,  -603,
     776,  -603,    12,  2017,  -603,  -603,  -603,  1959,  -603,   175,
    1959,  -603,  -603,  1959,  -603,   -71,   544,  -603,   985,  1236,
    -603,   478,  1236,   866,  -603,   985,  -603,  -603,   985,   483,
    -603,  -603,   179,  -603,   544,  -603,  -603,   425,  1959,   285,
      43,   472,  -603,  -603,    88,   425,  -603,  2125,    43,   985,
    -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,
    -603,   -71,  -603,  -603,  -603,   304,   985,  -603,  -603,   363,
    -603,   -54,  1959,  -603,   776,   425,  -603,  -603,  -603,   -63,
    -603,    89,  1236,   544,  1959,   481,  1959,   288,  -603,  -603,
    -603,   308,   866,  -603,   309,  -603,   306,   129,  -603,   498,
    2017,  -603,  2017,   425,   311,  -603,  -603,  -603,  -603,   129,
     317,   321,  -603,  -603,   313,  -603,  -603,  -603
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -603,  -603,  -603,   521,  -603,  -603,  -603,  -603,   -56,    19,
     -82,    -1,  -603,  -603,  -603,  -603,  -603,   145,  -603,  -603,
    -603,   -40,  -603,  -603,   440,    36,  -603,  -191,  -218,  -107,
    -603,    28,  -603,  -603,  -603,   300,  -223,  -603,  -420,  -603,
    -603,   -52,  -603,  -603,  -165,  -603,   170,   192,  -603,   -94,
    -603,   201,  -603,  -603,  -444,  -603,  -603,  -603,  -603,  -467,
    -603,   -41,   -39,  -603,  -603,   -85,  -603,  -127,  -591,   -50,
    -603,  -603,   450,  -603,  -603,  -603,  -214,  -603,   171,    77,
     458,  -603,    91,    14,    15,  -122,  -602,  -558,  -560,  -603,
    -603,    79,   -59,  -111,  -291,   255,  -603,  -603,  -603,   159,
    -603,  -603,  -603,  -603,  -603,  -603,   -21,   -76,  -603,  -603,
    -603,  -603,  -603,  -603,  -603,  -603,   -70,  -301,  -230,  -603,
    -603,  -603,  -603,  -120,   273,    56,  -603,  -603,  -603,  -603,
    -603,  -603,  -603,  -603,    49,  -217,  -108,     6,  -174,  -144,
    -228,  -603,   204,  -215,   -74,   -68,  -603,  -603,   -62,  -603,
    -603,    86,  -603,  -603,  -603,  -603,  -603,  -603,  -603,  -603,
      -5,  -484,  -603,  -603,  -603,  -603,   -48,  -603,  -603,  -603,
     101,     4
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -415
static const yytype_int16 yytable[] =
{
      51,    57,    62,   187,   297,    87,   306,   334,   298,   421,
     375,   215,   338,   358,   100,   358,   617,   216,  -258,  -260,
     457,   315,  -414,   219,   107,   453,   454,    95,   464,   604,
     419,   565,   467,   187,   245,   240,  -258,  -260,   661,   -15,
     357,   215,   357,   302,   293,   100,   344,   216,   -27,   301,
     390,   327,    53,   219,   562,   562,   383,   307,   308,   385,
     246,   577,   458,   552,    88,    91,    93,    96,    97,     1,
     103,   103,   423,   294,   416,   687,   108,   323,   553,   471,
     432,   661,   423,   109,    93,    65,    56,   687,    88,   229,
     456,    66,   667,   232,    67,   401,   402,   403,    68,   237,
     465,   239,   466,   345,   304,    69,   678,    70,   417,   -28,
     346,   404,    93,   -17,    93,   324,   325,   283,   326,   688,
     296,   350,   296,   351,   359,   327,   359,   528,   327,   530,
     531,   688,   458,   684,   405,   600,   327,   626,    56,   228,
     323,    58,  -258,  -260,    56,    56,   582,   322,   553,   354,
     238,   354,   267,   268,   665,    56,    56,   327,   311,   302,
     269,   376,   271,    55,   -29,   383,   377,   493,   385,    85,
     337,   241,   269,   270,   271,   673,   653,   304,   324,   325,
     224,   326,   -30,   522,   523,   272,   273,   304,   343,   379,
     380,   313,   -31,   413,   414,   415,   509,   544,   524,   525,
     562,   510,   545,    65,   422,   618,  -258,  -260,   577,    66,
     697,    56,    67,   690,  -414,   691,    68,  -258,  -260,   620,
      56,   226,   516,    69,   621,    70,   517,    93,    83,    84,
     335,    97,   187,   231,   187,   187,   103,   103,   382,   612,
     215,   216,   215,   215,   352,   235,   216,   431,   216,   216,
      84,   -17,   219,   233,   219,   219,   358,   358,   338,   518,
     519,   520,   521,   358,   585,    84,   -21,    84,   470,   358,
     551,    71,    72,   358,    84,   598,   492,   580,   599,    84,
     469,   387,   625,   357,   357,   407,   408,   409,   410,   411,
     357,    84,   598,   -22,   655,   674,   357,   534,   535,  -288,
     357,   318,   536,   537,  -289,   423,  -280,   611,   639,   539,
     540,   529,   662,   541,   535,    93,    93,   543,   537,   547,
     537,   306,   550,   537,   455,  -281,   245,   463,   309,   468,
     586,   587,   462,   310,   472,  -375,   187,  -376,   187,   187,
     246,  -377,   459,   623,   215,  -378,   215,   215,   358,  -379,
     216,   488,   216,   216,   301,  -380,   219,   630,   219,   219,
     473,  -381,   358,   592,   593,   494,  -382,   359,   359,  -384,
     497,   675,   307,   308,   359,   357,   499,   634,   593,  -385,
     359,   647,   537,  -292,   359,  -293,  -387,  -388,   644,   357,
    -398,  -399,   354,   354,  -389,   391,   418,   -32,   335,   354,
     -33,   -53,   358,   -54,   -57,   354,   -58,   312,   314,   354,
     358,   317,   320,   321,   328,   341,   337,    93,   329,    93,
      93,   568,   330,   527,   332,   296,   333,   420,   458,   357,
     606,   668,   267,   268,   526,   -15,   358,   357,   474,   393,
     394,   395,   396,   397,   398,   399,    87,   607,   475,   477,
     487,   491,   269,   270,   271,   311,   392,   498,   502,   359,
     533,  -315,   538,   357,  -314,   272,   273,   302,   304,   566,
     542,   548,   549,   359,   581,   590,   270,   605,   619,   583,
     576,   582,   622,   -97,   354,   -96,   628,   629,   640,   554,
     654,   641,   652,   561,   561,   664,   679,   499,   354,   677,
     575,   393,   394,   395,   396,   397,   398,   399,   603,   680,
     682,   624,   683,   359,   596,   387,   689,   187,   618,   694,
     187,   359,   696,   695,    54,   215,   504,   588,   215,   225,
     594,   216,   374,   657,   216,   633,   496,   219,   354,   609,
     219,   480,   631,   658,   632,   681,   354,   359,   638,   479,
     462,   234,   614,   506,   230,   571,   393,   394,   395,   396,
     397,   398,   399,   560,   627,   615,   616,   693,   434,   452,
     554,   568,   354,   393,   394,   395,   396,   397,   398,   399,
     187,   532,   643,   671,   595,   433,   488,   507,   215,   635,
     637,   610,   499,   613,   216,   597,     0,   636,    93,   589,
     219,    93,     0,     0,   335,     0,     0,     0,     0,   335,
       0,   335,     0,     0,   645,     0,     0,   649,   393,   394,
     395,   396,   397,   398,   399,   508,   245,     0,   393,   394,
     395,   396,   397,   398,   399,   335,   648,     0,     0,   561,
     246,     0,     0,     0,   656,     0,   666,   575,     0,     0,
       0,   649,   663,     0,   672,     0,     0,     0,     0,     0,
       0,    93,     0,   676,   546,   649,     0,   393,   394,   395,
     396,   397,   398,   399,   669,     0,     0,     0,   335,   393,
     394,   395,   396,   397,   398,   399,     0,     0,     0,   646,
       0,     0,     0,     0,     0,     0,   685,     0,     0,   247,
     248,     0,   692,     0,     0,     0,     0,     0,   685,     0,
     249,     0,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,     0,     0,   260,   261,   262,   263,   264,   265,
     266,     0,   267,   268,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   245,     0,
       0,     0,   269,   270,   271,     0,     0,     0,     0,     0,
       0,     0,   246,     0,     0,   272,   273,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   344,
     345,     0,     0,     0,     0,     0,     0,   346,     0,   347,
     274,     0,     0,   246,     0,   348,   349,     0,   350,     0,
     351,     0,     0,     0,     0,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,     0,     0,     0,     0,     0,
       0,   247,   248,     0,   185,     0,     0,     0,   186,     0,
     275,   386,   249,     0,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,     0,     0,   260,   261,   262,   263,
     264,   265,   266,     0,   267,   268,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   245,
       0,     0,     0,     0,   269,   270,   271,     0,     0,     0,
       0,     0,     0,   246,     0,   267,   268,   272,   273,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   269,   270,   271,     0,     0,
       0,     0,   274,     0,     0,     0,     0,     0,   272,   273,
       0,     0,     0,     0,     0,     0,     0,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,     0,     0,     0,
       0,     0,   247,   248,     0,     0,   185,     0,     0,     0,
     186,   -55,   275,   249,     0,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,     0,     0,   260,   261,   262,
     263,   264,   265,   266,     0,   267,   268,   352,     0,     0,
     324,   325,     0,     0,     0,     0,     0,     0,   245,     0,
       0,     0,     0,     0,     0,   269,   270,   271,     0,     0,
       0,     0,   246,     0,     0,     0,     0,     0,   272,   273,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   274,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,     0,     0,
       0,   247,   248,     0,   642,     0,     0,   185,     0,     0,
       0,   186,   249,   275,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,     0,     0,   260,   261,   262,   263,
     264,   265,   266,     0,   267,   268,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   245,     0,     0,
       0,     0,     0,     0,   269,   270,   271,     0,     0,     0,
       0,   246,     0,     0,     0,     0,     0,   272,   273,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   274,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,     0,     0,     0,
     247,   248,     0,     0,     0,     0,   185,     0,     0,     0,
     186,   249,   275,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,     0,     0,   260,   261,   262,   263,   264,
     265,   266,     0,   267,   268,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   269,   270,   271,     0,     0,     0,   110,
       0,    85,   111,     0,     0,     0,     0,     0,   112,     0,
     113,   114,     0,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,     0,     0,     0,   116,   117,     0,     0,
       0,   274,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   185,     0,     0,     0,   186,
       0,   275,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,    40,    41,    42,     0,     0,   150,
     151,   152,    46,   153,   154,   155,     0,   156,    49,    50,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     157,     0,     0,   245,     0,     0,     0,     0,     0,     0,
     158,     0,   159,   160,   161,     0,     0,     0,     0,     0,
       0,     0,     0,   162,     0,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,     0,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,     0,     0,
       0,   245,     0,    85,   111,     0,     0,   185,     0,     0,
     112,   186,   113,   114,     0,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,     0,   247,   248,   116,   117,
       0,     0,     0,     0,     0,     0,     0,   249,     0,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,     0,
       0,   260,   261,   262,   263,   264,   265,   266,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   247,   248,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   249,   444,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   445,   446,   260,
     261,   262,   263,   264,   265,   266,     0,     0,     0,     0,
       0,   447,   448,   449,     0,   450,   451,   155,     0,   156,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   572,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   157,     0,     0,   246,     0,     0,     0,     0,
       0,   185,   158,     0,   159,   160,   161,     0,     0,     0,
       0,     0,     0,     0,     0,   162,     0,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,     0,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     429,     0,     0,     0,     0,     0,     0,     0,     0,   185,
       0,     0,     0,   186,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,   573,   574,     0,
       0,    43,    44,    45,    46,    47,    48,     0,     0,     0,
      49,    50,     0,     0,     0,     0,     0,   269,   270,   271,
       0,     0,     0,   247,   248,     0,     0,     0,     0,     0,
     272,   273,     0,     0,   249,     0,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,     0,     0,   260,   261,
     262,   263,   264,   265,   266,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   352,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   185,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     7,     0,    43,    44,    45,    46,
      47,    48,     0,     0,    66,    49,    50,     0,     0,     0,
       0,    68,    92,     0,     0,     0,     0,     0,     0,     0,
     336,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   347,     0,     0,     0,     0,     0,     0,   349,
       0,     0,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,     7,     0,    43,    44,    45,    46,    47,    48,
       0,     0,     0,    49,    50,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
       0,     0,    43,    44,    45,    46,    47,    48,     0,     0,
       7,    49,    50,   481,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
       0,     0,    43,    44,    45,    46,    47,    48,     0,     0,
       0,    49,    50,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     7,     0,
      43,    44,    45,    46,    47,    48,     0,     0,     0,    49,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   567,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     0,     0,    43,    44,
      45,    46,    47,    48,     0,     0,     0,    49,    50
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-603))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       1,     6,    58,    85,   115,    64,   126,   224,   116,     8,
     233,    85,   226,   231,    70,   233,    18,    85,    10,    10,
     321,    10,    10,    85,    72,   316,   317,    67,   329,   513,
      28,   475,   333,   115,     3,    32,    28,    28,   629,   132,
     231,   115,   233,   201,   112,   101,     3,   115,   206,   117,
     278,   216,     0,   115,   474,   475,   274,   127,   128,   274,
      17,   481,     3,     4,    65,    66,    67,    68,    69,    21,
      71,    72,   302,   113,   289,   677,    81,   166,    19,   202,
     310,   672,   312,    84,    85,     7,   209,   689,    89,    94,
     320,    13,   652,    98,    16,   142,   143,   144,    20,   104,
     330,   106,   332,     4,   201,    27,   666,    29,   134,   206,
      11,   158,   113,   206,   115,   204,   205,   111,   207,   677,
     114,    22,   116,    24,   231,   290,   233,   418,   293,   420,
     421,   689,     3,     4,   181,   198,   301,   202,   209,   203,
     166,   201,   134,   134,   209,   209,   209,   215,    19,   231,
     203,   233,   109,   110,   208,   209,   209,   322,   152,   201,
     129,   196,   131,   200,   206,   383,   201,   358,   383,     5,
     226,   168,   129,   130,   131,   659,   620,   201,   204,   205,
     136,   207,   206,   411,   412,   142,   143,   201,   228,   237,
     238,   185,   206,   163,   164,   165,   203,   203,   413,   414,
     620,   208,   208,     7,   203,   207,   198,   198,   628,    13,
     694,   209,    16,   680,   202,   682,    20,   209,   209,   203,
     209,   201,   396,    27,   208,    29,   400,   228,   202,   203,
     224,   232,   314,   136,   316,   317,   237,   238,   243,   540,
     314,   309,   316,   317,   201,   195,   314,   309,   316,   317,
     203,   206,   314,   206,   316,   317,   474,   475,   472,   403,
     404,   405,   406,   481,   487,   203,   206,   203,   206,   487,
     206,   193,   194,   491,   203,   203,   358,   206,   206,   203,
     336,   275,   206,   474,   475,   150,   151,   152,   153,   154,
     481,   203,   203,   206,   206,   206,   487,   202,   203,   201,
     491,   134,   202,   203,   201,   535,   201,   537,   599,   202,
     203,   419,     8,   202,   203,   316,   317,   202,   203,   202,
     203,   441,   202,   203,   318,   201,     3,   328,   201,   334,
     202,   203,   326,   201,   339,   201,   418,   201,   420,   421,
      17,   201,   323,   566,   418,   201,   420,   421,   566,   201,
     418,   352,   420,   421,   422,   201,   418,   580,   420,   421,
     341,   201,   580,   202,   203,   366,   201,   474,   475,   201,
     375,   662,   442,   443,   481,   566,   377,   202,   203,   201,
     487,   202,   203,   201,   491,   201,   201,   201,   605,   580,
     201,   201,   474,   475,   201,   130,    25,   206,   392,   481,
     206,   206,   620,   206,   206,   487,   206,   201,   206,   491,
     628,   198,   201,   201,   200,   206,   472,   418,   201,   420,
     421,   477,   201,   417,   201,   419,   201,     8,     3,   620,
       9,   654,   109,   110,   415,   132,   654,   628,   207,   135,
     136,   137,   138,   139,   140,   141,   505,    26,   207,   201,
      18,   132,   129,   130,   131,   449,    18,   201,   138,   566,
     206,   202,   202,   654,   202,   142,   143,   201,   201,    18,
     202,   202,   202,   580,    10,   192,   130,   132,     4,   484,
     481,   209,   208,   132,   566,   132,   206,    18,    10,   470,
      18,   602,   207,   474,   475,   132,   208,   498,   580,    18,
     481,   135,   136,   137,   138,   139,   140,   141,   513,   201,
     201,   567,   206,   620,   508,   509,    18,   599,   207,   202,
     602,   628,   209,   202,     3,   599,   381,   491,   602,    89,
     502,   599,   232,   627,   602,   587,   366,   599,   620,   533,
     602,   349,   583,   628,   583,   672,   628,   654,   598,   348,
     544,   101,   546,   382,    96,   478,   135,   136,   137,   138,
     139,   140,   141,   472,   569,   551,   551,   689,   202,   314,
     551,   627,   654,   135,   136,   137,   138,   139,   140,   141,
     662,   422,   603,   659,   505,   312,   587,   383,   662,   590,
     595,   535,   593,   544,   662,   509,    -1,   593,   599,   498,
     662,   602,    -1,    -1,   598,    -1,    -1,    -1,    -1,   603,
      -1,   605,    -1,    -1,   608,    -1,    -1,   618,   135,   136,
     137,   138,   139,   140,   141,   132,     3,    -1,   135,   136,
     137,   138,   139,   140,   141,   629,   617,    -1,    -1,   620,
      17,    -1,    -1,    -1,   625,    -1,   651,   628,    -1,    -1,
      -1,   652,   646,    -1,   659,    -1,    -1,    -1,    -1,    -1,
      -1,   662,    -1,   664,   132,   666,    -1,   135,   136,   137,
     138,   139,   140,   141,   655,    -1,    -1,    -1,   672,   135,
     136,   137,   138,   139,   140,   141,    -1,    -1,    -1,   206,
      -1,    -1,    -1,    -1,    -1,    -1,   677,    -1,    -1,    76,
      77,    -1,   683,    -1,    -1,    -1,    -1,    -1,   689,    -1,
      87,    -1,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    -1,    -1,   101,   102,   103,   104,   105,   106,
     107,    -1,   109,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,   129,   130,   131,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    -1,    -1,   142,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,    13,
     167,    -1,    -1,    17,    -1,    19,    20,    -1,    22,    -1,
      24,    -1,    -1,    -1,    -1,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    -1,   201,    -1,    -1,    -1,   205,    -1,
     207,   208,    87,    -1,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    -1,    -1,   101,   102,   103,   104,
     105,   106,   107,    -1,   109,   110,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    -1,   129,   130,   131,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    -1,   109,   110,   142,   143,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,    -1,    -1,
      -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,   142,   143,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,    -1,    -1,    -1,
      -1,    -1,    76,    77,    -1,    -1,   201,    -1,    -1,    -1,
     205,   206,   207,    87,    -1,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    -1,    -1,   101,   102,   103,
     104,   105,   106,   107,    -1,   109,   110,   201,    -1,    -1,
     204,   205,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,   142,   143,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,    -1,    -1,
      -1,    76,    77,    -1,   198,    -1,    -1,   201,    -1,    -1,
      -1,   205,    87,   207,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    -1,    -1,   101,   102,   103,   104,
     105,   106,   107,    -1,   109,   110,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,   129,   130,   131,    -1,    -1,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,    -1,    -1,    -1,
      76,    77,    -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,
     205,    87,   207,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    -1,    -1,   101,   102,   103,   104,   105,
     106,   107,    -1,   109,   110,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,   131,    -1,    -1,    -1,     3,
      -1,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    -1,
      14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,   205,
      -1,   207,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    -1,    -1,   113,
     114,   115,   116,   117,   118,   119,    -1,   121,   122,   123,
      -1,    -1,    -1,    -1,    -1,   129,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
     154,    -1,   156,   157,   158,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   167,    -1,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,    -1,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,    -1,    -1,
      -1,     3,    -1,     5,     6,    -1,    -1,   201,    -1,    -1,
      12,   205,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    76,    77,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    -1,
      -1,   101,   102,   103,   104,   105,   106,   107,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,   113,   114,   115,    -1,   117,   118,   119,    -1,   121,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   144,    -1,    -1,    17,    -1,    -1,    -1,    -1,
      -1,   201,   154,    -1,   156,   157,   158,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   167,    -1,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,    -1,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,
      -1,    -1,    -1,   205,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    -1,
      -1,   113,   114,   115,   116,   117,   118,    -1,    -1,    -1,
     122,   123,    -1,    -1,    -1,    -1,    -1,   129,   130,   131,
      -1,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,
     142,   143,    -1,    -1,    87,    -1,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    -1,    -1,   101,   102,
     103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,     3,    -1,   113,   114,   115,   116,
     117,   118,    -1,    -1,    13,   122,   123,    -1,    -1,    -1,
      -1,    20,   129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,     3,    -1,   113,   114,   115,   116,   117,   118,
      -1,    -1,    -1,   122,   123,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
      -1,    -1,   113,   114,   115,   116,   117,   118,    -1,    -1,
       3,   122,   123,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
      -1,    -1,   113,   114,   115,   116,   117,   118,    -1,    -1,
      -1,   122,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,     3,    -1,
     113,   114,   115,   116,   117,   118,    -1,    -1,    -1,   122,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,    -1,    -1,   113,   114,
     115,   116,   117,   118,    -1,    -1,    -1,   122,   123
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    21,   211,   212,   213,   214,   216,     3,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   113,   114,   115,   116,   117,   118,   122,
     123,   221,   222,     0,   213,   200,   209,   370,   201,   217,
     223,   224,   218,   221,   215,     7,    13,    16,    20,    27,
      29,   193,   194,   225,   227,   228,   229,   232,   243,   280,
     283,   286,   373,   202,   203,     5,   301,   302,   221,   233,
     234,   221,   129,   221,   230,   231,   221,   221,   244,   245,
     218,   281,   282,   221,   374,   376,   375,   376,   370,   221,
       3,     6,    12,    14,    15,    23,    30,    31,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     113,   114,   115,   117,   118,   119,   121,   144,   154,   156,
     157,   158,   167,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   201,   205,   220,   231,   302,
     303,   304,   305,   306,   307,   310,   311,   312,   313,   318,
     319,   320,   321,   323,   324,   325,   329,   330,   332,   336,
     337,   338,   339,   340,   341,   354,   355,   356,   357,   358,
     362,   364,   365,   366,   136,   234,   201,   290,   203,   370,
     290,   136,   370,   206,   282,   195,   377,   370,   203,   370,
      32,   168,   284,   287,   288,     3,    17,    76,    77,    87,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     101,   102,   103,   104,   105,   106,   107,   109,   110,   129,
     130,   131,   142,   143,   167,   207,   220,   237,   238,   239,
     240,   241,   242,   347,   348,   349,   350,   351,   353,   354,
     355,   358,   359,   355,   231,   346,   347,   303,   346,   308,
     309,   355,   201,   333,   201,   326,   333,   326,   326,   201,
     201,   347,   201,   347,   206,    10,   370,   198,   134,   331,
     201,   201,   355,   166,   204,   205,   207,   254,   200,   201,
     201,   363,   201,   201,   345,   347,    29,   218,   286,   291,
     292,   206,   289,   231,     3,     4,    11,    13,    19,    20,
      22,    24,   201,   219,   220,   235,   236,   237,   238,   239,
     246,   247,   248,   249,   252,   253,   254,   256,   260,   261,
     262,   265,   267,   268,   245,   246,   196,   201,   378,   376,
     376,   226,   370,   238,   352,   353,   208,   347,   360,   361,
     350,   130,    18,   135,   136,   137,   138,   139,   140,   141,
     367,   142,   143,   144,   158,   181,   369,   150,   151,   152,
     153,   154,   368,   163,   164,   165,   353,   134,    25,    28,
       8,     8,   203,   328,   334,   335,   347,   327,   328,     3,
     342,   358,   328,   334,   202,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    88,    99,   100,   113,   114,   115,
     117,   118,   305,   304,   304,   347,   328,   327,     3,   219,
     343,   344,   347,   221,   327,   328,   328,   327,   370,   218,
     206,   202,   370,   219,   207,   207,   266,   201,   257,   261,
     257,     6,   218,   269,   270,   271,   272,    18,   221,   250,
     251,   132,   220,   237,   221,   255,   256,   370,   201,   221,
     380,   381,   138,   379,   227,   285,   288,   352,   132,   203,
     208,   278,   279,   315,   316,   345,   348,   348,   349,   349,
     349,   349,   350,   350,   353,   353,   219,   347,   304,   346,
     304,   304,   309,   206,   202,   203,   202,   203,   202,   202,
     203,   202,   202,   202,   203,   208,   132,   202,   202,   202,
     202,   206,     4,    19,   219,   293,   294,   296,   297,   300,
     292,   219,   248,   263,   264,   264,    18,    29,   218,   258,
     259,   289,     3,   109,   110,   219,   221,   248,   274,   275,
     206,    10,   209,   370,   371,   246,   202,   203,   235,   380,
     192,   372,   202,   203,   241,   301,   347,   361,   203,   206,
     198,   314,   317,   370,   371,   132,     9,    26,   322,   347,
     335,   328,   327,   344,   347,   293,   294,    18,   207,     4,
     203,   208,   208,   246,   218,   206,   202,   370,   206,    18,
     246,   271,   272,   251,   202,   221,   381,   370,   279,   304,
      10,   303,   198,   316,   345,   347,   206,   202,   219,   221,
     298,   299,   207,   264,    18,   206,   219,   259,   275,   276,
     277,   278,     8,   347,   132,   208,   370,   298,   246,   219,
     273,   317,   370,   371,   206,   304,   221,    18,   298,   208,
     201,   277,   201,   206,     4,   219,   295,   296,   297,    18,
     269,   269,   219,   295,   202,   202,   209,   371
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
#line 208 "gram.y"
    {}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 209 "gram.y"
    {}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 213 "gram.y"
    {}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 214 "gram.y"
    {}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 218 "gram.y"
    {}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 222 "gram.y"
    { enter_main_body(); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 223 "gram.y"
    { exit_main_body(); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 227 "gram.y"
    {}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 231 "gram.y"
    {}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 232 "gram.y"
    { (yyval.y_varidlist) = (yyvsp[(2) - (3)].y_varidlist); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 236 "gram.y"
    { (yyval.y_varidlist) = build_var_id_list(NULL, (yyvsp[(1) - (1)].y_stid)); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 237 "gram.y"
    { (yyval.y_varidlist) = build_var_id_list((yyvsp[(1) - (3)].y_varidlist), (yyvsp[(3) - (3)].y_stid)); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 241 "gram.y"
    { (yyval.y_type) = check_typename(st_enter_id((yyvsp[(1) - (1)].y_string))); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 245 "gram.y"
    { (yyval.y_stid) = st_enter_id((yyvsp[(1) - (1)].y_string)); }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 249 "gram.y"
    { (yyval.y_stid) = (yyvsp[(1) - (1)].y_string); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 253 "gram.y"
    { (yyval.y_string) = st_enter_id((yyvsp[(1) - (1)].y_string)); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 307 "gram.y"
    {}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 311 "gram.y"
    {}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 312 "gram.y"
    {}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 316 "gram.y"
    {}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 317 "gram.y"
    {}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 321 "gram.y"
    { (yyval.y_cint) = 0; }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 322 "gram.y"
    { (yyval.y_cint) = (yyvsp[(1) - (2)].y_cint) + (yyvsp[(2) - (2)].y_cint); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 326 "gram.y"
    { (yyval.y_cint) = (yyvsp[(1) - (1)].y_cint); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 327 "gram.y"
    { (yyval.y_cint) = 0; }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 331 "gram.y"
    {}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 332 "gram.y"
    {}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 333 "gram.y"
    {}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 334 "gram.y"
    { (yyval.y_cint) = (yyvsp[(1) - (1)].y_cint); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 340 "gram.y"
    {}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 344 "gram.y"
    {}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 345 "gram.y"
    {}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 350 "gram.y"
    {}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 351 "gram.y"
    {}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 357 "gram.y"
    {}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 361 "gram.y"
    {}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 362 "gram.y"
    {}
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 366 "gram.y"
    {}
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 370 "gram.y"
    {}
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 371 "gram.y"
    { }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 372 "gram.y"
    { (yyval.y_expr) = (yyvsp[(1) - (1)].y_expr); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 373 "gram.y"
    { (yyval.y_expr) = (yyvsp[(1) - (1)].y_expr); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 377 "gram.y"
    { (yyval.y_expr) = make_un_expr((yyvsp[(1) - (2)].y_unop), (yyvsp[(2) - (2)].y_expr)); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 378 "gram.y"
    { (yyval.y_expr) = (yyvsp[(1) - (1)].y_expr); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 382 "gram.y"
    { (yyval.y_expr) = make_intconst_expr((yyvsp[(1) - (1)].y_int), ty_build_basic(TYSIGNEDLONGINT)); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 383 "gram.y"
    { (yyval.y_expr) = make_realconst_expr( (double)(yyvsp[(1) - (1)].y_real)); }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 387 "gram.y"
    { (yyval.y_unop) = UPLUS_OP; }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 388 "gram.y"
    { (yyval.y_unop) = NEG_OP; }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 392 "gram.y"
    { (yyval.y_expr) = make_strconst_expr((yyvsp[(1) - (1)].y_string)); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 393 "gram.y"
    { (yyval.y_expr) = (yyvsp[(1) - (1)].y_expr); }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 397 "gram.y"
    { (yyval.y_expr) = make_null_expr(NIL_OP); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 398 "gram.y"
    { (yyval.y_expr) = make_intconst_expr(0, ty_build_basic(TYSIGNEDLONGINT)); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 399 "gram.y"
    { (yyval.y_expr) = make_intconst_expr(1, ty_build_basic(TYSIGNEDLONGINT)); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 403 "gram.y"
    { (yyval.y_string) = (yyvsp[(1) - (1)].y_string); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 407 "gram.y"
    { (yyval.y_string) = (yyvsp[(1) - (1)].y_string); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 408 "gram.y"
    { (yyval.y_string) = (yyvsp[(2) - (2)].y_string); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 412 "gram.y"
    { resolve_all_ptr(); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 416 "gram.y"
    {}
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 417 "gram.y"
    {}
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 421 "gram.y"
    { create_typename( (yyvsp[(1) - (3)].y_stid), (yyvsp[(3) - (3)].y_type) ); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 424 "gram.y"
    { (yyval.y_type) = (yyvsp[(1) - (1)].y_type); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 425 "gram.y"
    { (yyval.y_type) = (yyvsp[(1) - (1)].y_type); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 429 "gram.y"
    { (yyval.y_type) = (yyvsp[(1) - (1)].y_type);}
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 430 "gram.y"
    { (yyval.y_type) = (yyvsp[(1) - (1)].y_type); }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 431 "gram.y"
    { (yyval.y_type) = (yyvsp[(1) - (1)].y_type); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 432 "gram.y"
    { (yyval.y_type) = (yyvsp[(1) - (1)].y_type); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 436 "gram.y"
    {}
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 437 "gram.y"
    { (yyval.y_type) = (yyvsp[(1) - (1)].y_type); }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 441 "gram.y"
    {}
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 445 "gram.y"
    {}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 446 "gram.y"
    {}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 450 "gram.y"
    {}
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 454 "gram.y"
    { (yyval.y_type) = check_subrange((yyvsp[(1) - (3)].y_expr),(yyvsp[(3) - (3)].y_expr)); }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 459 "gram.y"
    { (yyval.y_type) = (yyvsp[(2) - (2)].y_type) ; }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 463 "gram.y"
    {}
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 464 "gram.y"
    {}
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 468 "gram.y"
    { (yyval.y_type) = ty_build_ptr((yyvsp[(1) - (1)].y_stid), NULL); }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 469 "gram.y"
    { (yyval.y_type) = ty_build_ptr(NULL, (yyvsp[(1) - (1)].y_type)); }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 473 "gram.y"
    { (yyval.y_type) = ty_build_func(ty_build_basic(TYVOID), (yyvsp[(2) - (2)].y_paramlist), TRUE); }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 474 "gram.y"
    { (yyval.y_type) = ty_build_func((yyvsp[(3) - (3)].y_type), (yyvsp[(2) - (3)].y_paramlist), TRUE); }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 478 "gram.y"
    {(yyval.y_paramlist) = NULL;}
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 479 "gram.y"
    {(yyval.y_paramlist) = check_param((yyvsp[(2) - (3)].y_paramlist));}
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 483 "gram.y"
    { (yyval.y_paramlist) = (yyvsp[(1) - (1)].y_paramlist); }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 484 "gram.y"
    { (yyval.y_paramlist) = concatenate_param_list ((yyvsp[(1) - (3)].y_paramlist), (yyvsp[(3) - (3)].y_paramlist)); }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 488 "gram.y"
    {(yyval.y_paramlist)=build_param_list((yyvsp[(1) - (1)].y_varidlist),ty_build_basic(TYERROR),FALSE);}
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 489 "gram.y"
    { (yyval.y_paramlist) = build_param_list((yyvsp[(1) - (3)].y_varidlist), (yyvsp[(3) - (3)].y_type), FALSE); }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 490 "gram.y"
    { (yyval.y_paramlist) = build_param_list((yyvsp[(2) - (4)].y_varidlist), (yyvsp[(4) - (4)].y_type), TRUE); }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 491 "gram.y"
    {(yyval.y_paramlist)=build_param_list((yyvsp[(2) - (2)].y_varidlist),ty_build_basic(TYERROR),TRUE); /*treat as semantic errors*/}
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 496 "gram.y"
    { (yyval.y_type) = (yyvsp[(2) - (2)].y_type); }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 497 "gram.y"
    { (yyval.y_type) = (yyvsp[(1) - (1)].y_type); }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 501 "gram.y"
    { (yyval.y_type) = (yyvsp[(1) - (1)].y_type); }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 502 "gram.y"
    {}
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 503 "gram.y"
    {}
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 504 "gram.y"
    {}
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 510 "gram.y"
    { (yyval.y_type) = check_array((yyvsp[(6) - (6)].y_type), (yyvsp[(3) - (6)].y_indexlist)); }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 514 "gram.y"
    { (yyval.y_indexlist) = create_list_from_type( (yyvsp[(1) - (1)].y_type) ); }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 515 "gram.y"
    { (yyval.y_indexlist) = concatenate_index_lists((yyvsp[(1) - (3)].y_indexlist), (yyvsp[(3) - (3)].y_type)); }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 520 "gram.y"
    { (yyval.y_type) = (yyvsp[(1) - (1)].y_type); }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 521 "gram.y"
    { (yyval.y_type) = (yyvsp[(1) - (1)].y_type); }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 526 "gram.y"
    {}
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 530 "gram.y"
    {}
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 531 "gram.y"
    {}
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 537 "gram.y"
    {}
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 541 "gram.y"
    {}
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 545 "gram.y"
    {}
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 546 "gram.y"
    {}
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 547 "gram.y"
    {}
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 548 "gram.y"
    {}
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 552 "gram.y"
    {}
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 553 "gram.y"
    {}
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 557 "gram.y"
    {}
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 561 "gram.y"
    {}
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 565 "gram.y"
    {}
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 566 "gram.y"
    {}
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 570 "gram.y"
    {}
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 571 "gram.y"
    {}
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 575 "gram.y"
    {}
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 576 "gram.y"
    {}
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 580 "gram.y"
    {}
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 581 "gram.y"
    {}
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 585 "gram.y"
    {}
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 589 "gram.y"
    {}
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 590 "gram.y"
    {}
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 594 "gram.y"
    {}
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 595 "gram.y"
    {}
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 601 "gram.y"
    { (yyval.y_cint) = (yyvsp[(2) - (2)].y_cint); }
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 605 "gram.y"
    { (yyval.y_cint) = (yyvsp[(1) - (1)].y_cint); }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 606 "gram.y"
    { (yyval.y_cint) = (yyvsp[(1) - (2)].y_cint) + (yyvsp[(2) - (2)].y_cint); }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 610 "gram.y"
    { /*create_gdecl($1, $3); decl($3, $1); */
                                     (yyval.y_cint) = process_var_decl((yyvsp[(1) - (4)].y_varidlist), (yyvsp[(3) - (4)].y_type), b_get_local_var_offset()); }
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 615 "gram.y"
    { build_func_decl((yyvsp[(1) - (4)].y_funchead).id, (yyvsp[(1) - (4)].y_funchead).type, (yyvsp[(3) - (4)].y_dir)); }
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 616 "gram.y"
    { (yyval.y_cint) = enter_function((yyvsp[(1) - (2)].y_funchead).id, (yyvsp[(1) - (2)].y_funchead).type, st_get_id_str((yyvsp[(1) - (2)].y_funchead).id)); }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 617 "gram.y"
    { enter_func_body(st_get_id_str((yyvsp[(1) - (4)].y_funchead).id), (yyvsp[(1) - (4)].y_funchead).type, (yyvsp[(3) - (4)].y_cint)); }
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 618 "gram.y"
    { exit_func_body(st_get_id_str((yyvsp[(1) - (7)].y_funchead).id), (yyvsp[(1) - (7)].y_funchead).type); }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 622 "gram.y"
    { (yyval.y_funchead).id = (yyvsp[(2) - (3)].y_stid); (yyval.y_funchead).type = ty_build_func(ty_build_basic(TYVOID),NULL, FALSE);}
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 623 "gram.y"
    { (yyval.y_funchead).id = (yyvsp[(2) - (4)].y_stid); (yyval.y_funchead).type = ty_build_func((yyvsp[(4) - (4)].y_type), NULL ,FALSE); }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 627 "gram.y"
    { (yyval.y_dir) = (yyvsp[(1) - (1)].y_dir); }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 628 "gram.y"
    {}
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 632 "gram.y"
    { (yyval.y_dir) = DIR_FORWARD;  }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 633 "gram.y"
    { (yyval.y_dir) = DIR_EXTERNAL; }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 637 "gram.y"
    {}
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 638 "gram.y"
    { (yyval.y_type) = check_function_type((yyvsp[(2) - (2)].y_type)); }
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 644 "gram.y"
    {}
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 645 "gram.y"
    {}
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 649 "gram.y"
    {}
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 650 "gram.y"
    {}
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 654 "gram.y"
    {}
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 655 "gram.y"
    {}
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 656 "gram.y"
    {}
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 657 "gram.y"
    {}
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 658 "gram.y"
    {}
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 662 "gram.y"
    {}
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 663 "gram.y"
    {}
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 667 "gram.y"
    {}
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 668 "gram.y"
    {}
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 672 "gram.y"
    {}
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 673 "gram.y"
    {}
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 674 "gram.y"
    {}
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 678 "gram.y"
    {}
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 682 "gram.y"
    {}
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 686 "gram.y"
    {}
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 690 "gram.y"
    {}
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 691 "gram.y"
    {}
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 695 "gram.y"
    {}
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 699 "gram.y"
    {}
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 703 "gram.y"
    {}
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 707 "gram.y"
    {}
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 708 "gram.y"
    {}
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 712 "gram.y"
    {}
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 713 "gram.y"
    {}
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 717 "gram.y"
    {}
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 718 "gram.y"
    {}
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 722 "gram.y"
    {}
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 723 "gram.y"
    {}
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 724 "gram.y"
    {}
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 725 "gram.y"
    {}
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 729 "gram.y"
    {}
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 733 "gram.y"
    {}
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 734 "gram.y"
    {}
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 738 "gram.y"
    {}
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 742 "gram.y"
    {}
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 743 "gram.y"
    {}
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 747 "gram.y"
    {}
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 751 "gram.y"
    {}
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 752 "gram.y"
    {}
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 756 "gram.y"
    {}
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 760 "gram.y"
    {}
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 761 "gram.y"
    {}
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 765 "gram.y"
    {}
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 766 "gram.y"
    {}
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 770 "gram.y"
    {}
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 774 "gram.y"
    {}
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 775 "gram.y"
    {}
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 779 "gram.y"
    {}
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 780 "gram.y"
    {}
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 781 "gram.y"
    {}
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 785 "gram.y"
    {}
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 789 "gram.y"
    {}
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 793 "gram.y"
    {}
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 797 "gram.y"
    {}
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 798 "gram.y"
    {}
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 802 "gram.y"
    {}
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 803 "gram.y"
    {}
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 804 "gram.y"
    { encode_expr((yyvsp[(1) - (1)].y_expr));}
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 805 "gram.y"
    { encode_expr((yyvsp[(1) - (1)].y_expr));}
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 806 "gram.y"
    {}
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 810 "gram.y"
    {}
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 814 "gram.y"
    {}
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 820 "gram.y"
    { (yyval.y_exprlist) = NULL; }
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 821 "gram.y"
    { (yyval.y_exprlist) = expr_list_reverse((yyvsp[(2) - (3)].y_exprlist)); }
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 825 "gram.y"
    { (yyval.y_exprlist) = expr_prepend((yyvsp[(1) - (1)].y_expr), NULL); }
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 826 "gram.y"
    { (yyval.y_exprlist) = expr_prepend((yyvsp[(3) - (3)].y_expr), (yyvsp[(1) - (3)].y_exprlist)); }
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 830 "gram.y"
    { (yyval.y_expr) = (yyvsp[(1) - (1)].y_expr); }
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 836 "gram.y"
    { (yyval.y_expr) = check_assign_or_proc_call((yyvsp[(1) - (2)].y_exprid).expr, (yyvsp[(1) - (2)].y_exprid).id, (yyvsp[(2) - (2)].y_expr)); }
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 840 "gram.y"
    { (yyval.y_exprid).expr = make_id_expr((yyvsp[(1) - (1)].y_stid)); (yyval.y_exprid).id = (yyvsp[(1) - (1)].y_stid);}
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 841 "gram.y"
    {}
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 842 "gram.y"
    { (yyval.y_exprid).expr = (yyvsp[(1) - (1)].y_expr); (yyval.y_exprid).id = NULL; }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 846 "gram.y"
    { (yyval.y_expr) = NULL; }
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 847 "gram.y"
    { (yyval.y_expr) = (yyvsp[(2) - (2)].y_expr); }
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 851 "gram.y"
    {}
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 852 "gram.y"
    {}
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 853 "gram.y"
    {}
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 854 "gram.y"
    {}
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 855 "gram.y"
    {}
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 856 "gram.y"
    {}
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 857 "gram.y"
    {}
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 858 "gram.y"
    {}
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 859 "gram.y"
    { (yyval.y_expr) = make_un_expr(DISPOSE_OP, (yyvsp[(3) - (4)].y_expr)); }
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 860 "gram.y"
    {}
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 864 "gram.y"
    {}
    break;

  case 274:

/* Line 1806 of yacc.c  */
#line 865 "gram.y"
    {}
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 869 "gram.y"
    {}
    break;

  case 276:

/* Line 1806 of yacc.c  */
#line 870 "gram.y"
    {}
    break;

  case 277:

/* Line 1806 of yacc.c  */
#line 874 "gram.y"
    {}
    break;

  case 278:

/* Line 1806 of yacc.c  */
#line 875 "gram.y"
    {}
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 876 "gram.y"
    {}
    break;

  case 280:

/* Line 1806 of yacc.c  */
#line 881 "gram.y"
    {}
    break;

  case 281:

/* Line 1806 of yacc.c  */
#line 882 "gram.y"
    {}
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 883 "gram.y"
    {}
    break;

  case 283:

/* Line 1806 of yacc.c  */
#line 884 "gram.y"
    {}
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 885 "gram.y"
    {}
    break;

  case 285:

/* Line 1806 of yacc.c  */
#line 886 "gram.y"
    {}
    break;

  case 286:

/* Line 1806 of yacc.c  */
#line 887 "gram.y"
    {}
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 888 "gram.y"
    {}
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 892 "gram.y"
    {}
    break;

  case 289:

/* Line 1806 of yacc.c  */
#line 893 "gram.y"
    {}
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 894 "gram.y"
    {}
    break;

  case 291:

/* Line 1806 of yacc.c  */
#line 895 "gram.y"
    {}
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 896 "gram.y"
    {}
    break;

  case 293:

/* Line 1806 of yacc.c  */
#line 897 "gram.y"
    {}
    break;

  case 294:

/* Line 1806 of yacc.c  */
#line 898 "gram.y"
    {}
    break;

  case 295:

/* Line 1806 of yacc.c  */
#line 899 "gram.y"
    {}
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 900 "gram.y"
    {}
    break;

  case 297:

/* Line 1806 of yacc.c  */
#line 901 "gram.y"
    {}
    break;

  case 298:

/* Line 1806 of yacc.c  */
#line 902 "gram.y"
    {}
    break;

  case 299:

/* Line 1806 of yacc.c  */
#line 903 "gram.y"
    {}
    break;

  case 300:

/* Line 1806 of yacc.c  */
#line 904 "gram.y"
    {}
    break;

  case 301:

/* Line 1806 of yacc.c  */
#line 905 "gram.y"
    {}
    break;

  case 302:

/* Line 1806 of yacc.c  */
#line 906 "gram.y"
    {}
    break;

  case 303:

/* Line 1806 of yacc.c  */
#line 907 "gram.y"
    {}
    break;

  case 304:

/* Line 1806 of yacc.c  */
#line 908 "gram.y"
    {}
    break;

  case 305:

/* Line 1806 of yacc.c  */
#line 912 "gram.y"
    {}
    break;

  case 306:

/* Line 1806 of yacc.c  */
#line 913 "gram.y"
    {}
    break;

  case 307:

/* Line 1806 of yacc.c  */
#line 914 "gram.y"
    {}
    break;

  case 308:

/* Line 1806 of yacc.c  */
#line 918 "gram.y"
    {}
    break;

  case 309:

/* Line 1806 of yacc.c  */
#line 919 "gram.y"
    {}
    break;

  case 310:

/* Line 1806 of yacc.c  */
#line 920 "gram.y"
    {}
    break;

  case 311:

/* Line 1806 of yacc.c  */
#line 921 "gram.y"
    {}
    break;

  case 312:

/* Line 1806 of yacc.c  */
#line 925 "gram.y"
    {}
    break;

  case 313:

/* Line 1806 of yacc.c  */
#line 929 "gram.y"
    {}
    break;

  case 314:

/* Line 1806 of yacc.c  */
#line 933 "gram.y"
    {}
    break;

  case 315:

/* Line 1806 of yacc.c  */
#line 934 "gram.y"
    { (yyval.y_expr) = make_id_expr(st_enter_id((yyvsp[(1) - (1)].y_string))); }
    break;

  case 316:

/* Line 1806 of yacc.c  */
#line 938 "gram.y"
    {}
    break;

  case 317:

/* Line 1806 of yacc.c  */
#line 939 "gram.y"
    {}
    break;

  case 318:

/* Line 1806 of yacc.c  */
#line 943 "gram.y"
    {}
    break;

  case 319:

/* Line 1806 of yacc.c  */
#line 944 "gram.y"
    {}
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 950 "gram.y"
    {}
    break;

  case 321:

/* Line 1806 of yacc.c  */
#line 954 "gram.y"
    {}
    break;

  case 322:

/* Line 1806 of yacc.c  */
#line 958 "gram.y"
    { (yyval.y_expr) = make_bin_expr((yyvsp[(2) - (3)].y_binop), (yyvsp[(1) - (3)].y_expr), (yyvsp[(3) - (3)].y_expr)); }
    break;

  case 323:

/* Line 1806 of yacc.c  */
#line 959 "gram.y"
    {}
    break;

  case 324:

/* Line 1806 of yacc.c  */
#line 960 "gram.y"
    { (yyval.y_expr) = (yyvsp[(1) - (1)].y_expr); }
    break;

  case 325:

/* Line 1806 of yacc.c  */
#line 964 "gram.y"
    { (yyval.y_expr) = (yyvsp[(1) - (1)].y_expr); }
    break;

  case 326:

/* Line 1806 of yacc.c  */
#line 965 "gram.y"
    { (yyval.y_expr) = make_bin_expr((yyvsp[(2) - (3)].y_binop), (yyvsp[(1) - (3)].y_expr), (yyvsp[(3) - (3)].y_expr)); }
    break;

  case 327:

/* Line 1806 of yacc.c  */
#line 966 "gram.y"
    { (yyval.y_expr) = make_bin_expr(SYMDIFF_OP, (yyvsp[(1) - (3)].y_expr), (yyvsp[(3) - (3)].y_expr)); }
    break;

  case 328:

/* Line 1806 of yacc.c  */
#line 967 "gram.y"
    { (yyval.y_expr) = make_bin_expr(OR_OP, (yyvsp[(1) - (3)].y_expr), (yyvsp[(3) - (3)].y_expr)); }
    break;

  case 329:

/* Line 1806 of yacc.c  */
#line 968 "gram.y"
    { (yyval.y_expr) = make_bin_expr(XOR_OP, (yyvsp[(1) - (3)].y_expr), (yyvsp[(3) - (3)].y_expr)); }
    break;

  case 330:

/* Line 1806 of yacc.c  */
#line 972 "gram.y"
    { (yyval.y_expr) = (yyvsp[(1) - (1)].y_expr); }
    break;

  case 331:

/* Line 1806 of yacc.c  */
#line 973 "gram.y"
    { (yyval.y_expr) = make_bin_expr((yyvsp[(2) - (3)].y_binop), (yyvsp[(1) - (3)].y_expr), (yyvsp[(3) - (3)].y_expr)); }
    break;

  case 332:

/* Line 1806 of yacc.c  */
#line 974 "gram.y"
    { (yyval.y_expr) = make_bin_expr(AND_OP, (yyvsp[(1) - (3)].y_expr), (yyvsp[(3) - (3)].y_expr)); }
    break;

  case 333:

/* Line 1806 of yacc.c  */
#line 978 "gram.y"
    { (yyval.y_expr) = (yyvsp[(1) - (1)].y_expr); }
    break;

  case 334:

/* Line 1806 of yacc.c  */
#line 979 "gram.y"
    { (yyval.y_expr) = make_un_expr((yyvsp[(1) - (2)].y_unop), (yyvsp[(2) - (2)].y_expr)); }
    break;

  case 335:

/* Line 1806 of yacc.c  */
#line 983 "gram.y"
    { (yyval.y_expr) = (yyvsp[(1) - (1)].y_expr); }
    break;

  case 336:

/* Line 1806 of yacc.c  */
#line 984 "gram.y"
    {}
    break;

  case 337:

/* Line 1806 of yacc.c  */
#line 985 "gram.y"
    {}
    break;

  case 338:

/* Line 1806 of yacc.c  */
#line 986 "gram.y"
    {}
    break;

  case 339:

/* Line 1806 of yacc.c  */
#line 990 "gram.y"
    { (yyval.y_expr) = (yyvsp[(1) - (1)].y_expr); }
    break;

  case 340:

/* Line 1806 of yacc.c  */
#line 991 "gram.y"
    { (yyval.y_expr) = make_un_expr((yyvsp[(1) - (2)].y_unop), (yyvsp[(2) - (2)].y_expr)); }
    break;

  case 341:

/* Line 1806 of yacc.c  */
#line 995 "gram.y"
    { if (ty_query((yyvsp[(1) - (1)].y_expr)->type) == TYFUNC) {
                                      (yyval.y_expr) = make_fcall_expr((yyvsp[(1) - (1)].y_expr), NULL);
                                   } else { (yyval.y_expr) = (yyvsp[(1) - (1)].y_expr); }
                                 }
    break;

  case 342:

/* Line 1806 of yacc.c  */
#line 999 "gram.y"
    { (yyval.y_expr) = (yyvsp[(1) - (1)].y_expr); }
    break;

  case 343:

/* Line 1806 of yacc.c  */
#line 1000 "gram.y"
    { (yyval.y_expr) = (yyvsp[(1) - (1)].y_expr); }
    break;

  case 344:

/* Line 1806 of yacc.c  */
#line 1001 "gram.y"
    {}
    break;

  case 345:

/* Line 1806 of yacc.c  */
#line 1002 "gram.y"
    { (yyval.y_expr) = make_un_expr(NOT_OP, (yyvsp[(2) - (2)].y_expr)); }
    break;

  case 346:

/* Line 1806 of yacc.c  */
#line 1003 "gram.y"
    { (yyval.y_expr) = make_un_expr(ADDRESS_OP, (yyvsp[(2) - (2)].y_expr)); }
    break;

  case 347:

/* Line 1806 of yacc.c  */
#line 1007 "gram.y"
    {}
    break;

  case 348:

/* Line 1806 of yacc.c  */
#line 1011 "gram.y"
    { (yyval.y_expr) = (yyvsp[(1) - (1)].y_expr); }
    break;

  case 349:

/* Line 1806 of yacc.c  */
#line 1012 "gram.y"
    {}
    break;

  case 350:

/* Line 1806 of yacc.c  */
#line 1016 "gram.y"
    { (yyval.y_expr) = (yyvsp[(1) - (1)].y_expr); }
    break;

  case 351:

/* Line 1806 of yacc.c  */
#line 1017 "gram.y"
    { (yyval.y_expr) = (yyvsp[(1) - (1)].y_expr); }
    break;

  case 352:

/* Line 1806 of yacc.c  */
#line 1021 "gram.y"
    { (yyval.y_expr) = make_id_expr((yyvsp[(1) - (1)].y_stid)); }
    break;

  case 353:

/* Line 1806 of yacc.c  */
#line 1022 "gram.y"
    { (yyval.y_expr) = (yyvsp[(1) - (1)].y_expr); }
    break;

  case 354:

/* Line 1806 of yacc.c  */
#line 1026 "gram.y"
    {}
    break;

  case 355:

/* Line 1806 of yacc.c  */
#line 1027 "gram.y"
    {}
    break;

  case 356:

/* Line 1806 of yacc.c  */
#line 1028 "gram.y"
    {}
    break;

  case 357:

/* Line 1806 of yacc.c  */
#line 1029 "gram.y"
    { (yyval.y_expr) = (yyvsp[(2) - (3)].y_expr); }
    break;

  case 358:

/* Line 1806 of yacc.c  */
#line 1030 "gram.y"
    { (yyval.y_expr) = make_un_expr(INDIR_OP, (yyvsp[(1) - (2)].y_expr)); }
    break;

  case 359:

/* Line 1806 of yacc.c  */
#line 1031 "gram.y"
    {}
    break;

  case 360:

/* Line 1806 of yacc.c  */
#line 1032 "gram.y"
    {}
    break;

  case 361:

/* Line 1806 of yacc.c  */
#line 1033 "gram.y"
    { (yyval.y_expr) = make_un_expr(NEW_OP, (yyvsp[(3) - (4)].y_expr)); }
    break;

  case 362:

/* Line 1806 of yacc.c  */
#line 1037 "gram.y"
    {}
    break;

  case 363:

/* Line 1806 of yacc.c  */
#line 1038 "gram.y"
    {}
    break;

  case 364:

/* Line 1806 of yacc.c  */
#line 1042 "gram.y"
    {}
    break;

  case 365:

/* Line 1806 of yacc.c  */
#line 1043 "gram.y"
    {}
    break;

  case 366:

/* Line 1806 of yacc.c  */
#line 1047 "gram.y"
    {}
    break;

  case 367:

/* Line 1806 of yacc.c  */
#line 1048 "gram.y"
    {}
    break;

  case 368:

/* Line 1806 of yacc.c  */
#line 1052 "gram.y"
    { (yyval.y_expr) = make_un_expr((yyvsp[(1) - (4)].y_unop), (yyvsp[(3) - (4)].y_expr)); }
    break;

  case 369:

/* Line 1806 of yacc.c  */
#line 1053 "gram.y"
    { (yyval.y_expr) = make_null_expr((yyvsp[(1) - (2)].y_nullop)); }
    break;

  case 370:

/* Line 1806 of yacc.c  */
#line 1054 "gram.y"
    { (yyval.y_expr) = make_un_expr((yyvsp[(1) - (4)].y_unop), (yyvsp[(3) - (4)].y_exprlist)->expr); }
    break;

  case 371:

/* Line 1806 of yacc.c  */
#line 1058 "gram.y"
    {}
    break;

  case 372:

/* Line 1806 of yacc.c  */
#line 1059 "gram.y"
    { (yyval.y_expr) = (yyvsp[(2) - (3)].y_expr); }
    break;

  case 373:

/* Line 1806 of yacc.c  */
#line 1063 "gram.y"
    { (yyval.y_nullop) = NULL_EOF_OP; }
    break;

  case 374:

/* Line 1806 of yacc.c  */
#line 1064 "gram.y"
    { (yyval.y_nullop) = NULL_EOLN_OP; }
    break;

  case 375:

/* Line 1806 of yacc.c  */
#line 1068 "gram.y"
    { (yyval.y_unop) = ABS_OP; }
    break;

  case 376:

/* Line 1806 of yacc.c  */
#line 1069 "gram.y"
    { (yyval.y_unop) = SQR_OP; }
    break;

  case 377:

/* Line 1806 of yacc.c  */
#line 1070 "gram.y"
    { (yyval.y_unop) = SIN_OP; }
    break;

  case 378:

/* Line 1806 of yacc.c  */
#line 1071 "gram.y"
    { (yyval.y_unop) = COS_OP; }
    break;

  case 379:

/* Line 1806 of yacc.c  */
#line 1072 "gram.y"
    { (yyval.y_unop) = EXP_OP; }
    break;

  case 380:

/* Line 1806 of yacc.c  */
#line 1073 "gram.y"
    { (yyval.y_unop) = LN_OP; }
    break;

  case 381:

/* Line 1806 of yacc.c  */
#line 1074 "gram.y"
    { (yyval.y_unop) = SQRT_OP; }
    break;

  case 382:

/* Line 1806 of yacc.c  */
#line 1075 "gram.y"
    { (yyval.y_unop) = ARCTAN_OP; }
    break;

  case 383:

/* Line 1806 of yacc.c  */
#line 1076 "gram.y"
    { (yyval.y_unop) = ARG_OP; }
    break;

  case 384:

/* Line 1806 of yacc.c  */
#line 1077 "gram.y"
    { (yyval.y_unop) = TRUNC_OP; }
    break;

  case 385:

/* Line 1806 of yacc.c  */
#line 1078 "gram.y"
    { (yyval.y_unop) = ROUND_OP; }
    break;

  case 386:

/* Line 1806 of yacc.c  */
#line 1079 "gram.y"
    { (yyval.y_unop) = CARD_OP; }
    break;

  case 387:

/* Line 1806 of yacc.c  */
#line 1080 "gram.y"
    { (yyval.y_unop) = ORD_OP; }
    break;

  case 388:

/* Line 1806 of yacc.c  */
#line 1081 "gram.y"
    { (yyval.y_unop) = CHR_OP; }
    break;

  case 389:

/* Line 1806 of yacc.c  */
#line 1082 "gram.y"
    { (yyval.y_unop) = ODD_OP; }
    break;

  case 390:

/* Line 1806 of yacc.c  */
#line 1083 "gram.y"
    { (yyval.y_unop) = EMPTY_OP; }
    break;

  case 391:

/* Line 1806 of yacc.c  */
#line 1084 "gram.y"
    { (yyval.y_unop) = POSITION_OP; }
    break;

  case 392:

/* Line 1806 of yacc.c  */
#line 1085 "gram.y"
    { (yyval.y_unop) = LASTPOSITION_OP; }
    break;

  case 393:

/* Line 1806 of yacc.c  */
#line 1086 "gram.y"
    { (yyval.y_unop) = LENGTH_OP; }
    break;

  case 394:

/* Line 1806 of yacc.c  */
#line 1087 "gram.y"
    { (yyval.y_unop) = TRIM_OP; }
    break;

  case 395:

/* Line 1806 of yacc.c  */
#line 1088 "gram.y"
    { (yyval.y_unop) = BINDING_OP; }
    break;

  case 396:

/* Line 1806 of yacc.c  */
#line 1089 "gram.y"
    { (yyval.y_unop) = DATE_OP; }
    break;

  case 397:

/* Line 1806 of yacc.c  */
#line 1090 "gram.y"
    { (yyval.y_unop) = TIME_OP; }
    break;

  case 398:

/* Line 1806 of yacc.c  */
#line 1094 "gram.y"
    { (yyval.y_unop) = UN_SUCC_OP; }
    break;

  case 399:

/* Line 1806 of yacc.c  */
#line 1095 "gram.y"
    { (yyval.y_unop) = UN_PRED_OP; }
    break;

  case 400:

/* Line 1806 of yacc.c  */
#line 1099 "gram.y"
    { (yyval.y_binop) = NE_OP;        }
    break;

  case 401:

/* Line 1806 of yacc.c  */
#line 1100 "gram.y"
    { (yyval.y_binop) = LE_OP;        }
    break;

  case 402:

/* Line 1806 of yacc.c  */
#line 1101 "gram.y"
    { (yyval.y_binop) = GE_OP;        }
    break;

  case 403:

/* Line 1806 of yacc.c  */
#line 1102 "gram.y"
    { (yyval.y_binop) = EQ_OP;        }
    break;

  case 404:

/* Line 1806 of yacc.c  */
#line 1103 "gram.y"
    { (yyval.y_binop) = LESS_OP;      }
    break;

  case 405:

/* Line 1806 of yacc.c  */
#line 1104 "gram.y"
    { (yyval.y_binop) = GREATER_OP;   }
    break;

  case 406:

/* Line 1806 of yacc.c  */
#line 1108 "gram.y"
    { (yyval.y_binop) = DIV_OP;     }
    break;

  case 407:

/* Line 1806 of yacc.c  */
#line 1109 "gram.y"
    { (yyval.y_binop) = MOD_OP;     }
    break;

  case 408:

/* Line 1806 of yacc.c  */
#line 1110 "gram.y"
    { (yyval.y_binop) = REALDIV_OP; }
    break;

  case 409:

/* Line 1806 of yacc.c  */
#line 1111 "gram.y"
    { (yyval.y_binop) = MUL_OP;     }
    break;

  case 410:

/* Line 1806 of yacc.c  */
#line 1115 "gram.y"
    { (yyval.y_binop) = SUB_OP; }
    break;

  case 411:

/* Line 1806 of yacc.c  */
#line 1116 "gram.y"
    { (yyval.y_binop) = ADD_OP; }
    break;

  case 412:

/* Line 1806 of yacc.c  */
#line 1120 "gram.y"
    {}
    break;

  case 413:

/* Line 1806 of yacc.c  */
#line 1124 "gram.y"
    {}
    break;

  case 414:

/* Line 1806 of yacc.c  */
#line 1125 "gram.y"
    {}
    break;

  case 415:

/* Line 1806 of yacc.c  */
#line 1129 "gram.y"
    {}
    break;

  case 416:

/* Line 1806 of yacc.c  */
#line 1130 "gram.y"
    {}
    break;

  case 417:

/* Line 1806 of yacc.c  */
#line 1134 "gram.y"
    {}
    break;

  case 418:

/* Line 1806 of yacc.c  */
#line 1135 "gram.y"
    {}
    break;

  case 419:

/* Line 1806 of yacc.c  */
#line 1139 "gram.y"
    {}
    break;

  case 420:

/* Line 1806 of yacc.c  */
#line 1140 "gram.y"
    {}
    break;

  case 421:

/* Line 1806 of yacc.c  */
#line 1144 "gram.y"
    {}
    break;

  case 422:

/* Line 1806 of yacc.c  */
#line 1145 "gram.y"
    {}
    break;

  case 423:

/* Line 1806 of yacc.c  */
#line 1149 "gram.y"
    {}
    break;

  case 424:

/* Line 1806 of yacc.c  */
#line 1153 "gram.y"
    {}
    break;

  case 425:

/* Line 1806 of yacc.c  */
#line 1154 "gram.y"
    {}
    break;

  case 426:

/* Line 1806 of yacc.c  */
#line 1158 "gram.y"
    {}
    break;

  case 427:

/* Line 1806 of yacc.c  */
#line 1159 "gram.y"
    {}
    break;

  case 428:

/* Line 1806 of yacc.c  */
#line 1160 "gram.y"
    {}
    break;

  case 429:

/* Line 1806 of yacc.c  */
#line 1164 "gram.y"
    {}
    break;

  case 430:

/* Line 1806 of yacc.c  */
#line 1165 "gram.y"
    {}
    break;

  case 431:

/* Line 1806 of yacc.c  */
#line 1169 "gram.y"
    {}
    break;

  case 432:

/* Line 1806 of yacc.c  */
#line 1170 "gram.y"
    {}
    break;

  case 433:

/* Line 1806 of yacc.c  */
#line 1174 "gram.y"
    {}
    break;



/* Line 1806 of yacc.c  */
#line 5596 "y.tab.c"
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
#line 1177 "gram.y"


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

