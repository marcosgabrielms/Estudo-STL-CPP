# 📚 Meus Estudos de Estrutura de Dados e Algoritmos

Este repositório serve como um diário de estudos e referência rápida para várias implementações de estruturas de dados e algoritmos clássicos, com foco principal na **STL (Standard Template Library)** do C++.

## 1. 🗂️ Estruturas de Dados (Contêineres STL)

Implementações e resumos dos principais contêineres da STL. A explicação detalhada de cada um está no `README.md` dentro de sua respectiva pasta.

| Categoria | Contêiner | O que é? | Ver Código/Explicação |
| :--- | :--- | :--- | :--- |
| **Sequência** | `std::vector` | O "pau pra toda obra". Um array que cresce automaticamente. | [`./vector/`](./vector/) |
| **Sequência** | `std::deque` | "Fila de duas pontas". Permite inserção rápida no início e no fim. | [`./deque/`](./deque/) |
| **Sequência** | `std::array` | Um "caixote" de tamanho fixo. Um array C com superpoderes. | [`./array/`](./array/) |
| **Sequência** | `std::forward_list`| A "rua de mão única". Lista simplesmente encadeada (leve). | [`./forward_list/`](./forward_list/) |
| | | | |

## 2. ⚡ Algoritmos (Ordenação e Busca)

Implementações de algoritmos clássicos baseados no [Capítulo 8 - Ordenação e Busca]. Cada pasta contém seu próprio `README.md` com a explicação teórica (complexidade, funcionamento) e o código-fonte.

| Categoria | Algoritmo | Complexidade (Pior Caso) | Ver Código/Explicação |
| :--- | :--- | :--- | :--- |
| **Ordenação** | `Bubble Sort` | $O(n^2)$ | [`./ordenacao_e_busca/metodos_ordenacao/bubble_sort/`](./ordenacao_e_busca/metodos_ordenacao/bubble_sort/) |
| **Ordenação** | `Selection Sort` | $O(n^2)$ | [`./ordenacao_e_busca/metodos_ordenacao/selection_sort/`](./ordenacao_e_busca/metodos_ordenacao/selection_sort/) |
| **Ordenação** | `Insertion Sort` | $O(n^2)$ | [`./ordenacao_e_busca/metodos_ordenacao/insertion_sort/`](./ordenacao_e_busca/metodos_ordenacao/insertion_sort/) |
| **Ordenação** | `Merge Sort` | $O(n~lg~n)$ | [`./ordenacao_e_busca/metodos_ordenacao/merge_sort/`](./ordenacao_e_busca/metodos_ordenacao/merge_sort/) |
| **Busca** | `Busca Linear` | $O(n)$ | [`./ordenacao_e_busca/busca_linear/`](./ordenacao_e_busca/busca_linear/) |
| **Busca** | `Busca Binária` | $O(lg~n)$ | [`./ordenacao_e_busca/busca_binaria/`](./ordenacao_e_busca/busca_binaria/) |

## 3. 🚀 Como Executar os Exemplos

Todos os exemplos são arquivos C++ (`.cpp`) independentes. Você precisará de um compilador C++ (como o **g++**) instalado na sua máquina.

### Passo a Passo (Pelo Terminal)

1.  **Clone o repositório** para a sua máquina (se ainda não o fez):
    ```bash
    git clone [https://github.com/marcosgabrielms/Estudo-STL-CPP.git](https://github.com/marcosgabrielms/Estudo-STL-CPP.git)
    cd Estudo-STL-CPP
    ```

2.  **Navegue até a pasta** do exemplo que você quer rodar.
    ```bash
    # Exemplo para o vector
    cd vector
    
    # Exemplo para o Bubble Sort
    # cd ordenacao_e_busca/metodos_ordenacao/bubble_sort
    ```

3.  **Compile o arquivo:**
    Use o `g++` (ou outro compilador) para criar um arquivo executável. O comando é:
    `g++ <arquivo.cpp> -o <nome_do_executavel>`

    ```bash
    # Exemplo para o vector
    g++ exemplo_vector.cpp -o teste_vector
    ```

4.  **Execute o programa:**
    * **No Linux/macOS:**
        ```bash
        ./teste_vector
        ```
    * **No Windows:**
        ```bash
        .\teste_vector.exe
        ```