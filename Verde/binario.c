#include <stdio.h>
#include <math.h>
int main(){
    int N;
    scanf("%d",&N);
    int soma,i,v[N];
    soma=0;
    for(i=0;i<N;i++){
        scanf("%d",&v[i]);
    }
    for(i=0;i<N;i++){
        if(v[i]==1){
            soma+=pow(2,i);
        }else if(v[i]==0){
            soma+=0;
        }else{
            exit (0);
        }
    }
    printf("%d",soma);

}
