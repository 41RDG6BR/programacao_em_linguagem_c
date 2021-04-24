#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Usar sizeof para descobrir o tamanho de um tipo ou variavel */
    printf("Tamanho de armazenamento para o tipo int: %d \n", sizeof(int));
    printf("Tamanho de armazenamento para o tipo short: %d \n", sizeof(short));
    printf("Tamanho de armazenamento para o tipo long: %d \n", sizeof(long));

    return 0;
}