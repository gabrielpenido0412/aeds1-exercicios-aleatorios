#include <stdio.h>
int main(){
    int m,n,i;

    scanf("%d %d",&n,&m);
    int a[n],b[m],c[m+n];
    //vetor a
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //atribuindo pro vetor c
    for(i=0;i<n;i++){
        c[i]=a[i];
    }
    //vetor b
    for(i=0;i<m;i++){

        scanf("%d",&b[i]);
    }
    //atribuindo pro vetor c
    for(i=0;i<m;i++){
        c[i+n]=b[i];
    }
    //printando
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("\n");


    for(i=0;i<m;i++){
        printf("%d",b[i]);
    }
    printf("\n");
    for(i=0;i<m+n;i++){
        printf("%d",c[i]);
    }

}
