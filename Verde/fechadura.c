#include <stdio.h>
#include <stdlib.h>
int main(){
    int N,M,i;
    scanf("%d %d",&N,&M);
    int pinos[N];
    for(i=0;i<N;i++){
        scanf("%d",&pinos[i]);
    }
    int cont=0;
    i = 0;
  while( i < N-1 ){
    cont += abs(M-pinos[i]);
    if ( pinos[i] == pinos[i+1] ) i++;
    else pinos[i+1] += M-pinos[i];
    i++;
  }

  printf("%d\n",cont);
  return 0;
}


