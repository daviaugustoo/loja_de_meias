#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#include "variaveisGlobais.h"
#include "cadastroProduto.h"
#include "vendaProduto.h"
#include "relatorioEstoque.h"
#include "relatorioVenda.h"

// Função para cadastrar um novo produto
void cadastrarProduto(){
    setlocale(LC_ALL, "Portuguese");

    int escolha;

    do {
        // Obter informações do usuário para cadastrar o produto
        printf("Digite se ela é infantil ou adulta: ");
        scanf(" %20[^\n]s", meias[totalProduto].tipo);
        limparbuffer();

        printf("Digite se ela é lisa ou estampada: ");
        scanf(" %20[^\n]s", meias[totalProduto].estilo);
        limparbuffer();

        printf("Digite a quantidade: ");
        scanf(" %i", &meias[totalProduto].quantidade);
        limparbuffer();

        printf("Digite o valor de custo: R$");
        scanf(" %f", &meias[totalProduto].custo);
        limparbuffer();

        printf("Digite o valor de venda: R$");
        scanf(" %f", &meias[totalProduto].preco);
        limparbuffer();

        totalProduto++; // Incrementar o total de produtos cadastrados

        // Solicitar ao usuário se deseja cadastrar outro produto
        printf("\n1 - Cadastrar outro produto\n");
        printf("0 - SAIR\n\n");
        printf("Digite sua escolha: ");
        scanf("%i", &escolha);

        // Verificar se a escolha é válida
        if (escolha != 1 && escolha != 0){
            opcaoInvalida();
            return;
        }
    } while (escolha != 0);
}
