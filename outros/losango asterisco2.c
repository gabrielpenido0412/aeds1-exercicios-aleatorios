#include <stdio.h>

// Função para imprimir um caractere 'a' n vezes
void printChar(char a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", a);
    }
}

// Função recursiva para imprimir o losango
void printLosango(int n, int currentLine, int isIncreasing) {
    // Calcula o número de espaços antes dos asteriscos
    int numSpaces = (n - currentLine) / 2;

    // Imprime os espaços e asteriscos
    printChar(' ', numSpaces);
    printChar('*', currentLine);
    printf("\n");

    // Caso base: se a linha atual for igual ao número total de linhas, retorna
    if (currentLine == n && !isIncreasing) {
        return;
    }

    // Chamada recursiva para a próxima linha
    if (isIncreasing) {
        if (currentLine + 2 <= n) {
            printLosango(n, currentLine + 2, 1);
        } else {
            printLosango(n, currentLine - 2, 0);
        }
    } else {
        printLosango(n, currentLine - 2, 0);
    }

    // Imprime a linha atual novamente na volta da recursão (decrescendo)
    if (isIncreasing && currentLine != n) {
        printChar(' ', numSpaces);
        printChar('*', currentLine);
        printf("\n");
    }
}

int main(void) {
    int num;

    // Lê o valor de num

    scanf("%d",&num);

    // Verifica se num é positivo
    if (num <= 0) {
        printf("O numero deve ser positivo.\n");
        return 1;
    }

    // Ajusta para números pares para o próximo ímpar
    if (num % 2 == 0) {
        num++;
    }

    // Inicia a impressão do losango
    printLosango(num, 1, 1);

    return 0;
}
