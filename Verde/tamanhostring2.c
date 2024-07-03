#include <stdio.h>
#include <string.h>
int main(){
    int N,maiortam,indmaiortam;
    scanf("%d",&N);
    char strings[N][50];
    int resultado;
    int tam[N];
    char *maiorstring=strings[0];
    leitura(N,strings);
    tamanho(N,strings,tam);
    maior(N,tam,&maiortam,&indmaiortam);
    for(int i=0;i<N+1;i++){
       if(strcmp(strings[i],maiorstring)>0){
         maiorstring=strings[i];
       }
    }
    printf("%s",strings[indmaiortam]);
    printf("%s",maiorstring);
}
