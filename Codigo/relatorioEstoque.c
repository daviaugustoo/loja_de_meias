#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#include "variaveisGlobais.h"
#include "cadastroProduto.h"
#include "vendaProduto.h"
#include "relatorioEstoque.h"
#include "relatorioVenda.h"

// Função para apresentar o estoque de meias
void apresentarEstoque(){
    for(int i = 0; i < quantidadeTotal; i++){

        // Verificar se a quantidade de meias é maior que zero para exibir as informações
        if(meias[i].quantidade > 0){
            printf("\n");
            printf("Tipo: %s\n", meias[i].tipo);
            printf("Estilo: %s\n", meias[i].estilo);
            printf("Quantidade: %i\n", meias[i].quantidade);
            printf("Custo: R$%.2f\n", meias[i].custo);
            printf("Preço: R$%.2f\n", meias[i].preco);
            printf("\n");
        }

        // Se chegarmos ao final do estoque e não houver meias disponíveis, informar ao usuário
        if(i == (quantidadeTotal - 1) && meias[i].quantidade == 0 && meias[i].custo == 0 && meias[i].preco == 0){
            printf("\nNão possuímos meias no estoque no momento.\n");
        }
    }
}
