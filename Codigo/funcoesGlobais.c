#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#include "variaveisGlobais.h"
#include "cadastroProduto.h"
#include "vendaProduto.h"
#include "relatorioEstoque.h"
#include "relatorioVenda.h"

// Função para limpar o buffer do teclado
void limparbuffer(){
    int c;
    // Enquanto houver caracteres no buffer e não for um final de linha ou fim de arquivo, continue removendo
    while((c = getchar()) != '\n' && c != EOF);
}

// Função para imprimir mensagem de opção inválida e indicar retorno ao menu anterior
void opcaoInvalida(){
    printf("\nOpção inválida, logo iremos voltar para o menu anterior\n");
}
