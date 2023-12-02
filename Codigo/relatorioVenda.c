#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#include "variaveisGlobais.h"
#include "cadastroProduto.h"
#include "vendaProduto.h"
#include "relatorioEstoque.h"
#include "relatorioVenda.h"

void apresentarVendas(){

    // metodo para gerar relatorio de venda, a saida ira depender se o usuario registrou alguma venda ou como a venda foi executada

    for(int i = 0; i < quantidadeTotal; i++){

        if(venda[i].preco > 0){
            printf("\n");
            printf("Tipo: %s\n", venda[i].tipo);
            printf("Estilo: %s\n", venda[i].estilo);
            printf("Preço: R$%.2f\n", venda[i].preco);
            printf("\n");
        }

        if(i == (quantidadeTotal - 1) && lucro == 0){
            printf("\nNão tivemos venda hoje ainda. Logo não tivemos lucro\n");
        }
    }
    if (lucro != 0){
        printf("\nO lucro que obtivemos com as vendas foi:\n\n");
        printf("R$%.2f\n", lucro);
    }
}
