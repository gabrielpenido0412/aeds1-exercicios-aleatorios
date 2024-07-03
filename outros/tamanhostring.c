#include<stdio.h>
#include <string.h>
//função que recebe uma string e devolve seu tamanho
//função que recebe duas strings e compara elas. Retorna 0 se forem diferentes e 1 se forem iguais
int tamanho(char *);
int compara(char *,char *);
int main(){
    char nome1[50],nome2[50];
    gets(nome1);
    gets(nome2);
    int result=compara(nome1,nome2);
    printf("%d",result);
}
int tamanho(char nome[]){
    int i=0;
    while(nome[i]!='\0'){
        i++;
    }
    return i;
}
int compara(char str1[],char str2[]){
    int tam1=tamanho(str1);
    int tam2=tamanho(str2);
    if(tam1!=tam2){
        return 0;
    }
    for(int i=0;i<tam1;i++){
        if(str1[i]!=str2[i]){
            return 0;
        }
    }
    return 1;
}
