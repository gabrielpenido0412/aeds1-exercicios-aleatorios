#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;
    int *A, *B, *C;

    // Leitura dos tamanhos N e M
    scanf("%d %d", &N, &M);

    // Alocação de memória para os vetores A e B
    A = (int *)malloc(N * sizeof(int));
    B = (int *)malloc(M * sizeof(int));

    if (A == NULL || B == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    // Leitura dos elementos do vetor A
    printf("Digite os elementos do vetor A: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Leitura dos elementos do vetor B
    printf("Digite os elementos do vetor B: ");
    for (int i = 0; i < M; i++) {
        scanf("%d", &B[i]);
    }

    // Alocação de memória para o vetor C
    C = (int *)malloc((N + M) * sizeof(int));

    if (C == NULL) {
        printf("Erro na alocação de memória.\n");
        free(A);
        free(B);
        return 1;
    }

    // Copiando elementos do vetor A para C
    for (int i = 0; i < N; i++) {
        C[i] = A[i];
    }

    // Copiando elementos do vetor B para C
    for (int i = 0; i < M; i++) {
        C[N + i] = B[i];
    }

    // Imprimindo os vetores
    printf("Vetor A: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Vetor B: ");
    for (int i = 0; i < M; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    printf("Vetor C: ");
    for (int i = 0; i < N + M; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    // Liberando a memória alocada
    free(A);
    free(B);
    free(C);

    return 0;
}

