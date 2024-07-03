#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, *ptr, sum = 0;
    printf("Digite a quantidade de números:");
    scanf("%d", &n);
    //alocando memória
    ptr = (int*) malloc(n * sizeof(int));
    //se a memória não tiver sido alocada
    if(ptr == NULL) {
        printf("Error na alocação dinâmica");
        exit(0);
    }
    printf("Digite os números: ");
    for(i = 0; i < n; ++i) {
        //Isso atribui o valor pro endereço que o ptr aponta
        scanf("%d", ptr + i);
    //soma+ o valor do ponteiro. Ou seja, soma + o valor do endereço que o ptr aponta em cada indice(p+i).
        sum += *(ptr + i);
    }
    printf("Soma = %d", sum);
    //desalocando memória
    free(ptr);
    return 0;
    }

