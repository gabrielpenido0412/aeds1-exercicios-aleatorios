#include<stdio.h>
#include <string.h>
int main(){
    char nome[50],nome2[50];
    fgets(nome,50,stdin);
    fgets(nome2,50,stdin);
    int comp=strcmp(nome,nome2);
    printf("%d",comp);
}
