#include <stdio.h>
void cartelas(int m, int n,int v1[][m]){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&v1[i][j]);
        }
    }
}
void sorteados (int u,int v2[]){
    int i;
    for(i=0;i<u;i++){
        scanf("%d",&v2[i]);
    }
}
void calc_pontos(int n,int m,int v1[][m], int u,int v2[],int v3[]){
    int ponto=0,i,j;
    for(i=0;i<n;i++){
            ponto=0;
        for(j=0;j<m;j++){
            if(v1[j]==v2[i]){
                ponto++;
            }
        }
        v3[i]=ponto;
    }
}
void imprime_pontos(int n,int v3[]){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",v3[i]);
        printf("\n");
    }
}
int main(){
    int m,u,n;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&u);
    int v1[n][m],v2[u],v3[n];
    cartelas(m,n,v1);
    sorteados(u,v2);
    calc_pontos(n,m,v1,u,v2,v3);
    imprime_pontos(n,v3);
    return 0;
}
