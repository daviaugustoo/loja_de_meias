#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "variaveisGlobais.h"
#include "cadastroProduto.h"
#include "vendaProduto.h"


void venderProduto(){
    setlocale(LC_ALL, "Portuguese");

    int escolha;

    do{
        recolherInformacoes();

        verificarEstoque(informacoes.tipo, informacoes.estilo, informacoes.preco);

        printf("\n1 - Registrar outra venda\n");
        printf("0 - SAIR\n");
        printf("Digite sua escolha: ");
        scanf(" %i", &escolha);

        if (escolha != 1 && escolha != 0){
            opcaoInvalida();
            return;
        }
    }while(escolha != 0);
}

void recolherInformacoes(){
    printf("Vamos verificar se temos a meia que deseja vender no estoque\n");

    printf("Digite se ela é infantil ou adulta: ");
    scanf(" %20[^\n]s", informacoes.tipo);
    limparbuffer();

    printf("Digite se ela é lisa ou estampada: ");
    scanf(" %20[^\n]s", informacoes.estilo);
    limparbuffer();

    printf("Digite o valor de venda: ");
    scanf(" %f", &informacoes.preco);
    limparbuffer();
}

void verificarEstoque(char tipo, char estilo, float preco){

    for(int i = 0; i < 50; i++){

        int verificador1 = 0, verificador2 = 0, verificador3 = 0;

        if(preco == meias[i].preco){
            verificador3 = 1;
        }
        if(verificador1 == 1 && verificador2 == 1 && verificador3 == 1){

        }
    }

}
