TK_OP_EXP%option nounput noinput
%option noyywrap nodefault 
%option yylineno 

%{

/*
 * Referencia: https://stackoverflow.com/questions/26854374/how-do-i-use-yy-bs-lineno-and-yy-bs-column-in-flex
 *
 * WARNINGS:
 *   1. Reentrant scanners define yycolumn
 *      Only use this in a non-reentrant scanner
 *   2. This will not work if you use `yyless()` or `yymore()`.
 */
int yycolumn = 1;

/* Forward declarations */
void report(const char * tokentype, int line, int column);

/* This is executed before every action. */
#define YY_USER_ACTION                                                   \
  start_line = prev_yylineno;                                            \
  start_column = yycolumn;                                               \
  if (yylineno == prev_yylineno) {                                       \
    yycolumn += yyleng;                                                  \
  } else {                                                               \
    for (yycolumn = 1; yytext[yyleng - yycolumn] != '\n'; ++yycolumn){ } \
    prev_yylineno = yylineno;                                            \
  }

/* Any indented text before the first rule goes at the top of the lexer.  */
int start_line;
int start_column;
int prev_yylineno = yylineno;
%}




%{
#include <string>
#include <iostream>

#define VALUE    0 /* valor de uma constante */
#define KEYWORD  1 /* palavra-chave */
#define OPERATOR 2 /* operador */
#define TKID     3 /* token (constante ou identificador) */
#define TKNUM    4 /* token (constante ou identificador) */

/*  */
void debug(string lexema, int start_line, int start_column, int tipo, string token);
%}

ESPACO [ \t]
DIGITO [0-9]
LETRA [A-Za-z]

CHARACTER \'[^\']*\'
STRING \"[^\"\']*\"

DELIM {ESPACO}+
INTEIRO {DIGITO}+
REAL {INTEIRO}+("."{INTEIRO}+)?
ID {LETRA}({LETRA}|{INTEIRO}|[_])*

%%

 /* atribuicao */
"<-"        { debug(yytext, start_line, start_column, OPERATOR, "TK_OP_ATRIB"); return TK_OP_ATRIB; }

 /* definicao de variaveis */
":"         { debug(yytext, start_line, start_column, OPERATOR, "TK_OP_VAR"); return TK_OP_VAR; }
","         { debug(yytext, start_line, start_column, OPERATOR, "TK_VIRGULA"); return TK_VIRGULA; }
";"         { debug(yytext, start_line, start_column, OPERATOR, "TK_PONTO_VIRGULA"); return TK_PONTO_VIRGULA; }

 /* parenteses */
"("         { debug(yytext, start_line, start_column, OPERATOR, "TK_OP"); return TK_OP; }
")"         { debug(yytext, start_line, start_column, OPERATOR, "TK_CP"); return TK_CP; }

 /* operadores logicos */
e           { debug(yytext, start_line, start_column, OPERATOR, "TK_OP_E"); return TK_OP_E; }
nao         { debug(yytext, start_line, start_column, OPERATOR, "TK_OP_NAO"); return TK_OP_NAO; }
ou          { debug(yytext, start_line, start_column, OPERATOR, "TK_OP_OU"); return TK_OP_OU; }
xou         { debug(yytext, start_line, start_column, OPERATOR, "TK_OP_XOU"); return TK_OP_XOU; }
falso       { debug(yytext, start_line, start_column, OPERATOR, "TK_CONST_FALSO"); return TK_CONST_FALSO; }
verdadeiro  { debug(yytext, start_line, start_column, OPERATOR, "TK_CONST_VERDADEIRO"); return TK_CONST_VERDADEIRO; }

 /* operadores aritmeticos */
"+"          { debug(yytext, start_line, start_column, OPERATOR, "TK_OP_ADD"); return TK_OP_ADD; }
"-"          { debug(yytext, start_line, start_column, OPERATOR, "TK_OP_SUB"); return TK_OP_SUB; }
"*"          { debug(yytext, start_line, start_column, OPERATOR, "TK_OP_MUL"); return TK_OP_MUL; }
"/"          { debug(yytext, start_line, start_column, OPERATOR, "TK_OP_DIV"); return TK_OP_DIV; }
"\\"         { debug(yytext, start_line, start_column, OPERATOR, "TK_OP_DIV_INT"); return TK_OP_DIV_INT; }
"%"          { debug(yytext, start_line, start_column, OPERATOR, "TK_OP_MOD"); return TK_OP_MOD; }
"^"          { debug(yytext, start_line, start_column, OPERATOR, "TK_OP_EXP"); return TK_OP_EXP; }
 /* operadores relacionais */
">"          { debug(yytext, start_line, start_column, OPERATOR, "TK_OP_GT"); return  TK_OP_GT; }
">="         { debug(yytext, start_line, start_column, OPERATOR, "TK_OP_GTEQ"); return  TK_OP_GTEQ; }
"<"          { debug(yytext, start_line, start_column, OPERATOR, "TK_OP_LT"); return  TK_OP_LT; }
"<="         { debug(yytext, start_line, start_column, OPERATOR, "TK_OP_LTEQ"); return  TK_OP_LTEQ; }
"="  | "=="  { debug(yytext, start_line, start_column, OPERATOR, "TK_OP_EQ"); return  TK_OP_EQ; }
"<>" | "!="  { debug(yytext, start_line, start_column, OPERATOR, "TK_OP_NOTEQ"); return  TK_OP_NOTEQ; }


algoritmo    { debug(yytext, start_line, start_column, KEYWORD, "TK_ALGORITMO"); return TK_ALGORITMO; }
inicio       { debug(yytext, start_line, start_column, KEYWORD, "TK_INICIO"); return TK_INICIO; }
fimalgoritmo { debug(yytext, start_line, start_column, KEYWORD, "TK_FIMALGORITMO"); return TK_FIMALGORITMO; }
var          { debug(yytext, start_line, start_column, KEYWORD, "TK_VAR"); return TK_VAR; }

 /* variáveis */
inteiro      { debug(yytext, start_line, start_column, KEYWORD, "TK_TIPO_INTEIRO"); return TK_TIPO_INTEIRO; }
literal      { debug(yytext, start_line, start_column, KEYWORD, "TK_TIPO_LITERAL"); return TK_TIPO_LITERAL; }
caractere |
caracter     { debug(yytext, start_line, start_column, KEYWORD, "TK_TIPO_CARACTER"); return TK_TIPO_CARACTER; }
logico       { debug(yytext, start_line, start_column, KEYWORD, "TK_TIPO_LOGICo"); return TK_TIPO_LOGICO; }

real         { debug(yytext, start_line, start_column, KEYWORD, "TK_TIPO_REAL"); return TK_TIPO_REAL; }
numerico     { debug(yytext, start_line, start_column, KEYWORD, "TK_TIPO_NUMERICO"); return TK_TIPO_NUMERICO; }

 /* desvios condicionais e de seleção múltipla */
se            { debug(yytext, start_line, start_column, KEYWORD, "TK_SE"); return TK_SE; }
entao         { debug(yytext, start_line, start_column, KEYWORD, "TK_ENTAO"); return TK_ENTAO; }
senao         { debug(yytext, start_line, start_column, KEYWORD, "TK_SENAO"); return TK_SENAO; }
fimse         { debug(yytext, start_line, start_column, KEYWORD, "TK_FIMSE"); return TK_FIMSE; }
escolha       { debug(yytext, start_line, start_column, KEYWORD, "TK_ESCOLHA"); return TK_ESCOLHA; }
caso          { debug(yytext, start_line, start_column, KEYWORD, "TK_CASO"); return TK_CASO; }
outrocaso     { debug(yytext, start_line, start_column, KEYWORD, "TK_OUTROCASO"); return TK_OUTROCASO; }
fimescolha    { debug(yytext, start_line, start_column, KEYWORD, "TK_FIMESCOLHA"); return TK_FIMESCOLHA; }

 /* comandos de entrada e saída */
leia          { debug(yytext, start_line, start_column, KEYWORD, "TK_LEIA"); return TK_LEIA; }
escreva       { debug(yytext, start_line, start_column, KEYWORD, "TK_ESCREVA"); return TK_ESCREVA; }
escreval      { debug(yytext, start_line, start_column, KEYWORD, "TK_ESCREVAL"); return TK_ESCREVAL; }

 /* comandos de repetição */
 /* enquanto-faca */
enquanto      { debug(yytext, start_line, start_column, KEYWORD, "TK_ENQUANTO"); return TK_ENQUANTO; }
fimenquanto   { debug(yytext, start_line, start_column, KEYWORD, "TK_FIMENQUANTO"); return TK_FIMENQUANTO; }

 /* repita-ate */
repita        { debug(yytext, start_line, start_column, KEYWORD, "TK_REPITA"); return TK_REPITA; }

 /* para-de-ate-faca */
para          { debug(yytext, start_line, start_column, KEYWORD, "TK_PARA"); return TK_PARA; }
de            { debug(yytext, start_line, start_column, KEYWORD, "TK_DE"); return TK_DE; }
ate           { debug(yytext, start_line, start_column, KEYWORD, "TK_ATE"); return TK_ATE; }
passo         { debug(yytext, start_line, start_column, KEYWORD, "TK_PASSO"); return TK_PASSO; }
faca          { debug(yytext, start_line, start_column, KEYWORD, "TK_FACA"); return TK_FACA; }
fimpara       { debug(yytext, start_line, start_column, KEYWORD, "TK_FIMPARA"); return TK_FIMPARA; }

 /* funcoes */
funcao        { debug(yytext, start_line, start_column, KEYWORD, "TK_FUNCAO"); return TK_FUNCAO; }
retorne       { debug(yytext, start_line, start_column, KEYWORD, "TK_RETORNE"); return TK_RETORNE; }
fimfuncao     { debug(yytext, start_line, start_column, KEYWORD, "TK_FIMFUNCAO"); return TK_FIMFUNCAO; }

interrompa    { debug(yytext, start_line, start_column, KEYWORD, "TK_INTERROMPA"); return TK_INTERROMPA; }

 /* procedimentos*/
procedimento    { debug(yytext, start_line, start_column, KEYWORD, "TK_PROCEDIMENTO"); return TK_PROCEDIMENTO; }
fimprocedimento { debug(yytext, start_line, start_column, KEYWORD, "TK_FIMPROCEDIMENTO"); return TK_FIMPROCEDIMENTO; }

 /* funcoes pré-definidas */
 /* trigonometricas */
sen          { debug(yytext, start_line, start_column, KEYWORD, "TK_SEN"); return TK_SEN; }           /* Sen (valor : real) : real       Seno  */
cos          { debug(yytext, start_line, start_column, KEYWORD, "TK_COS"); return TK_COS; }           /* Cos (valor : real) : real       Cosseno  */
tan          { debug(yytext, start_line, start_column, KEYWORD, "TK_TAN"); return TK_TAN; }           /* Tan (valor : real) : real       Tangente */
arcsen       { debug(yytext, start_line, start_column, KEYWORD, "TK_ARCSEN"); return TK_ARCSEN; }     /* Arcsen (valor : real) : real    Arco seno  */
arccos       { debug(yytext, start_line, start_column, KEYWORD, "TK_ARCCOS"); return TK_ARCCOS; }     /* Arccos (valor : real) : real    Arco cosseno  */
arctan       { debug(yytext, start_line, start_column, KEYWORD, "TK_ARCTAN"); return TK_ARCTAN; }     /* Arctan (valor : real) : real    Arco tangente  */
cotan        { debug(yytext, start_line, start_column, KEYWORD, "TK_COTAN"); return TK_COTAN; }       /* Cotan (valor : real) : real     Co-tangente  */
grauprad     { debug(yytext, start_line, start_column, KEYWORD, "TK_GRAUPRAD"); return TK_GRAUPRAD; } /* Grauprad (valor : real) : real  Converte grau para radiano */
radpgrau     { debug(yytext, start_line, start_column, KEYWORD, "TK_RADPGRAU"); return TK_RADPGRAU; } /* Radpgrau (valor : real) : real  Converte Radiano para grau.  */

 /* exponenciais */
exp          { debug(yytext, start_line, start_column, KEYWORD, "TK_EXP"); return TK_EXP; }     /* Exp (<base>,<expoente>)           Potenciação  */
raizq        { debug(yytext, start_line, start_column, KEYWORD, "TK_RAIZQ"); return TK_RAIZQ; } /* Raizq (valor : real) : real       Raiz quadrada  */

 /* logaritmicas */
log          { debug(yytext, start_line, start_column, KEYWORD, "TK_LOG"); return TK_LOG; }   /* Log (valor : real) : real           Logaritmo de base 10  */
logn         { debug(yytext, start_line, start_column, KEYWORD, "TK_LOGN"); return TK_LOGN; } /* Logn (valor : real) : real          Logaritmo natural (ln)  */

 /* manipulacao de strings */
pos          { debug(yytext, start_line, start_column, KEYWORD, "TK_POS"); return TK_POS; }             /* Pos (subc, c : caracter) : inteiro                           Retorna a posição do caractere.  */
asc          { debug(yytext, start_line, start_column, KEYWORD, "TK_ASC"); return TK_ASC; }             /* Asc (s : caracter) : inteiro                                 Retorna o código ASCII  */
compr        { debug(yytext, start_line, start_column, KEYWORD, "TK_COMPR"); return TK_COMPR; }         /* Compr (c : caracter) : inteiro                               Retorna a dimensão do caractere  */
copia        { debug(yytext, start_line, start_column, KEYWORD, "TK_COPIA"); return TK_COPIA; }         /* Copia (c : caracter , posini, posfin : inteiro) : caracter   Copia um determinado trecho do caractere  */
maiusc       { debug(yytext, start_line, start_column, KEYWORD, "TK_MAIUSC"); return TK_MAIUSC; }       /* Maiusc (c : caracter) : caracter                             Converte em Maiúscula  */
minusc       { debug(yytext, start_line, start_column, KEYWORD, "TK_MINUSC"); return TK_MINUSC; }       /* Minusc (c : caracter) : caracter                             Converte em Minúscula  */
numpcarac    { debug(yytext, start_line, start_column, KEYWORD, "TK_NUMPCARAC"); return TK_NUMPCARAC; } /* Numpcarac (n : inteiro ou real) : caracter                   Converte um numero inteiro ou real para caractere  */

 /* funções aleatórias */
aleatorio    { debug(yytext, start_line, start_column, KEYWORD, "TK_ALEATORIO"); return TK_ALEATORIO; }
rand         { debug(yytext, start_line, start_column, KEYWORD, "TK_RAND"); return TK_RAND; }    /* Rand : real                          Gerador de números aleatórios entre 0 e 1  */
randi        { debug(yytext, start_line, start_column, KEYWORD, "TK_RANDI"); return TK_RANDI; }  /* Randi (limite : inteiro) : inteiro   Gerador de números inteiros aleatórios com um imite determinado  */

 /* outras funções pre-definidas */
abs          { debug(yytext, start_line, start_column, KEYWORD, "TK_ABS"); return TK_ABS; }       /* Abs (valor : real) : real        Valor absoluto  */
pi           { debug(yytext, start_line, start_column, KEYWORD, "TK_PI"); return TK_PI; }         /* Pi : real                        Valor Pi  */
quad         { debug(yytext, start_line, start_column, KEYWORD, "TK_QUAD"); return TK_QUAD; }     /* Quad (valor : real) : real       Elevado ao quadrado  */
int          { debug(yytext, start_line, start_column, KEYWORD, "TK_FUN_INT"); return TK_FUN_INT; }   /* Int (valor : real) : inteiro     Converte o valor em inteiro  */

 /* funcoes para depuração */
cronometro   { debug(yytext, start_line, start_column, KEYWORD, "TK_CRONOMETRO"); return TK_CRONOMETRO; }
debug        { debug(yytext, start_line, start_column, KEYWORD, "TK_DEBUG"); return TK_DEBUG; }
eco          { debug(yytext, start_line, start_column, KEYWORD, "TK_ECO"); return TK_ECO; }
pausa        { debug(yytext, start_line, start_column, KEYWORD, "TK_PAUSA"); return TK_PAUSA; }
timer        { debug(yytext, start_line, start_column, KEYWORD, "TK_TIMER"); return TK_TIMER; }

 /* funcoes para manipulação de arquivos */
arquivo      { debug(yytext, start_line, start_column, KEYWORD, "TK_ARQUIVO"); return TK_ARQUIVO; }
mensagem     { debug(yytext, start_line, start_column, KEYWORD, "TK_MENSAGEM"); return TK_MENSAGEM; }

 /* vetores */
 /* <id> : vetor [<tamanho>] de <tipo> */
 /* tamanho[vi..vf] => vi = valor inicial do indice*/
 /*                    vf = valor final do indice*/
 /* <id>[<posição>] <- <valor> */

 /* matrizes */
 /* <id> : vetor [<posicao 1>,<posicao 2>] de <tipo> */
 /* tamanho[vi..vf] => vi = valor inicial do indice*/
 /*                    vf = valor final do indice*/
 /* <id>[<posicao 1>,<posicao 2>] <- <valor> */
 
 /* Ignorar espaços e quebras de linha */
 [ \t\r\f]+	{ /* ignora espacos em branco*/ }

"//".* 		{ /* ignora os comentarios */ }

\n		    { debug(yytext, start_line, start_column, VALUE, "TK_NL"); yylval.label = yytext; return TK_NL; }
{ID}		{ debug(yytext, start_line, start_column, TKID, "TK_ID"); yylval.label = yytext; return TK_ID; }
{INTEIRO}	{ debug(yytext, start_line, start_column, TKNUM, "TK_NUM_INT"); yylval.label = yytext; return TK_NUM_INT; }
{REAL}      { debug(yytext, start_line, start_column, TKNUM, "TK_NUM"); yylval.label = yytext; return TK_NUM; }
{CHARACTER} { debug(yytext, start_line, start_column, VALUE, "VLR_CHARACTER"); yylval.label = yytext; return VLR_CHARACTER; }
{STRING}    { debug(yytext, start_line, start_column, VALUE, "VLR_STRING"); yylval.label = yytext; return VLR_STRING; }

.           { printf("Caractere desconhecido: %s\n", yytext); 
	          //char buffer[1024];
	          //sprintf(buffer, "Caracter desconhecido: %s\n", *yytext);
	          //yyerror(buffer);
            }

%%

int main___(int argc, char* argv[]) {

    printf("Inicializando o scanner....\n");

    if (argc != 2) {
        printf("Uso: %s <arquivo de entrada>\n", argv[0]);
        return 1;
    }

    FILE* arquivo = fopen(argv[1], "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    yyin = arquivo;
    int token;
    string s_token = "";

    while ((token = yylex()) != 0) {
        // Processar cada token
        switch(token) {
            case VLR_STRING :
                s_token = "VLR_STRING";
                break;
            case VLR_CHARACTER :
                s_token = "VLR_CHARACTER";
                break;
            case TK_ALGORITMO :
                s_token = "TK_ALGORITMO";
                break;
            case TK_INICIO :
                s_token = "TK_INICIO";
                break;
            case TK_FIMALGORITMO :
                s_token = "TK_FIMALGORITMO";
                break;
            case TK_VAR :
                s_token = "TK_VAR";
                break;
            case TK_OP_VAR :
                s_token = "TK_OP_VAR";
                break;
            case TK_TIPO_INTEIRO  :
                s_token = "TK_TIPO_INTEIRO ";
                break;
            case TK_TIPO_LITERAL :
                s_token = "TK_TIPO_LITERAL";
                break;
            case TK_TIPO_CARACTER :
                s_token = "TK_TIPO_CARACTER";
                break;
            case TK_TIPO_LOGICO :
                s_token = "TK_TIPO_LOGICO";
                break;
            case TK_TIPO_NUMERICO :
                s_token = "TK_TIPO_NUMERICO";
                break;
            case TK_OP_ATRIB  :
                s_token = "TK_OP_ATRIB ";
                break;
            case TK_OP_E :
                s_token = "TK_OP_E";
                break;
            case TK_OP_NAO :
                s_token = "TK_OP_NAO";
                break;
            case TK_OP_OU :
                s_token = "TK_OP_OU";
                break;
            case TK_OP_XOU :
                s_token = "TK_OP_XOU";
                break;
            case TK_CONST_FALSO :
                s_token = "TK_CONST_FALSO";
                break;
            case TK_CONST_VERDADEIRO :
                s_token = "TK_CONST_VERDADEIRO";
                break;
            case TK_OP_ADD :
                s_token = "TK_OP_ADD";
                break;
            case TK_OP_SUB :
                s_token = "TK_OP_SUB";
                break;
            case TK_OP_MUL :
                s_token = "TK_OP_MUL";
                break;
            case TK_OP_DIV :
                s_token = "TK_OP_DIV";
                break;
            case TK_OP_DIV_INT :
                s_token = "TK_OP_DIV_INT";
                break;
            case TK_OP_MOD :
                s_token = "TK_OP_MOD";
                break;
            case TK_OP_EXP :
                s_token = "TK_OP_EXP";
                break;
            case TK_OP_GT :
                s_token = "TK_OP_GT";
                break;
            case TK_OP_GTEQ :
                s_token = "TK_OP_GTEQ";
                break;
            case TK_OP_LT :
                s_token = "TK_OP_LT";
                break;
            case TK_OP_LTEQ :
                s_token = "TK_OP_LTEQ";
                break;
            case TK_OP_EQ :
                s_token = "TK_OP_EQ";
                break;
            case TK_OP_NOTEQ :
                s_token = "TK_OP_NOTEQ";
                break;
            case TK_SE :
                s_token = "TK_SE";
                break;
            case TK_ENTAO :
                s_token = "TK_ENTAO";
                break;
            case TK_SENAO :
                s_token = "TK_SENAO";
                break;
            case TK_FIMSE :
                s_token = "TK_FIMSE";
                break;
            case TK_ESCOLHA :
                s_token = "TK_ESCOLHA";
                break;
            case TK_CASO :
                s_token = "TK_CASO";
                break;
            case TK_OUTROCASO :
                s_token = "TK_OUTROCASO";
                break;
            case TK_FIMESCOLHA :
                s_token = "TK_FIMESCOLHA";
                break;
            case TK_LEIA :
                s_token = "TK_LEIA";
                break;
            case TK_ESCREVA :
                s_token = "TK_ESCREVA";
                break;
            case TK_ESCREVAL :
                s_token = "TK_ESCREVAL";
                break;
            case TK_ENQUANTO :
                s_token = "TK_ENQUANTO";
                break;
            case TK_FIMENQUANTO :
                s_token = "TK_FIMENQUANTO";
                break;
            case TK_REPITA :
                s_token = "TK_REPITA";
                break;
            case TK_PARA :
                s_token = "TK_PARA";
                break;
            case TK_DE :
                s_token = "TK_DE";
                break;
            case TK_ATE :
                s_token = "TK_ATE";
                break;
            case TK_PASSO :
                s_token = "TK_PASSO";
                break;
            case TK_FACA :
                s_token = "TK_FACA";
                break;
            case TK_FIMPARA :
                s_token = "TK_FIMPARA";
                break;
            case TK_FUNCAO :
                s_token = "TK_FUNCAO";
                break;
            case TK_FIMFUNCAO :
                s_token = "TK_FIMFUNCAO";
                break;
            case TK_RETORNE :
                s_token = "TK_RETORNE";
                break;
            case TK_INTERROMPA :
                s_token = "TK_INTERROMPA";
                break;
            case TK_PROCEDIMENTO :
                s_token = "TK_PROCEDIMENTO";
                break;
            case TK_FIMPROCEDIMENTO :
                s_token = "TK_FIMPROCEDIMENTO";
                break;
            case TK_SEN :
                s_token = "TK_SEN";
                break;
            case TK_COS :
                s_token = "TK_COS";
                break;
            case TK_TAN :
                s_token = "TK_TAN";
                break;
            case TK_ARCSEN :
                s_token = "TK_ARCSEN";
                break;
            case TK_ARCCOS :
                s_token = "TK_ARCCOS";
                break;
            case TK_ARCTAN :
                s_token = "TK_ARCTAN";
                break;
            case TK_COTAN :
                s_token = "TK_COTAN";
                break;
            case TK_GRAUPRAD :
                s_token = "TK_GRAUPRAD";
                break;
            case TK_RADPGRAU :
                s_token = "TK_RADPGRAU";
                break;
            case TK_EXP :
                s_token = "TK_EXP";
                break;
            case TK_RAIZQ :
                s_token = "TK_RAIZQ";
                break;
            case TK_LOG :
                s_token = "TK_LOG";
                break;
            case TK_LOGN :
                s_token = "TK_LOGN";
                break;
            case TK_POS :
                s_token = "TK_POS";
                break;
            case TK_ASC :
                s_token = "TK_ASC";
                break;
            case TK_COMPR :
                s_token = "TK_COMPR";
                break;
            case TK_COPIA :
                s_token = "TK_COPIA";
                break;
            case TK_MAIUSC :
                s_token = "TK_MAIUSC";
                break;
            case TK_MINUSC :
                s_token = "TK_MINUSC";
                break;
            case TK_NUMPCARAC :
                s_token = "TK_NUMPCARAC";
                break;
            case TK_ALEATORIO :
                s_token = "TK_ALEATORIO";
                break;
            case TK_RAND :
                s_token = "TK_RAND";
                break;
            case TK_RANDI :
                s_token = "TK_RANDI";
                break;
            case TK_ABS :
                s_token = "TK_ABS";
                break;
            case TK_PI :
                s_token = "TK_PI";
                break;
            case TK_QUAD :
                s_token = "TK_QUAD";
                break;
            case TK_FUN_INT :
                s_token = "TK_FUN_INT";
                break;
            case TK_CRONOMETRO :
                s_token = "TK_CRONOMETRO";
                break;
            case TK_DEBUG :
                s_token = "TK_DEBUG";
                break;
            case TK_ECO :
                s_token = "TK_ECO";
                break;
            case TK_PAUSA :
                s_token = "TK_PAUSA";
                break;
            case TK_TIMER :
                s_token = "TK_TIMER";
                break;
            case TK_ARQUIVO :
                s_token = "TK_ARQUIVO";
                break;
            case TK_MENSAGEM :
                s_token = "TK_MENSAGEM";
                break;
            case TK_NL :
                s_token = "TK_NL";
                break;
            default:
                s_token = "";
        }
        //debug(s_token, KEYWORD);
        //cout << "" + s_token + ", " + yylval.label + ", " + yylval.traducao + "\n";
    }

    fclose(arquivo);

    printf("Finalizando o scanner....\n");
    return 0;
}


/*
            lexema : valor do lexema
        start_line : linha do codigo-fonte onde está o lexema
  int start_column : coluna do codigo-fonte onde está o lexema
              tipo : IGNORE!
             token : qual o token correspondente
*/
void debug(string lexema, int start_line, int start_column, int tipo, string token) {
    // formato de saida: [token, value] description
    if ( debugMode == 1 ) {
        string msg = "";
        if (lexema != "\n" ) {
            msg =  "[" + string(token) + "," + lexema + "] ";
        } else {
            msg = "[" + token + "] ";
        }
        printf("{ lin: %2d, col: %2d} ", start_line, start_column, msg);
        cout << msg << endl;
    }
}

/* informa localizacao do lexema identificado no arquivo (linha x coluna) */
void report(const char * tokentype, int line, int column) {
  printf("Encountered %s \"%.*s\" at %d:%d in %s\n", tokentype, (int)yyleng, yytext, line, column, curfilename);
}