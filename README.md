Trabalho Prático Interdisciplinar
Loja de Meias
===================

# Atualização: Refatoração com Padrões de Projeto

## 📌 Introdução
Este projeto consiste em um sistema desenvolvido em C para a gestão de uma loja de meias, permitindo aos usuários realizar cadastro de produtos, registrar vendas e visualizar relatórios de estoque e lucro.

Durante a refatoração, aplicamos dois padrões de projeto:
- **Singleton**: Para garantir uma única instância do estoque de meias.
- **Factory Method**: Para padronizar a criação de objetos do tipo Meia.

## 🎯 Objetivos da Refatoração
- Melhorar a organização do código.
- Reduzir o acoplamento entre módulos.
- Facilitar futuras expansões do sistema.

## 🔧 Principais Mudanças no Código
### 1️⃣ **Singleton para Estoque**
Criamos um singleton para controlar o estoque, garantindo que haja uma única instância compartilhada entre todos os módulos.

**Arquivo:** `estoque.h`
```c
#ifndef ESTOQUE_H_INCLUDED
#define ESTOQUE_H_INCLUDED

typedef struct {
    char tipo[20];
    char estilo[20];
    int quantidade;
    float custo;
    float preco;
} Meia;

Meia* getEstoque();

#endif
```

**Arquivo:** `estoque.c`
```c
#include "estoque.h"
#define TAM_ESTOQUE 100

static Meia estoque[TAM_ESTOQUE]; // Armazena os produtos
static int quantidadeTotal = 0;   // Quantidade total de produtos

Meia* getEstoque() {
    return estoque;
}
```

### 2️⃣ **Factory Method para Criar Meias**
O Factory Method permite criar objetos de Meia de forma padronizada.

**Arquivo:** `meiaFactory.h`
```c
#ifndef MEIA_FACTORY_H_INCLUDED
#define MEIA_FACTORY_H_INCLUDED
#include "estoque.h"

Meia criarMeia(const char* tipo, const char* estilo, int quantidade, float custo, float preco);

#endif
```

**Arquivo:** `meiaFactory.c`
```c
#include "meiaFactory.h"
#include <string.h>

Meia criarMeia(const char* tipo, const char* estilo, int quantidade, float custo, float preco) {
    Meia novaMeia;
    strcpy(novaMeia.tipo, tipo);
    strcpy(novaMeia.estilo, estilo);
    novaMeia.quantidade = quantidade;
    novaMeia.custo = custo;
    novaMeia.preco = preco;
    return novaMeia;
}
```

### 3️⃣ **Refatoração do Cadastro de Produtos**
Agora o cadastro utiliza o Factory Method e armazena no Singleton.

**Arquivo:** `cadastroProduto.c`
```c
#include "estoque.h"
#include "meiaFactory.h"
#include "cadastroProduto.h"
#include "funcoesGlobais.h"

void cadastrarProduto() {
    Meia* estoque = getEstoque();

    if (quantidadeTotal >= 100) {
        printf("Estoque cheio!\n");
        return;
    }

    char tipo[20], estilo[20];
    int quantidade;
    float custo, preco;

    printf("Tipo da meia (Infantil/Adulto): ");
    scanf(" %20[^"]", tipo);

    printf("Estilo (Lisa/Estampada): ");
    scanf(" %20[^"]", estilo);

    printf("Quantidade: ");
    scanf("%d", &quantidade);

    printf("Custo: ");
    scanf("%f", &custo);

    printf("Preço: ");
    scanf("%f", &preco);

    estoque[quantidadeTotal++] = criarMeia(tipo, estilo, quantidade, custo, preco);
    printf("Produto cadastrado com sucesso!\n");
}
```

### 4️⃣ **Validação de Entrada no Menu**
No `main.c`, melhoramos a validação das entradas do usuário.

```c
void menu() {
    printf("\n======= MENU PRINCIPAL =======\n");
    printf("1 - Cadastrar produto\n");
    printf("2 - Vender\n");
    printf("3 - Relatório de estoque\n");
    printf("4 - Relatório de vendas\n");
    printf("0 - Sair\n");
    printf("Digite sua opção: ");
}

int main() {
    int escolha;

    do {
        menu();
        if (scanf("%i", &escolha) != 1) {
            printf("\nEntrada inválida. Tente novamente.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (escolha) {
            case 0:
                printf("Encerrando o programa...\n");
                return 0;
            case 1:
                cadastrarProduto();
                break;
            case 2:
                venderProduto();
                break;
            case 3:
                apresentarEstoque();
                break;
            case 4:
                apresentarVendas();
                break;
            default:
                printf("\n\nOpção Inválida. Tente novamente.\n\n");
                break;
        }
    } while (escolha != 0);
    return 0;
}
```

## 📜 Conclusão
Com a refatoração:
✔ Código mais modular e organizado.
✔ Melhor separação de responsabilidades.
✔ Facilidade para futuras expansões do sistema.
✔ Uso de padrões de projeto para melhorar a estrutura do código.

Agora o sistema está mais eficiente e preparado para evoluir! 🚀