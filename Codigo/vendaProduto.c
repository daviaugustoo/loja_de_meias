#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#include "variaveisGlobais.h"
#include "cadastroProduto.h"
#include "vendaProduto.h"
#include "relatorioEstoque.h"
#include "relatorioVenda.h"

// Fun��o principal para realizar a venda de produtos
void venderProduto(){
    setlocale(LC_ALL, "Portuguese");

    int escolha = 1;

    do {
        recolherInformacoes(); // Fun��o para coletar informa��es sobre a venda

        verificarEstoque(); // Fun��o para verificar se o produto est� no estoque

        printf("\n1 - Registrar outra venda\n");
        printf("0 - SAIR\n");
        printf("Digite sua escolha: ");
        scanf(" %i", &escolha);
        printf("\n");

        // Verificar se a escolha � v�lida
        if (escolha != 1 && escolha != 0){
            opcaoInvalida();
            return;
        }
    } while (escolha != 0);
}

// Fun��o para coletar informa��es sobre a venda
void recolherInformacoes(){
    printf("Vamos verificar se temos a meia que deseja vender no estoque\n");

    printf("Digite se ela � infantil ou adulta: ");
    scanf(" %20[^\n]s", info.tipo);
    limparbuffer();

    printf("Digite se ela � lisa ou estampada: ");
    scanf(" %20[^\n]s", info.estilo);
    limparbuffer();

    printf("Digite o valor de venda: R$");
    scanf(" %f", &info.preco);
    limparbuffer();
}

// Fun��o para verificar se o produto est� no estoque
void verificarEstoque(){

    for(int i = 0; i < quantidadeTotal; i++){

        int verificador1 = 1, verificador2 = 1, verificador3 = 1;

        // Verificar se os crit�rios de tipo, estilo e pre�o coincidem
        if(info.tipo[0] == meias[i].tipo[0]){
          verificador1 = 0;
        }

        if(info.estilo[0] == meias[i].estilo[0]){
          verificador2 = 0;
        }

        if(info.preco == meias[i].preco){
          verificador3 = 0;
        }

        // Se os crit�rios coincidirem e houver quantidade em estoque, realizar a venda
        if(verificador1 == 0 && verificador2 == 0 && verificador3 == 0){
          if(meias[i].quantidade > 0){
            printf("\nTemos essa meia no estoque, realize uma boa venda!\n");

            registrarVenda();

            return;
          }
          else{
            printf("\nInfelizmente o estoque que t�nhamos dessa meia acabou, a venda n�o pode ser realizada\n");

            return;
          }
        }

        // Se chegarmos ao final do estoque e a quantidade � zero, informar que a meia n�o est� dispon�vel
        if (i == (quantidadeTotal - 1) && meias[i].quantidade == 0){
            printf("\nEssa meia n�o se encontra no estoque, a venda n�o pode ser realizada\n");
        }
    }
}

// Fun��o para registrar a venda
void registrarVenda(){

    for(int i = 0; i < quantidadeTotal; i++){

        meias[i].quantidade--; // Decrementar a quantidade de meias em estoque

        // Calcular o lucro com base no pre�o de venda e custo
        lucro = lucro + (meias[i].preco - meias[i].custo);

        // Copiar informa��es da venda para o registro de vendas
        strcpy(venda[i].tipo, meias[i].tipo);
        strcpy(venda[i].estilo, meias[i].estilo);
        venda[i].preco = meias[i].preco;
    }
}
