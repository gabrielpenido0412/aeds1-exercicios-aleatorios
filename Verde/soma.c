#include<stdio.h>
int main(){
    int n;
    float s;
    s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        s+=((float)(i+(i-1))/i);
    }//fim do for
    printf("%.2f",s);

}
