#include <stdio.h>
#include <math.h>
int main (){
    float a,b,c,delta,x1,x2;
    //printf("Escreva o valor de a: ");
    scanf("%f",&a);
    //printf("Escreva o valor de b: ");
    scanf("%f",&b);
    //printf("Escreva o valor de c: ");
    scanf("%f",&c);
    delta= b*b - 4*a*c;
    if (delta<0){
        printf(" %.1f Nao existem raizes",delta);
        return 0;
    }
    if (delta==0){
        x1=((-b+ sqrt(delta))/2*a);
        //printf("O valor de delta eh A unica raiz eh %.1f",x1);
    }
    else{
        x1=((-b+ sqrt(delta))/2*a);
        x2=((-b- sqrt(delta))/2*a);
       // printf("As raizes sao %.1f e %.1f",x1,x2);
    }
    return 0;
}
