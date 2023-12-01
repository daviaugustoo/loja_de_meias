#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "variaveisGlobais.h"
#include "cadastroProduto.h"
#include "vendaProduto.h"

void menu();

int main()
{
    setlocale(LC_ALL, "Protuguese");

    int escolha;
    do{
        menu();
        scanf("%i", &escolha);
        switch (escolha){
            case 0:
                return 0;
                break;
            case 1:
                cadastrarProduto();
                break;
            case 2:
                venderProduto();
                break;
            case 3:
                return 0;
                break;
            case 4:
                return 0;
                break;
            default:
                printf("\n\nOpção Invalida Tente novamente\n\n");
                break;
        }
    }while (escolha != 0);
    return 0;
}


void menu(){
    printf("\n");
    printf("1 - Cadastrar produto no estoque \n");
    printf("2 - Vender\n");
    printf("3 - Relatório do estoque\n");
    printf("4 - Relatório de venda e lucro\n");
    printf("Digite a opção desejada: ");
}
