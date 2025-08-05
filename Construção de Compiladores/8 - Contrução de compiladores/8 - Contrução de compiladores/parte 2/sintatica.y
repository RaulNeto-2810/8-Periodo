 // %glr-parser

%{
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
%}

%token VLR_STRING
%token VLR_CHARACTER

%token TK_ALGORITMO
%token TK_INICIO
%token TK_FIMALGORITMO
%token TK_VAR

 /* variáveis */
%token TK_TIPO_INTEIRO 
%token TK_TIPO_LITERAL
%token TK_TIPO_CARACTER
%token TK_TIPO_LOGICO
%token TK_TIPO_REAL
%token TK_TIPO_NUMERICO

 /* atribuicao */
%token TK_OP_ATRIB          // <-
 
 /* parenteses */
%token TK_OP                // (
%token TK_CP                // )

 /* definicao de variaveis */
%token TK_OP_VAR            // :
%token TK_VIRGULA           // ,
%token TK_PONTO_VIRGULA     // ;

 /* operadores logicos */
%token TK_OP_E              // e
%token TK_OP_NAO            // nao
%token TK_OP_OU             // ou
%token TK_OP_XOU            // xou
%token TK_CONST_FALSO       // falso
%token TK_CONST_VERDADEIRO  // verdadeiro

 /* operadores aritmeticos */
%token TK_OP_ADD            // +
%token TK_OP_SUB            // -
%token TK_UMINUS            // -
%token TK_OP_MUL            // *
%token TK_OP_DIV            // /
%token TK_OP_DIV_INT        // \
%token TK_OP_MOD            // %
%token TK_OP_EXP            // ^
 
 /* operadores relacionais */
%token TK_OP_GT             // >
%token TK_OP_GTEQ           // >=
%token TK_OP_LT             // <
%token TK_OP_LTEQ           // <=
%token TK_OP_EQ             //  =
%token TK_OP_NOTEQ          // !=

 /* desvios condicionais e de seleção múltipla */
%token TK_SE
%token TK_ENTAO
%token TK_SENAO
%token TK_FIMSE

%token TK_ESCOLHA
%token TK_CASO
%token TK_OUTROCASO
%token TK_FIMESCOLHA

 /* comandos de entrada e saída */
%token TK_LEIA
%token TK_ESCREVA
%token TK_ESCREVAL

 /* comandos de repetição */
 /* enquanto-faca */
%token TK_ENQUANTO
%token TK_FIMENQUANTO

 /* repita-ate */
%token TK_REPITA

 /* para-de-ate-faca */
%token TK_PARA
%token TK_DE
%token TK_ATE
%token TK_PASSO
%token TK_FACA
%token TK_FIMPARA

 /* funcoes */
%token TK_FUNCAO
%token TK_FIMFUNCAO
%token TK_RETORNE
%token TK_INTERROMPA

 /* procedimentos*/
%token TK_PROCEDIMENTO
%token TK_FIMPROCEDIMENTO

 /* funcoes pré-definidas */
 /* trigonometricas */
%token TK_SEN
%token TK_COS
%token TK_TAN
%token TK_ARCSEN
%token TK_ARCCOS
%token TK_ARCTAN
%token TK_COTAN
%token TK_GRAUPRAD
%token TK_RADPGRAU

 /* exponenciais */
%token TK_EXP
%token TK_RAIZQ

 /* logaritmicas */
%token TK_LOG
%token TK_LOGN

 /* manipulacao de strings */
%token TK_POS
%token TK_ASC
%token TK_COMPR
%token TK_COPIA
%token TK_MAIUSC
%token TK_MINUSC
%token TK_NUMPCARAC

 /* funções aleatórias */
%token TK_ALEATORIO
%token TK_RAND
%token TK_RANDI

 /* outras funções pre-definidas */
%token TK_ABS
%token TK_PI
%token TK_QUAD
%token TK_FUN_INT

 /* funcoes para depuração */
%token TK_CRONOMETRO
%token TK_DEBUG
%token TK_ECO
%token TK_PAUSA
%token TK_TIMER

 /* funcoes para manipulação de arquivos */
%token TK_ARQUIVO
%token TK_MENSAGEM

%token TK_NL

%token TK_NUM          // número real
%token TK_NUM_INT      // número inteiro
%token TK_ID           // identificador (variavel, etc)

 /* Ordem de precedência e associatividade */
 /* menor precedencia */
%right TK_OP_ATRIB
%right TK_VIRGULA 
%left TK_OP_OU
%left TK_OP_XOU
%left TK_OP_E
%right TK_OP_NAO
%nonassoc TK_OP_EQ TK_OP_NOTEQ TK_OP_GT TK_OP_GTEQ TK_OP_LT TK_OP_LTEQ
%left TK_OP_ADD TK_OP_SUB
%left TK_OP_MUL TK_OP_DIV TK_OP_DIV_INT TK_OP_MOD
%left TK_OP_EXP
%nonassoc TK_UMINUS
 /* maior precedencia */

%start programa

%%

programa
	: TK_ALGORITMO VLR_STRING endline 
	  bloco_var 
	  bloco_subalgo 
	  TK_INICIO TK_NL
	  endline comandos 
	  TK_FIMALGORITMO endline 
	{
		cout << endl
             << "/* Algoritmo: " << $2.label << " */"
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
             << $4.traducao
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
             << $10.traducao
             << endl
             << "   return 0;"
             << endl
             << "}"
             << endl;

	}
    ;

endline 
    :               { $$.traducao = ""; }
    | TK_NL endline {  }
	;

 /* ------------------------------- */
 /* declaracao de variaveis globais */
 /* ------------------------------- */

bloco_var 
	: /* vazio */         { $$.traducao = ""; }
    | TK_VAR endline lstids {  }
	| TK_VAR lstids endline {  }
	;

lstids 
    : /* vazio */                         { $$.traducao = ""; }
	| TK_ID TK_OP_VAR tipo endline lstids {  }
	| TK_ID TK_VIRGULA lstids    		  {  }
	;

tipo
    : TK_TIPO_INTEIRO  { $$.traducao = "int"; }
	| TK_TIPO_LITERAL  { $$.traducao = "char *";}
	| TK_TIPO_CARACTER { $$.traducao = "char"; }
	| TK_TIPO_LOGICO   { }
	| TK_TIPO_REAL     { $$.traducao = "double"; }
	| TK_TIPO_NUMERICO { $$.traducao = "float"; }
	;

 /* ------------------------------- */
 /* declaracao subalgoritmos        */
 /* ------------------------------- */

 /* TODO: revisar regras para subalgoritmos */
bloco_subalgo
    : /* vazio */                { $$.traducao = ""; }
	| subalgoritmo bloco_subalgo {  }
	;

subalgoritmo
	: TK_PROCEDIMENTO TK_ID TK_OP arglist TK_CP TK_NL 
	  bloco_var endline 
	  TK_INICIO endline 
	  comandos 
	  TK_FIMPROCEDIMENTO endline { 
		$$.traducao = "";
	   }

	| TK_FUNCAO TK_ID TK_OP arglist TK_CP auxfuncao bloco_var TK_INICIO TK_NL auxfuncao2 TK_FIMFUNCAO TK_NL endline {  }
	;

auxfuncao
	: TK_OP_VAR tipo TK_NL {  }
	| tipo TK_NL {  }

auxfuncao2
	: comandos retornofuncao {  }
	| retornofuncao {  }

arglist 
	: /* vazio */                  { $$.traducao = ""; } // 0 parametros
	| TK_ID TK_OP_VAR tipo arglist { $$.traducao = $3.traducao + " " + $1.label + $4.traducao ; } // 1 parametros
	| TK_PONTO_VIRGULA arglist     { $$.traducao = ";" + $2.traducao;  } // n parametros 
	| TK_VAR arglist               { $$.traducao = "cont" + $2.traducao;  } 
	;



retornofuncao
	: TK_RETORNE endline     {  }
	| TK_RETORNE exp endline {  }
	;

 /* ------------------------------------------- */
 /* declaracao comandos do algoritmo principal  */
 /* ------------------------------------------- */

comandos
	: /* vazio */      { $$.traducao = ""; }
    | comando endline  {  }
    | comandos comando {  }
	;

comando
	: exp {   }

	| TK_SE exp TK_ENTAO endline comandos TK_FIMSE endline {  }
	| TK_SE exp TK_ENTAO endline comandos TK_SENAO endline comandos TK_FIMSE {  }
	| TK_ENQUANTO exp TK_FACA TK_NL 
	     comandos 
	   TK_FIMENQUANTO endline {  }
	| TK_REPITA TK_NL 
	     comandos 
	   TK_ATE exp TK_NL {  }

	| TK_PARA TK_ID TK_DE TK_NUM_INT TK_ATE TK_NUM_INT passovariacao TK_FACA TK_NL endline
	  	comandos 
	    TK_FIMPARA endline { }

	| TK_PARA TK_ID TK_DE TK_NUM_INT TK_ATE TK_ID passovariacao TK_FACA TK_NL endline
	  	comandos 
	    TK_FIMPARA endline { }

	| TK_ESCOLHA TK_ID TK_NL 
	      caselist 
	    TK_FIMESCOLHA { }
	| comandoIO endline { }
	| predefinedFuncions endline { }
	| retornofuncao endline { }

	| TK_ID TK_OP TK_CP {   } 
	| TK_ID TK_OP constantlist TK_CP {   } 

	;

passovariacao
    : /* vazio */ { $$.traducao = ""; }
	| TK_PASSO TK_NUM_INT { }
	| TK_PASSO TK_OP_SUB TK_NUM_INT %prec TK_UMINUS { }
	;

caselist
	: TK_CASO constantlist TK_NL comandos caselist { }
	| TK_OUTROCASO TK_NL comandos { }
	; 

constantlist
	: constant                         { }
	| constant TK_VIRGULA constantlist { }
	;

constant
	: TK_NUM                        {  }
	| TK_NUM_INT                    {  }
 	| TK_ID                         {  }
 	| VLR_STRING                    {  }
 	| VLR_CHARACTER                 {  }
 	| TK_CONST_FALSO                {  }
 	| TK_CONST_VERDADEIRO           {  }
	;

explist
	: exp                    {  }
	| exp TK_VIRGULA explist {  }
	;

exp 
	: TK_ID TK_OP_ATRIB factor %prec TK_OP_ATRIB  {  } // atribuições
	| factor {  }
	| TK_ID {  }
	| exp TK_OP_ADD     exp {  }
	| exp TK_OP_SUB     exp {  }
    | exp TK_OP_LT      exp {  }
    | exp TK_OP_LTEQ    exp {  }
    | exp TK_OP_GT      exp {  }
    | exp TK_OP_GTEQ    exp {  }
    | exp TK_OP_EQ      exp {  }
    | exp TK_OP_NOTEQ   exp {  }
    | exp TK_OP_E       exp {  }
    | exp TK_OP_OU      exp {  }
    | exp TK_OP_XOU     exp {  }
	| TK_OP_NAO         exp {  }
	
	;

factor
	: term {  }
	| exp TK_OP_MUL     factor {  }
	| exp TK_OP_DIV     factor {  }
	| exp TK_OP_MOD     factor {  }
	| exp TK_OP_DIV_INT factor {  }
    | exp TK_OP_EXP     factor {  }
	;

term
	: constant                      {  }
 	| TK_OP exp TK_CP               {  }
 	| TK_OP_SUB exp %prec TK_UMINUS {  }
	| TK_ID TK_OP explist TK_CP     { }
	| predefinedFuncions            { }
	;



 comandoIO
 	: /* vazio */                             { $$.traducao = ""; }
 	| TK_ESCREVA TK_OP explist TK_CP endline  { }
	| TK_ESCREVAL TK_OP explist TK_CP endline { }
 	| TK_LEIA TK_OP TK_ID TK_CP endline       { }
 	;

 predefinedFuncions
 	: /* vazio */                                            { $$.traducao = ""; }
 	| TK_ABS TK_OP exp TK_CP                                 { } 
 	| TK_ARCCOS TK_OP exp TK_CP                              { } 
 	| TK_ARCSEN TK_OP exp TK_CP                              { } 
	| TK_ARCTAN TK_OP exp TK_CP                              { } 
	| TK_ASC TK_OP exp TK_CP                                 { }    
 	| TK_COMPR TK_OP exp TK_CP                               { }   
 	| TK_COPIA TK_OP exp TK_VIRGULA exp TK_VIRGULA exp TK_CP { }   
 	| TK_COS TK_OP exp TK_CP                                 { }
 	| TK_COTAN TK_OP exp TK_CP                               { } 
	| TK_EXP TK_OP exp TK_VIRGULA exp TK_CP                  { }     
 	| TK_GRAUPRAD TK_OP exp TK_CP                            { }
 	| TK_FUN_INT TK_OP exp TK_CP                             { }
 	| TK_INTERROMPA                                          { }
 	| TK_LOG  TK_OP exp TK_CP                                { }    
 	| TK_LOGN  TK_OP exp TK_CP                               { }   
	| TK_MAIUSC TK_OP exp TK_CP                              { }  
 	| TK_MINUSC  TK_OP exp TK_CP                             { } 
 	| TK_NUMPCARAC TK_OP exp TK_CP                           { }
	
 	| TK_PI                                                  {
 		double pi = 3.14159265358979323846; 
 		std::string s = "";
		s = std::to_string( pi );
 		$$.traducao = s; }
	
 	| TK_POS TK_OP exp TK_VIRGULA exp TK_CP                  { }    
 	| TK_QUAD TK_OP exp TK_CP                                { }
 	| TK_RADPGRAU TK_OP exp TK_CP                            { }
	| TK_RAIZQ TK_OP exp TK_CP                               { }   
 	| TK_RAND                                                { }    
 	| TK_RANDI TK_OP exp TK_CP                               { }  
 	| TK_SEN TK_OP exp TK_CP                                 { }
 	| TK_TAN TK_OP exp TK_CP                                 { }    

 	| TK_ALEATORIO  { }
 	| TK_CRONOMETRO { }
 	| TK_DEBUG      { }    
 	| TK_ECO        { }      
 	| TK_PAUSA      { }    
 	| TK_TIMER      { }    
 	| TK_ARQUIVO    { }
 	| TK_MENSAGEM   { }
 	;


%%

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