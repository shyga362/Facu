#include <stdio.h>
#include <stdlib.h>

int main(){

    int codigo = 0, menu = 0;
    int i = 0;
    char nome[50] = {}, pedido[50][50] = {}, endereco[250][50] = {}, pedido[50][5] = {};
    float valor = 0;

    printf("1 - Cadastro Pedido \n 2 - Consulta Pedido \n 3 - Emetir relatorio \n 4 - Sair \n");
    printf("Digite qual comando sera executado: ");
    scanf("%d", &menu);
    
    switch (menu)
    {
    case 1:

        for (i = 0; i < 50; i++)
        {
            if(codigo[i] != 0)
            {
                break;
            }
            else
            {
                codigo[i] = i
            }
            
        }
                             
    printf("Informe seu pedido: \n"); //cada caracter ocupa um slot na array
    scanf("%s", &pedido[codigo][]);
    printf("Informe seu nome: \n");
    scanf("%s", &nome[codigo][]);
    printf("Infome seu endereço: \n");
    scanf("%s", &endereco[codigo][]);
    printf("Informe o valor do pedido: \n");
    scanf("%s", &valor[codigo][]);


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