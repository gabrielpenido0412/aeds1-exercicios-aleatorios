#include<stdio.h>
#include<string.h>
#include <ctype.h>
void to_lowercase(char*str) {

  while(*str!='\0'){
    *str=tolower(*str);
    ++str;
  }
}
int main(){
    int cont,n,i;
    scanf("%d",&n);
    getchar();
    char alvo[50];

    gets(alvo);

    to_lowercase(alvo);
    char strings[n][500];
    for(i=0;i<n;i++){

        gets(strings[i]);

        to_lowercase(strings[i]);
    }
    cont=0;
    for (i=0;i<n;i++) {
        if (strstr(strings[i],alvo)!= NULL) {
            cont++;
        }
    }
    printf("%d",cont);

}
