#include <stdio.h>
#include<stdlib.h>
int main() {
    int *ptr, i , n1, n2;
    printf("Digite o tamanho: ");
    scanf("%d", &n1);
    ptr = (int*) malloc(n1 * sizeof(int));
    printf("Endere�os de mem�ria previamentealocados:\n");
    for(i = 0; i < n1; ++i){
        printf("%p\n",ptr + i);
    }
    printf("\nDigite o novo tamanho: ");
    scanf("%d", &n2);
    // Realocando mem�ria
    ptr = realloc(ptr, n2 * sizeof(int));
    printf("Endere�os de mem�ria ap�s realoca��o:\n");
    for(i = 0; i < n2; ++i){
        printf("%p\n", ptr + i);
    }
    free(ptr);
    return 0;
}

