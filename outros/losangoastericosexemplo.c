#include <stdio.h>
void printChar(char a,int n){
  for(int i=0;i<n;i++){
    printf("%c",a);
  }
}
void printLosango(int a,int b){
  printChar('0',a-5);
  printChar('*',2*b+1);
  printf("\n");
  if(a==5)
    return;
  printLosango(a-1,b+1);
  printChar('0',a-5);
  printChar('*',2*b+1);
  printf("\n");
}
int main(void) {
  int num;
  scanf("%d",&num);
  printLosango(num,0);
}
