#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#include "variaveisGlobais.h"
#include "cadastroProduto.h"
#include "vendaProduto.h"
#include "relatorioEstoque.h"
#include "relatorioVenda.h"

// Fun��o para limpar o buffer do teclado
void limparbuffer(){
    int c;
    // Enquanto houver caracteres no buffer e n�o for um final de linha ou fim de arquivo, continue removendo
    while((c = getchar()) != '\n' && c != EOF);
}

// Fun��o para imprimir mensagem de op��o inv�lida e indicar retorno ao menu anterior
void opcaoInvalida(){
    printf("\nOp��o inv�lida, logo iremos voltar para o menu anterior\n");
}
