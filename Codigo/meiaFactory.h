#ifndef MEIA_FACTORY_H_INCLUDED
#define MEIA_FACTORY_H_INCLUDED

#include "estoque.h"

Meia criarMeia(const char* tipo, const char* estilo, int quantidade, float custo, float preco);

#endif
