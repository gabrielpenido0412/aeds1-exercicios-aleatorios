
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(int argc, char** argv) {
    int DIM=6;
    int i, j, matriz[DIM][DIM];
    srand(time(NULL));

    int Menor_Elemento_DiagSecundaria(int mat[][6]);

    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            matriz[i][j] = rand() % 36;
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMenor elemento da diagonal secundária é %d. \n", Menor_Elemento_DiagSecundaria(matriz));

    return (EXIT_SUCCESS);
}

int Menor_Elemento_DiagSecundaria(int mat[][6]) {
    int DIM=6;
    int i, j, v[DIM];


    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            if (i + j == (DIM - 1)) {
                //Os valores da diagonal secundaria será armazenado em um vetor
                v[i] = mat[i][j];

            }
        }
    }

    //Laço para pegar o menor valor da diagonal secundária
    int menor = v[0];
    for (i = 0; i < 6; i++) {
        if (v[i] < menor) {
            menor = v[i];
        }
    }

    return menor;

}
