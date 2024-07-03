#include <stdio.h>
// Função para imprimir um caractere 'a' n vezes
void printChar(char a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", a);
    }
}

// Função recursiva para imprimir o losango
void printLosango(int a, int linha_atual) {
    // Calcula o número de espaços antes dos asteriscos
    int espacos = (a - linha_atual) / 2;

    // Imprime os espaços e asteriscos
    printChar(' ', espacos);
    printChar('*', linha_atual);
    printf("\n");
    // Caso base: se a linha atual for igual ao número total de linhas, retorna
    if (linha_atual  == a) {
        return;
    }

    // Chamada recursiva para a próxima linha (crescendo)
    printLosango(a, linha_atual + 2);
    // Imprime a linha atual novamente na volta da recursão (decrescendo)
    printChar(' ', espacos);
    printChar('*', linha_atual);
    printf("\n");
}

void printCharpar(char a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", a);
    }
}
/*
void printLosangopar(int a, int linha_atual) {
    // Calcula o número de espaços antes dos asteriscos
    int espacos = (a - linha_atual+1) / 2;

    // Imprime os espaços e asteriscos
    printCharpar(' ', espacos);
    printCharpar('*', linha_atual);
    printf("\n");

    // Caso base: se a linha atual for igual ao número total de linhas, retorna
    if (linha_atual+1  == a) {
        return;
    }

    // Chamada recursiva para a próxima linha (crescendo)
    printLosangopar(a, linha_atual + 2);
    // Imprime a linha atual novamente na volta da recursão (decrescendo)

    printCharpar(' ', espacos);
    printCharpar('*', linha_atual);
    printf("\n");
}
*/
int main(void) {
    int num;
    scanf("%d",&num);
    // Inicia a impressão do losango

        printLosango(num, 1);

    return 0;
}
