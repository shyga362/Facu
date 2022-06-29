#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome, vacina, data;
    int numLote, codigo;
    double cpf;
    
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite o seu CPF: ");
    scanf("%f", &cpf);
    printf("Digte qual a sua vacina: ");
    scanf("%s", &vacina);
    printf("Digite a data da aplicacao: ");
    scanf("%s", &data);
    printf("Digite o numero do lote: ");
    scanf("%d", &numLote);

    printf("%s, %s, %s, %d, %f",nome, vacina, data, numLote, cpf);

}
