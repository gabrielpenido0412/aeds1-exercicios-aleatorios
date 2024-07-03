#include <stdio.h>


int main(){
    int N,i;
    scanf("%d",&N);
    float soma,v[N];
    int cont;
    soma=0;
    cont=0;
    for(i=0;i<N;i++){
        scanf("%f",&v[i]);
    }
     for(i=0;i<N;i++){
        if(v[i]<0){
            cont++;
        }else{
            soma+=v[i];
        }
    }
    printf("%d %.0f",cont,soma);
}
