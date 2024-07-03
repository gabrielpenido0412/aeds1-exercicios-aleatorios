#include <stdio.h>
int main(){
    int a,*p1;
    float b,*p2;
    scanf("%d %f",&a,&b);
    printf("%d %f",a,b);
    p1=&a;
    p2=&b;
    scanf("%d",p1);
    scanf("%f",p2);
    printf("%d %f",*p1,*p2);
}
