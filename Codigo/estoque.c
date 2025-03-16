#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estoque.h"

// Definição de estoque como Singleton
#define TAM_ESTOQUE 100
static Meia estoque[TAM_ESTOQUE]; // Armazena as meias
static int quantidadeTotal = 0;   // Número de itens no estoque

// Retorna o estoque como Singleton
Meia* getEstoque() {
    return estoque;
}
