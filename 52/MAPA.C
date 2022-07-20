#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 1

struct cadastro
{
    int codigo;
    char nome[50];
    char cpf[15];
    char vacina[20];
    char data[10];
    int lote[12];
};

int main(){
    setlocale(LC_ALL, "portuguese");
    struct cadastro ficha[TAM];
    int i, op, op1;
    char busca;
    do
    {
        printf("1 - Cadastro de vacinas\n");
        printf("2 - Lista de Aplicações\n");
        printf("3 - Consultar CPF\n");
        printf("4 - Sair\n");
        scanf("%d", &op);
        fflush(stdin);

    switch (op){
        case 1 :
            system("cls");
            for (i = 0;i < TAM ; i++){
                printf("Nome do paciente: ");
                gets(ficha[i].nome);
                printf("CPF o paciente: ");
                gets(ficha[i].cpf);
                
            }

    }

    }

}
