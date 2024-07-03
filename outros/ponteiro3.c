#include <stdio.h>

int main() {
    // Declaração de duas variáveis inteiras
    int var1;
    int var2;

    // Declaração de ponteiros para as variáveis
    int *ptr1 = &var1;
    int *ptr2 = &var2;

    // Comparação dos endereços usando os ponteiros
    if (ptr1 > ptr2) {
        printf("%d", *ptr1);
    } else {
        printf("%d", *ptr2);
    }


}
