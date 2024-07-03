#include <stdio.h>
int main (){
    int N,i,fat;
    scanf("%d",&N);
    fat=1;
    for(i=1;i<=N;i++){
        fat=fat*i;
    }
    printf("%d",fat);
}
