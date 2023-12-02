#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// Inclus�o dos cabe�alhos dos arquivos de cabe�alho personalizados
#include "variaveisGlobais.h"
#include "cadastroProduto.h"
#include "vendaProduto.h"
#include "relatorioEstoque.h"
#include "relatorioVenda.h"

// Fun��o para exibir o menu principal
void menu();

int main()
{
    // Configurar a localidade para permitir a exibi��o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    // Inicializar vari�vel global de lucro
    lucro = 0;

    int escolha;

    // Loop principal do programa
    do {
        // Exibir o menu e obter a escolha do usu�rio
        menu();
        scanf("%i", &escolha);
        printf("\n");

        // Realizar a a��o de acordo com a escolha do usu�rio
        switch (escolha) {
            case 0:
                return 0; // Encerrar o programa
                break;
            case 1:
                cadastrarProduto(); // Chamar fun��o de cadastro de produto
                break;
            case 2:
                venderProduto(); // Chamar fun��o de venda de produto
                break;
            case 3:
                apresentarEstoque(); // Chamar fun��o de apresenta��o do estoque
                break;
            case 4:
                apresentarVendas(); // Chamar fun��o de apresenta��o de vendas e lucro
                break;
            default:
                printf("\n\nOp��o Inv�lida. Tente novamente.\n\n");
                break;
        }
    } while (escolha != 0);

    return 0;
}

// Fun��o para exibir o menu
void menu() {
    printf("\n");
    printf("1 - Cadastrar produto no estoque\n");
    printf("2 - Vender\n");
    printf("3 - Relat�rio do estoque\n");
    printf("4 - Relat�rio de venda e lucro\n\n");
    printf("Digite a op��o desejada: ");
}
