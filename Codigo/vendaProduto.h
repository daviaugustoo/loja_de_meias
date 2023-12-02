#ifndef VENDAPRODUTO_H_INCLUDED
#define VENDAPRODUTO_H_INCLUDED

#include "variaveisGlobais.h"

typedef struct{
    char tipo[20];
    char estilo[20];
    float preco;
} Informacoes;

Informacoes info;

Informacoes venda[quantidadeTotal];

void venderProduto();

void verificarEstoque();

void registrarVenda();

#endif // VENDAPRODUTO_H_INCLUDED
