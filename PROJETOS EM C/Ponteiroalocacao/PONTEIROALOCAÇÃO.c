#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    float *nota;
    float maior,menor;
    int i,indmaior,indmenor;
      //alocando a memória
    nota=(float*) malloc(10*sizeof(float));
    if(nota==NULL){
        exit(0);
    }
    float *notaaux=nota;
    srand((unsigned int) time (NULL));
    for(i=0;i<10;i++){
      notaaux[i]=rand()%10;	    }
      for(i=0;i<10;i++){
      printf("%f \n",notaaux[i]);
    }
    nota=(float*) realloc(nota,20*sizeof(float));
    notaaux=nota;
    for(i=10;i<20;i++){
          notaaux[i]=rand()%10;
        }
    notaaux=nota;
    maior=notaaux[0];
    menor=notaaux[0];
    indmenor=0;
    indmaior=0;
    for(i=0;i<20;i++){
        if(maior<notaaux[i]){
            maior=notaaux[i];
            indmaior=i;
       }
      if(menor>notaaux[i]){
        menor=notaaux[i];
        indmenor=i;
      }
       printf("%f \n",notaaux[i]);
    }
    printf("%f %p %f %p",maior,&indmaior,menor,&indmenor);
    free(nota);	  return 0;
}
