#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "variaveisGlobais.h"
#include "cadastroProduto.h"
#include "vendaProduto.h"

void limparbuffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

void opcaoInvalida(){
    printf("\nOpção invalida, logo iremos voltar para o menu anterior\n");
}
