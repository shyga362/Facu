#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome, vacina, data;
    int numLote, codigo;
    double cpf;
    
    printf("Digite seu nome: ");
    scanf("%c", &nome);
    printf("Digite o seu CPF: ");
    scanf("%f", &cpf);
    printf("Digte qual a sua vacina: ");
    scanf("%c", &vacina);
    printf("Digite a data da aplicacao: ");
    scanf("%c", &data);
    printf("Digite o numero do lote: ");
    scanf("%d", &numLote);

    printf("nome:%c \n cpf: %f \n vacina: %c \n data: %c \n lote: %d",nome, cpf, vacina, data, numLote);

<<<<<<< Updated upstream
=======


>>>>>>> Stashed changes
return(0);
}
