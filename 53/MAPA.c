#include <stdio.h>

int main(){

    int codigo, acao;
    char nome[50];
    char endereco[250];
    char pedido[50];
    float valor;

    printf("1 - Cadastro Pedido \n 2 - Consulta Pedido \n 3 - Emetir relatorio \n 4 - Sair \n");
    printf("Digite qual comando sera executado: ");
    scanf("%d", &acao);
    
   if ( acao == 1)
   {
    
    printf("Informe seu pedido: ");
    scanf("%c", &pedido);
    codigo = 1;
    scanf("%d", &codigo);
    printf("Seu pedido e: %c\n", pedido);
    printf("seu codigo e: %d", codigo);


   }
   


}