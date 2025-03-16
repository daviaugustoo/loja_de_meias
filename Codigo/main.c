#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// Inclusão dos cabeçalhos dos módulos refatorados
#include "estoque.h"
#include "meiaFactory.h"
#include "cadastroProduto.h"
#include "vendaProduto.h"
#include "relatorioEstoque.h"
#include "relatorioVenda.h"

void menu(); // Protótipo da função do menu

int main() {
    setlocale(LC_ALL, "Portuguese");

    int escolha;
    Meia* estoque = getEstoque(); // Obtém o estoque como Singleton
    float lucro = 0; // Inicializa o lucro

    do {
        menu();
        if (scanf("%i", &escolha) != 1) { // Validação para evitar entrada inválida
            printf("\nEntrada inválida. Tente novamente.\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
            continue;
        }
        
        printf("\n");

        switch (escolha) {
            case 0:
                printf("Encerrando o programa...\n");
                return 0;
            case 1:
                cadastrarProduto();
                break;
            case 2:
                venderProduto();
                break;
            case 3:
                apresentarEstoque();
                break;
            case 4:
                apresentarVendas();
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
    printf("\n======= MENU PRINCIPAL =======\n");
    printf("1 - Cadastrar produto no estoque\n");
    printf("2 - Vender\n");
    printf("3 - Relatório do estoque\n");
    printf("4 - Relatório de venda e lucro\n");
    printf("0 - Sair\n");
    printf("Digite a opção desejada: ");
}
