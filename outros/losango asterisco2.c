#include <stdio.h>

// Fun��o para imprimir um caractere 'a' n vezes
void printChar(char a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", a);
    }
}

// Fun��o recursiva para imprimir o losango
void printLosango(int n, int currentLine, int isIncreasing) {
    // Calcula o n�mero de espa�os antes dos asteriscos
    int numSpaces = (n - currentLine) / 2;

    // Imprime os espa�os e asteriscos
    printChar(' ', numSpaces);
    printChar('*', currentLine);
    printf("\n");

    // Caso base: se a linha atual for igual ao n�mero total de linhas, retorna
    if (currentLine == n && !isIncreasing) {
        return;
    }

    // Chamada recursiva para a pr�xima linha
    if (isIncreasing) {
        if (currentLine + 2 <= n) {
            printLosango(n, currentLine + 2, 1);
        } else {
            printLosango(n, currentLine - 2, 0);
        }
    } else {
        printLosango(n, currentLine - 2, 0);
    }

    // Imprime a linha atual novamente na volta da recurs�o (decrescendo)
    if (isIncreasing && currentLine != n) {
        printChar(' ', numSpaces);
        printChar('*', currentLine);
        printf("\n");
    }
}

int main(void) {
    int num;

    // L� o valor de num

    scanf("%d",&num);

    // Verifica se num � positivo
    if (num <= 0) {
        printf("O numero deve ser positivo.\n");
        return 1;
    }

    // Ajusta para n�meros pares para o pr�ximo �mpar
    if (num % 2 == 0) {
        num++;
    }

    // Inicia a impress�o do losango
    printLosango(num, 1, 1);

    return 0;
}
