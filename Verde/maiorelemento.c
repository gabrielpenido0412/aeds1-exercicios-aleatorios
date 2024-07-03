#include<stdio.h>
int main(){
    int N,i;
    scanf("%d",&N);
    if(N>0){
        int v[N];
        for(i=0;i<N;i++){
            scanf("%d",&v[i]);
        }
        int maior=v[0];
        int ind=0;
        for(i=0;i<N;i++){
            if(maior<=v[i]){
                maior=v[i];
                ind=i;
            }
        }
        printf("%d %d",maior,ind);
    }else{
        printf("Erro");
        return 1;
    }
    return 0;
}
