#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, *ptr, sum = 0;
    printf("Digite a quantidade de n�meros:");
    scanf("%d", &n);
    //alocando mem�ria
    ptr = (int*) malloc(n * sizeof(int));
    //se a mem�ria n�o tiver sido alocada
    if(ptr == NULL) {
        printf("Error na aloca��o din�mica");
        exit(0);
    }
    printf("Digite os n�meros: ");
    for(i = 0; i < n; ++i) {
        //Isso atribui o valor pro endere�o que o ptr aponta
        scanf("%d", ptr + i);
    //soma+ o valor do ponteiro. Ou seja, soma + o valor do endere�o que o ptr aponta em cada indice(p+i).
        sum += *(ptr + i);
    }
    printf("Soma = %d", sum);
    //desalocando mem�ria
    free(ptr);
    return 0;
    }

