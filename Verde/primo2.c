//Escreva um programa que receba dois n�meros inteiros e imprima todos os n�meros primos ENTRE os n�meros recebidos.
//O primeiro n�mero lido deve ser MENOR que o segundo.
#include <stdio.h>
int main(){
    int n1,n2,i,cont,j;
    scanf("%d %d",&n1,&n2);
    cont=0;
    if(n1<n2){
        for(i=n1+1;i<n2;i++){
            for(j=1;j<n2;j++){
                if(i%j==0){
                    cont++;
                }

            }
            if(cont>=0 && cont<=2){
               printf("%d ",i);
         }
         cont=0;

        }

   }


}
