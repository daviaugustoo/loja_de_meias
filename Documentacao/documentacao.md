Trabalho Prático Interdisciplinar
Loja de Meias
===================

Índice Analítico
-----------------

* 1. [Introdução](#1-introdução)	
    * 1.1 [Objetivos](#11-objetivos)	
    * 1.2 [Público Alvo](#12-público-alvo) 
* 2. [Descrição do problema e do sistema](#2-descrição-do-problema-e-do-sistema)
    * 2.1 [Identificação e missão do Sistema](#21-identificação-e-missão-do-sistema)	
    * 2.2 [Domínio do problema e contexto de sua aplicação](#22-domínio-do-problema-e-contexto-de-sua-aplicação)
    * 2.3 [Descrição dos interessados do sistema](#23-descrição-dos-interessados-do-sistema)	
* 3. [Requisitos e restrições não funcionais](#3-requisitos-e-restrições-não-funcionais)
    * 3.1 [Requisitos e Usabilidade](#31-requisitos-e-usabiliade)			
    * 3.2 [Restrição de tecnologia](#32-restrição-de-tecnologia)
* 4. [Casos de Uso e Requisitos Funcionais](#4-casos-de-uso-e-requisitos-funcionais)	
    * 4.1 [Descrição de Casos de Uso](#41-descrição-de-casos-de-uso)		
* 5. [Casos de teste](#5-casos-de-teste)	

## 1. Introdução

O presente documento apresenta um detalhamento de um código em C que permitirá aos usuários 
realizar a gestão de uma loja de meias.

Neste documento, serão apresentados detalhes sobre a estrutura do código, as funcionalidades 
implementadas, as principais bibliotecas utilizadas e a lógica por trás das diferentes partes 
do programa. Ao longo deste documento,o sistema desenvolvido será descrito de forma clara e 
objetiva, destacando suas principais características e benefícios.

### 1.1 Objetivos

Este documento tem os seguintes objetivos:	
-	Apresentar um detalhamento de um código em C para a gestão de uma loja de meias;
-	Descrever o projeto desenvolvido para as disciplinas Fundamentos de Engenharia de Software e Algoritmo e Estrutura de Dados 1;	
-	Informar sobre o propósito do projeto, que é criar um programa de venda de meias em C para uuma loja de meias;	
-	Destacar as funcionalidades implementadas no programa, como o cadastro de meias no estoque, venda de meias, relatorio de estoque, relatorio de venda e;	
-	Apresentar o documento de forma clara e objetiva, facilitando a compreensão e o uso do código desenvolvido.

### 1.2 Público Alvo

Este documento tem os seguintes públicos alvo:	
-	Empresas do ramo de estoque: Empresas do setor de venda, especificamente venda de meias, podem se beneficiar
desse projeto como uma solução de software para auxiliar na gestão de suas operações. O documento apresenta uma proposta de sistema
que pode ser adaptada e implementada para atender às necessidades específicas de tais empresas.

## 2. Descrição do problema e do sistema
-----------------------------------------

O problema abordado é a ausência de um sistema eficiente para gerenciar o estoque e as vendas de um pequeno produtor de meias. A solução em C proposta utiliza uma matriz para registrar dados diários, permitindo controle de estoque, registro de vendas, e geração de relatórios de estoque e vendas diárias com lucro. A documentação inclui objetivo, métodos, execução, testes e decisões de implementação. O código segue boas práticas, com comentários claros, indentação e nomes representativos, visando a simplicidade da solução.

### 2.1 Identificação e missão do Sistema

#### Identificação do Sistema:
-	Nome: Sistema de Gestão da loja de meias
-	Versão: 1.0
#### Missão do Sistema:
-	A missão do sistema é gerenciar eficientemente o estoque de meias, permitindo vendas apenas com produtos disponíveis. Além disso, registra as transações diárias, gera relatórios claros sobre o estoque atual e fornece análises de vendas do dia, incluindo o lucro obtido. O objetivo é facilitar as operações do produtor, garantindo controle e insights para uma gestão mais eficaz.

### 2.2 Domínio do problema e contexto de sua aplicação

O domínio do problema abordado neste projeto envolve a gestão de um pequeno produtor de vestuário especializado em meias. Dentro do contexto do setor de moda, o sistema visa automatizar e otimizar as operações fundamentais para o produtor de meias.

Características específicas do problema podem incluir:

-	Cadastro de Produtos: Manutenção de um catálogo atualizado de meias, especificando características como tipo (infantil ou adulto) e estilo (lisa ou estampada).

-	Gestão de Estoque: Acompanhamento preciso do nível de estoque para cada tipo e estilo de meia, assegurando que as vendas estejam alinhadas com a disponibilidade de produtos.
-	Registro de Vendas: Capacidade de registrar transações diárias, atualizando automaticamente o estoque após cada venda bem-sucedida.
-	Relatórios de Desempenho: Geração de relatórios detalhados sobre o estoque atual, vendas diárias e o lucro obtido, oferecendo informações cruciais para a tomada de decisões operacionais e estratégicas.

O contexto de aplicação é o ambiente da produção e venda de meias, onde o sistema de gestão será implementado. A solução busca simplificar a administração diária, garantindo controle efetivo do estoque, melhorando a eficiência operacional e facilitando a análise do desempenho do negócio. O sistema deve atender às necessidades específicas do produtor de meias, contribuindo para uma gestão mais eficaz e o crescimento sustentável do empreendimento.

### 2.3 Descrição dos interessados do sistema

Descrever os perfis de cada interessado envolvido com o sistema.

| Interessado(s) 	| Descrição 	|
|:----------------:	|---------	|
| Administrador do sistema | Responsável pela operação e manutenção do sistema de gestão do produtor de meias. Este perfil configura e gerencia o sistema, realiza tarefas de manutenção, assegura a segurança dos dados, e toma decisões relacionadas ao sistema, visando a eficiência operacional e estratégica da produção de meias. |
| Cliente | Indivíduos ou empresas que adquirem as meias produzidas. Utilizam o sistema para realizar compras, conferir detalhes sobre os produtos disponíveis, acompanhar o histórico de compras, e garantir que apenas produtos em estoque sejam adquiridos. |
| Funcionário de Vendas | Responsável por operar o sistema no processo de vendas. Este perfil registra as transações, atualiza o estoque e fornece assistência aos clientes no momento da compra, garantindo a satisfação do cliente e a precisão do registro de vendas. |
| Analista de Relatórios | Encarregado de utilizar o sistema para gerar relatórios detalhados sobre o estoque, vendas diárias e lucro obtido. Este perfil analisa os dados fornecidos pelo sistema para apoiar decisões estratégicas, melhorias operacionais e o crescimento sustentável do negócio. |

## 3. Requisitos e restrições não funcionais 
--------------------------------------------

### 3.1 Requisitos e Usabilidade

| Entradas |       Classes validas   	|   Resultado esperado 	|
|------	|------------------------------	|-----------------	|
| Numeros Inteiros | Opção escolhida entre X a Y sendo que X e Y são apresentados como forma de menu intuitiva  | Acessar a função da opção digitada |

### 3.2 Restrição de tecnologia

O sistema de gestão de vendas de meias apresenta as seguintes restrições de tecnologia:

-   Compatibilidade com a biblioteca locale.h: A função setlocale é utilizada para configurar o ambiente de localização, garantindo que as mensagens e formatos de números estejam de acordo com o idioma e a região. Alguns compiladores podem não oferecer suporte total a essa biblioteca, o que pode afetar a formatação correta de saída. Recomenda-se verificar a compatibilidade do compilador para garantir o correto funcionamento dessa funcionalidade.
-   Entrada de strings limitada: As funções scanf são utilizadas para coletar informações do usuário, incluindo strings. É importante observar que essas funções podem apresentar limitações em relação a entradas de strings longas ou complexas. Recomenda-se validar e limitar o tamanho das strings inseridas para evitar possíveis problemas de estouro de buffer.
-   Dependência de comparação exata de strings: Na função verificarEstoque, a correspondência entre strings é realizada com base na comparação direta dos caracteres. Isso implica que as entradas do usuário para tipo e estilo devem ser exatamente iguais às cadastradas no estoque, sem correspondências parciais ou insensibilidade a maiúsculas/minúsculas. Os usuários devem ser instruídos a inserir as informações corretas para garantir resultados precisos.
-   Validação de números flutuantes: Ao solicitar o valor de venda (info.preco), a entrada é esperada como um número de ponto flutuante. Recomenda-se validar a entrada para garantir que seja um número válido, evitando potenciais erros causados por entradas inválidas.

## 4. Casos de Uso e Requisitos Funcionais
---------------------------------

### 4.1 Descrição de Casos de Uso

#### Caso de Uso 1: Cadastrar Produto no Estoque
**Ator Principal:** Usuário

**Fluxo Principal:**
1. O usuário escolhe a opção de cadastrar um novo produto no estoque.
2. O sistema solicita as informações do produto, como tipo, estilo, quantidade, valor de custo e valor de venda.
3. O usuário fornece as informações solicitadas.
4. O sistema armazena o produto no estoque.
5. O sistema pergunta se o usuário deseja cadastrar outro produto.
6. Se o usuário optar por cadastrar outro produto, o fluxo é repetido. Caso contrário, retorna ao menu principal.

#### Caso de Uso 2: Realizar Venda de Produto
**Ator Principal:** Usuário

**Fluxo Principal:**
1. O usuário escolhe a opção de realizar uma venda.
2. O sistema solicita informações sobre a meia a ser vendida, como tipo, estilo e preço.
3. O usuário fornece as informações solicitadas.
4. O sistema verifica se o produto está no estoque.
5. Se o produto estiver disponível, o sistema registra a venda, atualiza o estoque e calcula o lucro.
6. O sistema pergunta se o usuário deseja registrar outra venda.
7. Se o usuário optar por outra venda, o fluxo é repetido. Caso contrário, retorna ao menu principal.

#### Caso de Uso 3: Apresentar Relatório de Estoque
**Ator Principal:** Usuário

**Fluxo Principal:**
1. O usuário escolhe a opção de visualizar o relatório do estoque.
2. O sistema exibe as informações de cada meia presente no estoque, incluindo tipo, estilo, quantidade, custo e preço.
3. Se não houver meias disponíveis no estoque, o sistema informa ao usuário.

#### Caso de Uso 4: Apresentar Relatório de Venda e Lucro
**Ator Principal:** Usuário

**Fluxo Principal:**
1. O usuário escolhe a opção de visualizar o relatório de vendas e lucro.
2. O sistema exibe as informações de cada venda realizada, incluindo tipo, estilo e preço.
3. Se não houver vendas registradas, o sistema informa que não houve vendas e lucro.
4. Se houver vendas registradas, o sistema exibe o lucro total obtido.

#### Caso de Uso 5: Encerrar o Programa
**Ator Principal:** Usuário

**Fluxo Principal:**
1. O usuário escolhe a opção de encerrar o programa.
2. O sistema encerra a execução.


## 5. Casos de teste
---------------------------------------------

### Menu Principal

| Entradas | Resultado | Válido |
| ---------- | ------------ | -------- |
| 1 | Usuário escolhe a opção de cadastrar um novo produto no estoque. | sim |
| 2 | Usuário escolhe a opção de vender um produto do estoque. | sim |
| 3 | Usuário escolhe a opção de ver relatorio do estoque. | sim |
| 4 | Usuário escolhe a opção de ver relatorio de venda do dia. | sim |
| 0 | Usuário escolhe a opção de cadastrar um novo produto no estoque. | sim |
| 27 | Sistema exibe "Opção inválida" e pede uma nova opção. | não |

### Cadastro de Produto

| Entradas | Válido |
| ---------- | -------- |
| Tipo: Adulto | sim |
| Estilo: Liso | sim |
| Quantidade: 10| sim |
| Valor de Custo: R$ 5 | sim |
| Valor de Venda: R$ 10 | sim |

### Realizar Venda de Produto

| Entradas | Resultado | Válido |
| ---------- | ------------ | -------- |
| Tipo: Meia, Estilo: Lisa, Preço: R$ 15 | Sistema verifica se o produto está no estoque. | sim |

### Apresentar Relatório de Estoque

| Entradas | Resultado | Válido |
| ---------- | ------------ | -------- |
| Usuário escolhe a opção de visualizar o relatório do estoque. | Sistema exibe as informações de cada meia no estoque. | sim |
| Sem meias no estoque | Sistema informa "Nenhuma meia disponível no estoque." | sim |

### Apresentar Relatório de Venda e Lucro

| Entradas | Resultado | Válido |
| ---------- | ------------ | -------- |
| Usuário escolhe a opção de visualizar o relatório de vendas e lucro. | Sistema exibe as informações de cada venda e o lucro total. | sim |
| Nenhuma venda registrada | Sistema informa "Nenhuma venda e lucro registrados." | sim |

### Encerrar o Programa

| Entradas | Resultado | Válido |
| ---------- | ------------ | -------- |
| Usuário escolhe a opção de encerrar o programa. | Sistema encerra a execução. | sim |



