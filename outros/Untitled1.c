#include <stdio.h>
#include <stdlib.h>
int main() {
int n, i, *ptr, sum = 0;
printf(�Digite a quantidade de n�meros:
");
n=5;
//alocando mem�ria
ptr = (int*) malloc(n * sizeof(int));
//se a mem�ria n�o tiver sido alocada
if(ptr == NULL) {
printf("Error na aloca��o din�mica");
exit(0);
}
printf(�Digite os n�meros: ");
for(i = 0; i < n; ++i) {
scanf("%d", ptr + i);
sum += *(ptr + i);
}
printf("Soma = %d", sum);
//desalocando mem�ria
free(ptr);
return 0;
}
