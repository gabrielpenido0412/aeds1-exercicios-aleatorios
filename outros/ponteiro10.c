#include <stdio.h>
int main(){
    int i,v[5];
    int *p=&v;
    for(i=0;i<5;i++){
        scanf("%d",p+i);
    }
    for(i=0;i<5;i++){
        printf("%d \n",((*(p+i)) *2));
    }
}
