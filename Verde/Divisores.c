#include <stdio.h>
int main(){
    int i,N,cont;
    scanf("%d",&N);
    cont=0;
    for(i=1;i<=N;i++){
        if(N%i==0){
            cont++;
        }
    }
    printf("%d",N);
    printf("%d",cont);
}
