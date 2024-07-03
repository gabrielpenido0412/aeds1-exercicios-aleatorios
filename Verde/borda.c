#include<stdio.h>
#include<stdlib.h>
int bordersum(int m,int mat[][m],int n){
    int i,j,soma=0;
        if(n==0){
            return 0;
        }else if(n==1){
            return mat[0][0];
        }else{
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    if((i==0||i==n-1)||(j==0||j==n-1)){
                        soma+=mat[i][j];
                    }
                }
            }
            return soma;
        }
}
int main(){
    int result,m,n;
    scanf("%d %d",&m,&n);
    int matriz[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&matriz[i][j]);
        }
    }
    result=bordersum(m,matriz,n);
    printf("%d",result);
}
