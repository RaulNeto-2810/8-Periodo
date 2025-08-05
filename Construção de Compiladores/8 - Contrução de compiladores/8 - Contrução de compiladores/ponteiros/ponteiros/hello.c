#include <stdio.h>
#include <stdlib.h>

// funcao com passagem de parametro por REFERENCIA
void teste(int * parametro) {
    *parametro = *parametro + 10;
}

int main() {
    int x = 30;
    int * p = NULL;
    p = &x;

    printf("x = %X = %d\n", &x, x);
    printf("p = %X = %X\n", &p, p);

    *p = 35;

    printf("x = %X = %d\n", &x, x);
    printf("p = %X = %X\n", &p, p);

    teste( &x );

    printf("x = %X = %d\n", &x, x);

    return 0;
}