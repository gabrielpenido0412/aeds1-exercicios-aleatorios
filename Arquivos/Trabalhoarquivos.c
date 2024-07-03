#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
typedef struct dados{
    int cod;
    char nome[50];
    char email[50];
    float sal;
}dados;

void cadastro(char f[]){
    dados colaboradores;
    printf("Digite seu codigo: ");
    scanf("%d",&colaboradores.cod);
    printf("Digite seu nome: ");
    scanf("%s",&colaboradores.nome);
    printf("Digite seu email: ");
    scanf("%s",&colaboradores.email);
    printf("Digite seu salario: ");
    scanf("%f",&colaboradores.sal);
    FILE*arq=fopen(f,"a");
    if(arq==NULL){
        printf("Erro na abertura do arquivo");
    }else{
        fprintf(arq,"%d %s %s %.2f \n",colaboradores.cod,colaboradores.nome,colaboradores.email,colaboradores.sal);
    }
    fclose(arq);
}

void alterarSalario(char f[]) {
    int codigo;
    float novoSalario;
    printf("Digite o codigo do funcionario que tera o salario alterado: ");
    scanf("%d",&codigo);
    printf("Digite o novo salario:");
    scanf("%f",&novoSalario);
    FILE *arq = fopen(f, "r+");
    if (!arq) {
        perror("Erro ao abrir arquivo");
        return;
    }

    dados colaborador;
    int encontrado = 0;

    FILE *temparq = fopen("temp.txt", "w");
    if (!temparq) {
        perror("Erro ao abrir arquivo temporário");
        fclose(arq);
        return;
    }

    while (fscanf(arq, "%d %s %s %f\n", &colaborador.cod, colaborador.nome, colaborador.email, &colaborador.sal) == 4) {
        if (colaborador.cod == codigo) {
            colaborador.sal = novoSalario;
            encontrado = 1;
        }
        fprintf(temparq, "%d %s %s %.2f\n", colaborador.cod, colaborador.nome, colaborador.email, colaborador.sal);
    }

    fclose(arq);
    fclose(temparq);

    remove(f);
    rename("temp.txt", f);

    if (!encontrado) {
        printf("Colaborador com código %d não encontrado.\n", codigo);
    }
}

void removerColaborador(char f[]) {
    int codigo;
    printf("Digite o codigo do funcionario que sera removido: ");
    scanf("%d",&codigo);
    FILE *arq= fopen(f, "r+");
    if (!arq) {
        perror("Erro ao abrir arquivo");
        return;
    }

    dados colaborador;
    int encontrado = 0;

    FILE *temparq = fopen("temp.txt", "w");
    if (!temparq) {
        perror("Erro ao abrir arquivo temporário");
        fclose(arq);
        return;
    }

    while (fscanf(arq, "%d %s %s %f\n", &colaborador.cod, colaborador.nome, colaborador.email, &colaborador.sal) == 4) {
        if (colaborador.cod == codigo) {
            encontrado = 1;
        } else {
            fprintf(temparq, "%d %s %s %.2f\n", colaborador.cod, colaborador.nome, colaborador.email, colaborador.sal);
        }
    }

    fclose(arq);
    fclose(temparq);

    remove(f);
    rename("temp.txt", f);

    if (!encontrado) {
        printf("Colaborador com código %d não encontrado.\n", codigo);
    }
}
void pesquisarColaborador(char f[],int codigo,char nome[]) {
    FILE *arq = fopen(f, "r");
    if (!arq) {
        perror("Erro ao abrir arquivo");
        return;
    }

    dados colaborador;
    int encontrado = 0;

    while (fscanf(arq, "%d %s %s %f", &colaborador.cod, colaborador.nome, colaborador.email, &colaborador.sal) == 4) {
        if (colaborador.cod == codigo || (nome != NULL && strcmp(colaborador.nome, nome) == 0)) {
            printf("Código: %d\nNome: %s\nEmail: %s\nSalário: %.2f\n", colaborador.cod, colaborador.nome, colaborador.email, colaborador.sal);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Colaborador não encontrado.\n");
    }

    fclose(arq);
}

void somaSalarios(char f[]) {
    FILE *arq = fopen(f, "r");
    if (!arq) {
        perror("Erro ao abrir arquivo");
        return;
    }

    dados colaborador;
    float soma = 0;

    while (fscanf(arq, "%d %s %s %f\n", &colaborador.cod, colaborador.nome, colaborador.email, &colaborador.sal) == 4) {
        soma += colaborador.sal;
    }

    printf("Soma de todos os salários: %.2f\n", soma);

    fclose(arq);
}

int main(){
    char nome[]={"colaboradores.txt"};
    int op;
    int codigo;
    char n[50];
    do{
       printf("1-Cadastrar\n");
       printf("2-Alterar\n");
       printf("3-Remover\n");
       printf("4-Pesquisar por nome e codigo\n");
       printf("5-Imprimir a soma de todos os salarios\n");
       printf("6-Sair\n");
       printf("Escolha uma opcao: ");
       scanf("%d",&op);
       switch(op){
        case 1:
            cadastro(nome);
        break;
        case 2:
            alterarSalario(nome);
        break;
        case 3:
            removerColaborador(nome);
        break;
        case 4:
            printf("Digite o codigo do funcionario que sera pesquisado: ");
            scanf("%d",&codigo);
            printf("Digite o nome do funcionario que sera pesquisado: ");
            scanf("%s",&n);
            pesquisarColaborador(nome,codigo,n);
        break;
        case 5:
            somaSalarios(nome);
        break;
        case 6:

        break;
        default:
            printf("Opcao invalida");
            getch();
        break;
       }
    }while(op!=6);
}
