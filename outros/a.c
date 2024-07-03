/*
1) Fa�a um programa que realize o cadastro de contas banc�rias com as seguintes informa��es: n�mero
da conta, nome do cliente e saldo. O banco permitir� o cadastramento de apenas 15 contas e n�o po-
der� haver mais que uma conta com o mesmo n�mero. Crie o menu de op��es a seguir.
Menu de op��es:

1. Cadastrar contas.
2. Visualizar todas as contas de determinado cliente.
3. Excluir a conta com menor saldo (supondo a n�o exist�ncia de saldos iguais).
4. Sair.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 15

typedef struct {
    int num_conta;
    char nome[40];
    float saldo;
} Dados;

Dados Clientes[TAM];
int posConta = 0;

//Fun��o para imprimir menu de op��es
void Imprimir_Menu();

//Fun��o para cadastrar clientes
void Cadastro(Dados *Clientes, int *pos);

//Visualizar todas as contas de determinado cliente
void Visualizar(Dados *Clientes, int pos);

//Visualizar para excluir a cinta com menor saldo
void Excluir(Dados *Clientes, int *pos);

int main(int argc, char** argv) {
    int opcao;

    do {
        Imprimir_Menu();

        printf("Digite a op��o desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                Cadastro(Clientes, &posConta);
                break;
            case 2:
                Visualizar(Clientes, posConta);
                break;
            case 3:
                Excluir(Clientes, &posConta);
                break;
            case 4:
                printf("Programa encerrado. \n");
                break;
            default:
                printf("Op��o inv�lida. \n\n");
        }
    } while (opcao != 4);

    return (EXIT_SUCCESS);

}


//-----------------------------------------------------------------------------//

void Imprimir_Menu() {
    printf("MENU \n");
    printf("\t 1. Cadastrar contas; \n");
    printf("\t 2. Visualizar todas as contas de determinado cliente; \n");
    printf("\t 3. Excluir a conta com menor saldo; \n");
    printf("\t 4. Sair \n\n");
}

//-----------------------------------------------------------------------------//

void Cadastro(Dados *Clientes, int *pos) {
    int Num_temp, i, achou = 0;

    printf("\n--------------------CADASTRO DE CLIENTES--------------------\n");

    if (*pos == TAM) {
        printf("Todas as contas ja foram cadastradas. \n");
    } else {
        printf("%d� Cliente \n", *pos + 1);

        /* O programa iria prosseguir somente quando o usuario digitar um n�mero de conta
         que ainda n�o existe */

        do {
            printf("\tDgite o n�mero da conta: ");
            scanf("%d", &Num_temp);
            achou = 0;

            for (i = 0; i < *pos + 1; i++) {
                if (Clientes[i].num_conta == Num_temp) {
                    achou = 1;
                }
            }
            if (achou == 1) {
                printf("Conta ja existente. Favor digitar um n�mero diferente. \n");
            }
        } while (achou != 0);

        Clientes[*pos].num_conta = Num_temp;

        printf("\tDgite o nome do cliente: ");
        setbuf(stdin, NULL);
        gets(Clientes[*pos].nome);

        printf("\tDigite seu saldo: ");
        scanf("%f", &Clientes[*pos].saldo);

        *pos = *pos + 1;
    }
    printf("---------------------------------------------------------------------\n");
}

//-----------------------------------------------------------------------------//

void Visualizar(Dados *Clientes, int pos) {
    char nome[40];
    int cont = 0, i;

    printf("\n--------------VISUALIZAR CONTAS DE DETERMINADO CLIENTE-------------\n\n");

    printf("Digite o nome que deseja procurar: ");
    setbuf(stdin, NULL);
    gets(nome);

    for (i = 0; i < pos + 1; i++) {
        if (strcmp(nome, Clientes[i].nome) == 0) {
            cont++;
        }
    }

    if (cont == 0) {
        printf("Conta n�o existente. \n");
    } else {
        printf("O cliente %s possui %d contas em seu nome. \n", nome, cont);
    }

    printf("---------------------------------------------------------------------\n");
}
//-----------------------------------------------------------------------------//

void Excluir(Dados *Clientes, int *pos) {
    float menor_saldo = Clientes[0].saldo;
    int i, pos_menor;

    for (i = 0; i < *pos; i++) {
        if (Clientes[i].saldo < menor_saldo) {
            menor_saldo = Clientes[i].saldo;
            pos_menor = i;
        }
    }

    Clientes[pos_menor].num_conta = Clientes[*pos].num_conta;
    //Clientes[pos_menor].nome = Clientes[i].nome;
    Clientes[pos_menor].saldo = Clientes[*pos].saldo;
    printf("Conta excluida. \n");

    *pos = *pos - 1;

}
//-----------------------------------------------------------------------------//
