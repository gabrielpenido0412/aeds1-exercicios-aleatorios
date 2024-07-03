#include <stdio.h>
int main(){
  int n1,n2;
  n1=5;
  n2=3;
  troca(&n1,&n2);
  printf("%d %d",n1,n2);
}
void troca(int *n1,int *n2){
    int aux;
    aux=*n1;
    *n1=*n2;
    *n2=aux;
}
