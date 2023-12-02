#ifndef VARIAVEISGLOBAIS_H_INCLUDED
#define VARIAVEISGLOBAIS_H_INCLUDED

#define quantidadeTotal 100

typedef struct{
    char tipo[20];
    char estilo[20];
    int quantidade;
    float custo;
    float preco;
} Meia;

Meia meias[quantidadeTotal];

int totalProduto;

float lucro;

#endif // VARIAVEISGLOBAIS_H_INCLUDED
