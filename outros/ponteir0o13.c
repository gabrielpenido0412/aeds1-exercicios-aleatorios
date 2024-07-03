#include <stdio.h>
void preenche(int,int v[]);
int main(){
    int n;
    printf("n: ")
    scanf("%d",&n);
    int v[n];
    preenche(n,v);
}
void preenche(int n,int v[]){
    int *p=&v;
    for(int i=0;i<n;i++){
        scanf("%d",p+i);
    }
    for(int i=0;i<n;i++){
        printf("%d",*(p+i));
    }
}


