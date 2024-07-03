#include <stdio.h>
#include <stdlib.h>

// Procedimento para preencher o vetor
void preencherVetor(int tamanho, int *vetor) {
    printf("Digite os %d elementos do vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", vetor+i);
    }
}

int main() {
    int tamanho;

    // L� a quantidade de elementos N
    printf("Digite a quantidade de elementos N: ");
    scanf("%d", &tamanho);

    // Aloca dinamicamente um vetor de N elementos inteiros
    int *vetor;
    vetor = (int *)malloc(tamanho * sizeof(int));

    // Verifica se a aloca��o foi bem-sucedida
    if (vetor == NULL) {
        printf("Erro na aloca��o de mem�ria!\n");
        return 1;
    }

    // Chama o procedimento para preencher o vetor
    preencherVetor(tamanho, vetor);

    // Imprime o vetor preenchido
    printf("Vetor preenchido:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *(vetor+i));
    }
    printf("\n");

    // Libera a mem�ria alocada para o vetor
    free(vetor);

    return 0;
}
