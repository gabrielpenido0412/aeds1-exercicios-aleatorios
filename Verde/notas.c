#include <stdio.h>
int main(){
    int N,soma;
    float media;
    int i;
    scanf("%f",&N);
    float v[N];
    float maior,menor;
    soma=0;
    for(i=0;i<N;i++){
        scanf("%f",&v[i]);
    }
    maior=v[0];
    menor=v[0];
    for(i=0;i<N;i++){
        soma+=v[i];
        if(maior<v[i]){
            maior=v[i];
        }
        if(menor>v[i]){
            menor=v[i];
        }
    }
    media= soma/N;
    printf("%d",maior);
    printf("%d",menor);
    printf("%f",media);

}
