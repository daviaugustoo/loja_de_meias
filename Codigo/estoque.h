#ifndef ESTOQUE_H_INCLUDED
#define ESTOQUE_H_INCLUDED

typedef struct {
    char tipo[20];
    char estilo[20];
    int quantidade;
    float custo;
    float preco;
} Meia;

// Função para obter instância única do estoque
Meia* getEstoque();

#endif
