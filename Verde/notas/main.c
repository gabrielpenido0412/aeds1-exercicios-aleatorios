#include <stdio.h>
int main(){
    int N;
    float media;
    int i;
    scanf("%d",&N);
    float v[N];
    float maior,menor,soma;
    soma=0;
    for(i=0;i<N;i++){
        scanf("%f",&v[i]);
        if(v[i]<0){
            exit (0);
        }
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
    media= ((float)soma/N);
    printf("%.1f %.1f %.1f",maior,menor,media);
}
