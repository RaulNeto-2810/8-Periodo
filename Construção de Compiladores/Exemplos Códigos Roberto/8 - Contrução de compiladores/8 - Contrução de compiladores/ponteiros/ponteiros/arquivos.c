#include <stdlib.h>
#include <stdio.h>

int main() {

    FILE * arquivo;

    arquivo = fopen("teste.txt", "a");

    if ( arquivo == NULL ) {
        printf("[ERRO] falha na abertura do arquivo\n");
        exit(12345);
    }

    /* manipular o arquivo */
    fputs("teste\n",arquivo);
    fputs("teste de novo\n",arquivo);

    fclose(arquivo);

    return 0;
}