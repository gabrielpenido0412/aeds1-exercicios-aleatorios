#include <stdio.h>

int main() {
    // Declara��o de duas vari�veis inteiras
    int var1;
    int var2;

    // Declara��o de ponteiros para as vari�veis
    int *ptr1 = &var1;
    int *ptr2 = &var2;

    // Compara��o dos endere�os usando os ponteiros
    if (ptr1 > ptr2) {
        printf("%d", *ptr1);
    } else {
        printf("%d", *ptr2);
    }


}
