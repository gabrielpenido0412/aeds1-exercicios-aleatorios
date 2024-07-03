#include<stdio.h>
#include<math.h>
    int main(){
        float a,b,c,delta,x1,x2;
        printf("Escreva um valor para a: ");
        scanf("%f",&a);
        printf("Escreva um valor para b: ");
        scanf("%f",&b);
        printf("Escreva um valor para c: ");
        scanf("%f",&c);
        delta== pow(b,2)- 4*a*c;
        if (delta < 0) {
            printf("Nao existe solucao real");
            return 0;
        }
        if (delta==0) {
            x1 = (-b + sqrt(delta))/(2*a);
            printf("A unica raiz e %f",x1);
        }
        else{
            x2 = (-b - sqrt(delta))/(2*a);
            x1 = (-b + sqrt(delta))/(2*a);
            printf("Os valores das raizes sao %f e %f",x1,x2);

        }
        return 0;
    }
