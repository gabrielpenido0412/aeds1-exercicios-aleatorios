#include <stdio.h>
#include <stdlib.h>
int main(){
    int N,i,cont,ponto;
    scanf("%d",&N);
    cont=0;
    ponto=0;
    if(N<=0){
        exit(0);
    }
    int solda[2*N];
    for(i=0;i<2*N;i++){
        scanf("%d",&solda[i]);
        //sai do progama se colocarem um valor invalido
        if(solda[i]>N||solda[i]<=0){
            exit(0);
        }
    }
}
