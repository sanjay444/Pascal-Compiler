#ifndef TREE_C
#define TREE_C
#include "types.h" 
#include "symtab.h" 
#include "message.h" 


extern ST_ID func_id_stack[BS_DEPTH];
extern int fi_top;

extern int base_offset_stack[BS_DEPTH];
extern int bo_top;


/* Possible expression types (tags) */
typedef enum {
    INTCONST, REALCONST, STRCONST, GID, LVAR, LFUN, NULLOP, UNOP, BINOP,
    FCALL, ERROR
} EXPR_TAG;

/* Possible nullary operators (tags) */
typedef enum {
    NULL_EOF_OP, NULL_EOLN_OP, NIL_OP
} EXPR_NULLOP;

/* Possible unary operators (tags) */
typedef enum {
    CONVERT_OP, DEREF_OP, NEG_OP, ORD_OP, CHR_OP, UN_SUCC_OP, UN_PRED_OP,
    NOT_OP, ABS_OP, SQR_OP, SIN_OP, COS_OP, EXP_OP, LN_OP, SQRT_OP, ARCTAN_OP,
    ARG_OP, TRUNC_OP, ROUND_OP, CARD_OP, ODD_OP, EMPTY_OP, POSITION_OP,
    LASTPOSITION_OP, LENGTH_OP, TRIM_OP, BINDING_OP, DATE_OP, TIME_OP,
    UN_EOF_OP, UN_EOLN_OP, INDIR_OP, UPLUS_OP, NEW_OP, DISPOSE_OP, ADDRESS_OP,
    SET_RETURN_OP
} EXPR_UNOP;

/* Possible binary operators (tags) */
typedef enum {
    ADD_OP, SUB_OP, MUL_OP, DIV_OP, MOD_OP, REALDIV_OP, EQ_OP, LESS_OP, LE_OP,
    NE_OP, GE_OP, GREATER_OP, SYMDIFF_OP, OR_OP, XOR_OP, AND_OP, BIN_SUCC_OP,
    BIN_PRED_OP, ASSIGN_OP
} EXPR_BINOP;

//definitions for a list of multiple variables
typedef struct var_id {
    ST_ID id;
    struct var_id *next;
} VAR_ID, *VAR_ID_LIST;

typedef struct {
    struct exprnode * expr;
    ST_ID id;
} EXPR_ID;

typedef struct {
    ST_ID	id;
    TYPE	type;
} FUNC_HEAD;

/* Used for lists of actual arguments to functions/procedures */
typedef struct exprlistnode {
    struct exprnode * expr;
    struct exprlistnode * next;
} EXPR_LIST_NODE, * EXPR_LIST;

/* The syntax tree node for an expression
   (includes the type of the expression)
*/
typedef struct exprnode {
    EXPR_TAG tag;
    TYPE type;
    union {
	long intval;
	double realval;
	char * strval;
	ST_ID gid;	    /* For global variables and global functions */
	struct {            /* For local variables and formal parameters */
	    BOOLEAN is_ref; /* TRUE if expr is a VAR (reference) parameter */
	    int offset;     /* storage location relative to frame pointer */
	    int link_count; /* Number of ref links to follow to find the var */
	} lvar;
	struct {            /* For local functions */
	    char * global_name; /* The assembler entry point label */
	    int link_count; /* Number of ref links to follow to find the fcn */
	} lfun;
	struct {            /* For nullary operators */
	    EXPR_NULLOP op;
	} nullop;
	struct {            /* For unary operators */
	    EXPR_UNOP op;
	    struct exprnode * operand;
	} unop;
	struct {            /* For binary operators */
	    EXPR_BINOP op;
	    struct exprnode * left, * right;
	} binop;
	struct {            /* For procedure and function calls */
	    struct exprnode * function;
	    EXPR_LIST args;
	} fcall;
    } u;
} EXPR_NODE, *EXPR;

/* Procedure and function prototype directives */
typedef enum { DIR_EXTERNAL, DIR_FORWARD } DIRECTIVE;


/* Records the current function identifier to detect return value assigns */
extern ST_ID func_id_stack[BS_DEPTH];
extern int fi_top;
   
/* 
This function creates a new type name data record and installs it in the symbol table. 
It takes two parameters; the name of the type name as a char array, and a type object.
If the type name is already installed in the symbol table a warning message is issued.
*/

void create_typename(ST_ID id,TYPE new_type);

void create_gdecl(VAR_ID_LIST list,TYPE type);

TYPE check_typename( ST_ID id );

//TYPE check_subrange( long a, long b);

TYPE check_array(TYPE array, INDEX_LIST i);

TYPE check_function_type(TYPE t);

PARAM_LIST check_param(PARAM_LIST p);

VAR_ID_LIST build_var_id_list (VAR_ID_LIST list,ST_ID id);

PARAM_LIST build_param_list(VAR_ID_LIST id_list,TYPE type,BOOLEAN value);

PARAM_LIST concatenate_param_list (PARAM_LIST list1,PARAM_LIST list2);

INDEX_LIST concatenate_index_lists (INDEX_LIST list1,TYPE type);

INDEX_LIST create_list_from_type(TYPE type);

void resolve_all_ptr();

/***** PROJECT 2  *******/
EXPR_LIST expr_list_reverse(EXPR_LIST list);
EXPR_LIST expr_prepend(EXPR expr, EXPR_LIST list);
TYPE check_subrange(EXPR lo, EXPR hi);
int process_var_decl(VAR_ID_LIST ids, TYPE type, int cur_offset);
void build_func_decl(ST_ID id, TYPE type, DIRECTIVE dir);
int enter_function(ST_ID id, TYPE type, char *global_func_name);
void install_params(PARAM_LIST list);
EXPR make_intconst_expr(long val, TYPE type);
EXPR make_realconst_expr(double val);
EXPR make_strconst_expr(char * str);
EXPR make_id_expr(ST_ID id);
EXPR make_null_expr(EXPR_NULLOP op);
EXPR make_un_expr(EXPR_UNOP op, EXPR sub);
EXPR make_bin_expr(EXPR_BINOP op, EXPR left, EXPR right);
EXPR make_fcall_expr(EXPR func, EXPR_LIST args);
EXPR make_error_expr();
EXPR check_assign_or_proc_call(EXPR lhs, ST_ID id, EXPR rhs);
BOOLEAN is_lval(EXPR expr);
void expr_free(EXPR expr);
char * get_global_func_name(ST_ID id);

#endif

