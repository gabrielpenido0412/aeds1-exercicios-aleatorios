#include <stdio.h>
#include <stdlib.h>
int main(){
    int cod,cont1,cont2,cont3,cont4,cont5,cont6,contvotos;
    float perct6;
    cont1=0;
    cont2=0;
    cont3=0;
    cont4=0;
    cont5=0;
    cont6=0;
    contvotos=0;
    do{
            scanf("%d",&cod);
            if(cod>0 && cod<=6){
                if(cod==1){
                    cont1++;
                }else if(cod==2){
                    cont2++;
                }else if(cod==3){
                    cont3++;
                }else if(cod==4){
                    cont4++;
                }else if(cod==5){
                    cont5++;
                }else if(cod==6){
                    cont6++;
                }
                contvotos++;
            }
            if(cod==0){
                break;
            }

    }while(cod!=0);
    if(contvotos > 0){
        printf("\n %d %d %d %d",cont1,cont2,cont3,cont4);
        printf("\n %d",cont5);
        perct6= (float) cont6*100/contvotos;
        printf("\n %.2f",perct6);
    }
}
