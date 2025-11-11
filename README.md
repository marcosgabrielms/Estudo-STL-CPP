# 📚 Meus Estudos de Estrutura de Dados

Este repositório serve como um diário de estudos e referência rápida para várias implementações de estruturas de dados, com foco principal nos contêineres da **STL (Standard Template Library)** do C++.

## 1. Contêineres STL (C++)

Aqui estão os resumos dos principais contêineres da STL, separados por categoria.

### ➡️ Contêineres de Sequência
Organizam os dados em uma ordem linear, definida pela ordem de inserção.

#### `std::vector`
* **O que é:** O "pau pra toda obra". É um array que pode crescer e diminuir de tamanho automaticamente.
* **Pontos Fortes:**
    * Acesso a elementos por índice (ex: `v[5]`) é instantâneo (O(1)).
    * Adicionar no final (`push_back`) é (geralmente) muito rápido.
* **Pontos Fracos:**
    * Adicionar ou remover elementos do **início** ou do **meio** da lista é *extremamente lento*, pois exige que todos os elementos seguintes sejam movidos.
* **Quando usar:** Sempre. Se você precisa de uma lista de coisas, comece com `vector`. Mude só se tiver um bom motivo.
* **Ver código:** [`/Estudos-STL-CPP/vector/exemplo_vector.cpp`](./Estudos-STL-CPP/vector/exemplo_vector.cpp)

#### `std::deque`
* **O que é:** "Double-Ended Queue", ou Fila de Duas Pontas. Pense num "canudo".
* **Pontos Fortes:**
    * Tão rápido quanto o `vector` para adicionar no final (`push_back`).
    * Tão rápido quanto para adicionar no **início** (`push_front`).
    * Permite acesso rápido por índice (ex: `d[5]`), igual ao `vector`.
* **Pontos Fracos:**
    * Cada inserção (início ou fim) é *um pouquinho* mais lenta que a `push_back` do `vector`.
    * Usa um pouco mais de memória.
* **Quando usar:** Quando você precisa da velocidade de um `vector` (acesso por `[]`), mas também precisa (e muito) adicionar e remover do **início** da lista.
* **Ver código:** [`/Estudos-STL-CPP/deque/exemplo_deque.cpp`](./Estudos-STL-CPP/deque/exemplo_deque.cpp)

#### `std::array`
* **O que é:** Um caixote de tamanho fixo. Basicamente, um array normal do C (ex: `int v[10]`) com uma "capa" de C++ que o deixa mais inteligente.
* **Pontos Fortes:**
    * Sabe o próprio tamanho (ex: `meu_array.size()`).
    * Pode ser passado para funções sem "perder" o tamanho.
    * Acesso seguro com `.at()`.
* **Pontos Fracos:**
    * O tamanho **não pode mudar** nunca. É definido em tempo de compilação.
* **Quando usar:** Quando você sabe *exatamente* o tamanho que precisa (ex: "um vetor de 3 dimensões", "cores RGB") e esse tamanho nunca mudará.
* **Ver código:** [`/Estudos-STL-CPP/array/exemplo_array.cpp`](./Estudos-STL-CPP/array/exemplo_array.cpp)

#### `std::forward_list`
* **O que é:** A "rua de mão única". É uma lista simplesmente encadeada. Cada elemento só sabe quem é o próximo.
* **Pontos Fortes:**
    * Extremamente leve e com o menor uso de memória para uma lista.
    * Otimizado para inserir elementos *depois* de um elemento existente.
* **Pontos Fracos:**
    * Só pode andar para frente (`++it`). Não pode andar para trás (`--it`).
    * Não tem `.size()` (para saber o tamanho, teria que percorrer tudo, o que é lento).
    * Não tem `push_back()` (ele não sabe onde é o fim).
* **Quando usar:** Em cenários muito específicos onde a memória é *extremamente* restrita e você só precisa inserir no início (`push_front`) e andar para frente.
* **Ver código:** [`/Estudos-STL-CPP/forward_list/exemplo_forward_list.cpp`](./Estudos-STL-CPP/forward_list/exemplo_forward_list.cpp)

