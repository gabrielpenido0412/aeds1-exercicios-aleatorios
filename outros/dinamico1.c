#include <stdio.h>
#include <stdlib.h>
int main() {
  int i,*p,n,cont1=0,cont2=0;
  scanf("%d",&n);
  p=(int*)malloc(n*sizeof(int));
  if (p == NULL) {
		printf("Memoria Indisponivel\n\n");
		exit(0);
	}
  for(i=0;i<n;i++){
    scanf("%d",p+i);
  }
  for(i=0;i<n;i++){

    printf("%d",*(p+i));
  }
  for(i=0;i<n;i++){
    if(p[i]%2==0){
        cont1++;
    }else{
        cont2++;
    }
  }
  printf("%d %d ",cont1,cont2);
}
