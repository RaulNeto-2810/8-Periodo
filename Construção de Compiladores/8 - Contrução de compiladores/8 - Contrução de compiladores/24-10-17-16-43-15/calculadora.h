
extern int yylineno;     /* variável global do lexer (scanner) */
void yyerror(char * s, ...);

/* Definição da Arvore Sintática Abstrata */

/* definicao para nó da árvore sintática */
struct ast {
	int nodetype;
	struct ast * left;
	struct ast * right;
};

/* definicao para nó contendo valor numérico */
struct numval {
	int nodetype;    /* tipo: K */
	double number;
};

double eval( struct ast * );

void treefree( struct ast * );

struct ast * newast( int nodetype, struct ast * left, struct ast * right );

struct ast * newnum( double value );