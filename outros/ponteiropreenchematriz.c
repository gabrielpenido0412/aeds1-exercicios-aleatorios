#include <stdio.h>
#define NLIN 2
#define NCOL 3
int main(){
    int m[NLIN][NCOL];
    int *p;
    int i;
    *p=m;
    for(i=0;i<NLIN*NCOL;i++){
        scanf("%d",p+i);
    }
    for(i=0;i<NLIN*NCOL;i++){
        printf("%d \t",*(p+i));
    }
}

