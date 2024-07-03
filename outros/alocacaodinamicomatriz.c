int main()
{
    int NLIN, NCOL, *p;
    printf("Digite o numero de linhas e colunas: ");
    scanf("%d %d", &NLIN, &NCOL);
    p = (int*) malloc(NLIN * NCOL * sizeof(int));
    for(int i = 0; i < NLIN * NCOL; i++) {
        printf("Digite um numero: ");
        scanf("%d", p+i); //scanf("%d", &p[i]);
    }

        for(int i = 0; i < NLIN*NCOL; i++) {
                if(i % NCOL == 0){
                    printf("\n");
                }
            printf("%5d",*( p + i)); //printf("%5d", p[i*M + j]);

        }


    free(p);
    return 0;
}
