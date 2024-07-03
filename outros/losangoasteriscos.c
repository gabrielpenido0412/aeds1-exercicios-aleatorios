#include <stdio.h>
// Fun��o para imprimir um caractere 'a' n vezes
void printChar(char a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", a);
    }
}

// Fun��o recursiva para imprimir o losango
void printLosango(int a, int linha_atual) {
    // Calcula o n�mero de espa�os antes dos asteriscos
    int espacos = (a - linha_atual) / 2;

    // Imprime os espa�os e asteriscos
    printChar(' ', espacos);
    printChar('*', linha_atual);
    printf("\n");
    // Caso base: se a linha atual for igual ao n�mero total de linhas, retorna
    if (linha_atual  == a) {
        return;
    }

    // Chamada recursiva para a pr�xima linha (crescendo)
    printLosango(a, linha_atual + 2);
    // Imprime a linha atual novamente na volta da recurs�o (decrescendo)
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
    // Calcula o n�mero de espa�os antes dos asteriscos
    int espacos = (a - linha_atual+1) / 2;

    // Imprime os espa�os e asteriscos
    printCharpar(' ', espacos);
    printCharpar('*', linha_atual);
    printf("\n");

    // Caso base: se a linha atual for igual ao n�mero total de linhas, retorna
    if (linha_atual+1  == a) {
        return;
    }

    // Chamada recursiva para a pr�xima linha (crescendo)
    printLosangopar(a, linha_atual + 2);
    // Imprime a linha atual novamente na volta da recurs�o (decrescendo)

    printCharpar(' ', espacos);
    printCharpar('*', linha_atual);
    printf("\n");
}
*/
int main(void) {
    int num;
    scanf("%d",&num);
    // Inicia a impress�o do losango

        printLosango(num, 1);

    return 0;
}
