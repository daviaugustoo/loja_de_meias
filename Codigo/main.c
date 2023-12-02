#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// Inclusão dos cabeçalhos dos arquivos de cabeçalho personalizados
#include "variaveisGlobais.h"
#include "cadastroProduto.h"
#include "vendaProduto.h"
#include "relatorioEstoque.h"
#include "relatorioVenda.h"

// Função para exibir o menu principal
void menu();

int main()
{
    // Configurar a localidade para permitir a exibição de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    // Inicializar variável global de lucro
    lucro = 0;

    int escolha;

    // Loop principal do programa
    do {
        // Exibir o menu e obter a escolha do usuário
        menu();
        scanf("%i", &escolha);
        printf("\n");

        // Realizar a ação de acordo com a escolha do usuário
        switch (escolha) {
            case 0:
                return 0; // Encerrar o programa
                break;
            case 1:
                cadastrarProduto(); // Chamar função de cadastro de produto
                break;
            case 2:
                venderProduto(); // Chamar função de venda de produto
                break;
            case 3:
                apresentarEstoque(); // Chamar função de apresentação do estoque
                break;
            case 4:
                apresentarVendas(); // Chamar função de apresentação de vendas e lucro
                break;
            default:
                printf("\n\nOpção Inválida. Tente novamente.\n\n");
                break;
        }
    } while (escolha != 0);

    return 0;
}

// Função para exibir o menu
void menu() {
    printf("\n");
    printf("1 - Cadastrar produto no estoque\n");
    printf("2 - Vender\n");
    printf("3 - Relatório do estoque\n");
    printf("4 - Relatório de venda e lucro\n\n");
    printf("Digite a opção desejada: ");
}
