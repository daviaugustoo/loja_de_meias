#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "variaveisGlobais.h"
#include "cadastroProduto.h"
#include "vendaProduto.h"

void cadastrarProduto(){
    setlocale(LC_ALL, "Portuguese");

    int escolha;

    do{
        printf("Digite se ela é infantil ou adulta: ");
        scanf(" %20[^\n]s", meias[totalProduto].tipo);
        limparbuffer();

        printf("Digite se ela é lisa ou estampada: ");
        scanf(" %20[^\n]s", meias[totalProduto].estilo);
        limparbuffer();

        printf("Digite a quantidade: ");
        scanf(" %i", &meias[totalProduto].quantidade);
        limparbuffer();

        printf("Digite o valor de custo: ");
        scanf(" %f", &meias[totalProduto].custo);
        limparbuffer();

        printf("Digite o valor de venda: ");
        scanf(" %f", &meias[totalProduto].preco);
        limparbuffer();

        totalProduto++;

        printf("\n1 - cadastrar outro produto\n");
        printf("0 - SAIR\n\n");
        printf("Digite sua escolha: ");
        scanf("%i", &escolha);

        if (escolha != 1 && escolha != 0){
            opcaoInvalida();
            return;
        }
    }while(escolha != 0);
}
