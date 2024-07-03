#include <stdio.h>
int main(){
    float n1,n2,n3,n4;
    printf("Escreva 3 numeros em ordem crescente:");
    scanf("%f",&n3);
    scanf("%f",&n2);
    scanf("%f",&n1);
    printf("Escreva outro numero:");
    scanf("%f",&n4);
    if (n4>n3){
        printf("A ordem crescente eh %f %f %f %f",n4,n3,n2,n1);
    }else{
        if(n4<n3) && (n4>n2){
            printf("A ordem crescente eh %f %f %f %f",n3,n4,n2,n1);
        }
    }else{
        if(n4<n2) && (n4>n1){
            printf("A ordem crescente eh %f %f %f %f",n3,n2,n4,n1);
}
