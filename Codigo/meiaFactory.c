#include "meiaFactory.h"
#include <string.h>

// Implementação do Factory Method para criar uma meia
Meia criarMeia(const char* tipo, const char* estilo, int quantidade, float custo, float preco) {
    Meia novaMeia;
    strcpy(novaMeia.tipo, tipo);
    strcpy(novaMeia.estilo, estilo);
    novaMeia.quantidade = quantidade;
    novaMeia.custo = custo;
    novaMeia.preco = preco;
    return novaMeia;
}
