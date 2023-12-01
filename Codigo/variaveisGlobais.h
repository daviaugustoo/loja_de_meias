#ifndef VARIAVEISGLOBAIS_H_INCLUDED
#define VARIAVEISGLOBAIS_H_INCLUDED

typedef struct{
    char tipo[20];
    char estilo[20];
    int quantidade;
    float custo;
    float preco;
} Meia;

Meia meias[50];

int totalProduto;

#endif // VARIAVEISGLOBAIS_H_INCLUDED
