#include <stdio.h>
int main(){
    //entradas: 56,13,5,7,99,5,-1
    int n,cont,cont5;
    cont=0;
    cont5=0;
    scanf("%d",&n);
    while(n!=1){
        if(n==5){
            cont5++;
            cont++;
        }else{
            cont++;
        }
         scanf("%d",&n);
         if(n==-1){
            break;
         }
    }
    printf("%d %d",cont,cont5);
}
