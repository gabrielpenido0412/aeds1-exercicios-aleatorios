#include <stdio.h>
int main(){
    int A,B,M,C;
    scanf("%d",&M);
    scanf("%d",&A);
    scanf("%d",&B);
    if((40<=M) && (M<=110)&& (1<=A) && (A<M)&&(1<=B) && (B<M)&&(A!=B)){
        C=M-A-B;
        if(A>B && A>C){
            printf("%d",A);
        }
        if(B>A && B>C){
            printf("%d",B);
        }
          if(C>A && C>B){
            printf("%d",C);
          }
    }else{
        printf("Erro");
        return 1;
    }
    return 0;
}
