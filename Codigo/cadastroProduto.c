#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#include "estoque.h"
#include "meiaFactory.h"
#include "cadastroProduto.h"
#include "funcoesGlobais.h"

// Função para cadastrar um novo produto
void cadastrarProduto() {
    setlocale(LC_ALL, "Portuguese");

    int escolha;
    Meia* estoque = getEstoque(); // Obtém o estoque como Singleton

    do {
        if (quantidadeTotal >= 100) {
            printf("Estoque cheio! Não é possível cadastrar mais produtos.\n");
            return;
        }

        char tipo[20], estilo[20];
        int quantidade;
        float custo, preco;

        printf("Digite se ela é infantil ou adulta: ");
        scanf(" %20[^\n]", tipo);
        limparbuffer();

        printf("Digite se ela é lisa ou estampada: ");
        scanf(" %20[^\n]", estilo);
        limparbuffer();

        printf("Digite a quantidade: ");
        scanf("%d", &quantidade);
        limparbuffer();

        printf("Digite o valor de custo: R$");
        scanf("%f", &custo);
        limparbuffer();

        printf("Digite o valor de venda: R$");
        scanf("%f", &preco);
        limparbuffer();

        // Criando meia com Factory Method
        estoque[quantidadeTotal++] = criarMeia(tipo, estilo, quantidade, custo, preco);

        printf("\nProduto cadastrado com sucesso!\n");

        printf("\n1 - Cadastrar outro produto\n");
        printf("0 - SAIR\n\n");
        printf("Digite sua escolha: ");
        scanf("%i", &escolha);

        if (escolha != 1 && escolha != 0){
            opcaoInvalida();
            return;
        }

    } while (escolha != 0);
}
