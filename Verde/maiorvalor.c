#include <stdio.h>
int main(){
    int i;
    int N;
    scanf("%d",&N);
    int v[N],maior,valormaior,ind,menor,indmenor;
    for(i=0;i<N;i++){
        scanf("%d",&v[i]);
    }
    maior=v[0];
    ind=0;
    menor=v[0];
    indmenor=0;
    for(i=1;i<N;i++){
         if(maior<v[i]){
            maior=v[i];
            ind=i;
         }
         if(menor>v[i]){
            menor=v[i];
            indmenor=i;
         }
    }
    printf("%d %d",maior,ind);
}
