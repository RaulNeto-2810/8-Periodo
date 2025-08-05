
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

#include "calculadora.h"




double eval( struct ast * n ) {

	double v = 0.0;

	switch(n->nodetype) {
		case 'K':
			v = ((struct numval *)n)->number;
			break;
		case '+':
			v = eval(n->left) + eval(n->right);
			break;
		case '-':
			v = eval(n->left) - eval(n->right);
			break;
		case '*':
			v = eval(n->left) * eval(n->right);
			break;
		case '/':
			v = eval(n->left) / eval(n->right);
			break;
		case '~':
			v = - eval(n->left);
			break;
		default:
			printf("Erro interno: no desconhecido %c\n", n->nodetype);
	}

	return v;
}

void treefree( struct ast * n ) {
	switch( n->nodetype ) {
		case '+':
		case '-':
		case '*':
		case '/':
			treefree(n->left);
			treefree(n->right);
			break;
		case '~':
			treefree(n->left);
			break;
		case 'K':
			free(n);
			break;
		default:
			printf("Erro interno: no desconhecido %c\n", n->nodetype);
	}
}

void yyerror(char * s, ...) {
	va_list ap;
	va_start(ap, s);

	fprintf(stderr, "%d : error: ", yylineno );
	vfprintf(stderr, s, ap);
	fprintf(stderr, "\n" );
}

struct ast * newast( int nodetype, struct ast * left, struct ast * right ) {

	struct ast * n = (struct ast *) malloc(sizeof (struct ast));

	if ( !n ) {
		yyerror("out of memory!!!");
		exit( -2 );
	}

	n->nodetype = nodetype;
	n->left = left;
	n->right = right;

	return n;
}

struct ast * newnum( double value ) {

	struct numval * n = (struct numval *) malloc(sizeof (struct numval));

	if ( !n ) {
		yyerror("out of memory!!!");
		exit( -1 );
	}

	n->nodetype = 'K';
	n->number = value;

	return (struct ast *) n;
}



