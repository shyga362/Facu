#include <stdio.h>
#include <stdlib.h>

int main(){

    int codigo = 0, menu = 0;
    int i;
    char nome[50];
    char infoPedido[50][3];
    char endereco[250];
    char pedido[50];
    float valor = 0;

    printf("1 - Cadastro Pedido \n 2 - Consulta Pedido \n 3 - Emetir relatorio \n 4 - Sair \n");
    printf("Digite qual comando sera executado: ");
    scanf("%d", &menu);
    
   switch (menu)
   {
   case 1:
    for (i = 0; i < 50; i++)
    {
        if(codigo + i != 0)
        {
            break;
        }
        
    }
   
    printf("Informe seu pedido: \n");
    scanf("%s", &infoPedido[codigo][0]);
    printf("Informe seu nome: \n");
    scanf("%s", &infoPedido[codigo][1]);
    printf("Infome seu endereço: \n");
    scanf("%s", &infoPedido[codigo][2]);
    printf("Informe o valor do pedido: \n");
    scanf("%s", infoPedido[codigo][3]);


    break;
    case 2:
    printf("Digite seu codigo: \n");

    break;
    case 3:

    break;
    case 4:
    break
   
   default:
    break;
   }
   


}