#include <stdio.h>
#include <string.h>
void leitura(int N,char strings[][50]){
    for(int i=0;i<N+1;i++){
        fgets(strings[i],50,stdin);

    }
}
void tamanho(int N,char strings[][50],int tam[]){
    for(int i=0;i<N+1;i++){
        int tamaux=strlen(strings[i]);
        tam[i]=tamaux;
    }
}
void maior(int N,int tam[],int *maiortam,int*indmaiortam){
    *maiortam=tam[0];
    *indmaiortam=0;
    for(int i=0;i<N;i++){
        if(tam[i]>*maiortam){
            *maiortam=tam[i];
            *indmaiortam=i;
        }
    }
}
int main(){
    int N,maiortam,indmaiortam;
    scanf("%d",&N);
    char strings[N][50];
    int resultado,tam[N];
    leitura(N,strings);
    char*maiorstring=strings[0];
    tamanho(N,strings,tam);
    maior(N,tam,&maiortam,&indmaiortam);
    for(int i=0;i<N+1;i++){
       if(strcmp(strings[i],maiorstring)>=0){
         maiorstring=strings[i];
       }
    }
    printf("%s",strings[indmaiortam]);
    printf("%s",maiorstring);
}
