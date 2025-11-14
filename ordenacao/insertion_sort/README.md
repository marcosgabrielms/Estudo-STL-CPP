# 🗂️ Insertion Sort (Ordenação por Inserção)

Esta pasta contém a implementação em C++ do algoritmo **Insertion Sort** (Ordenação por Inserção).

## 📖 Como Funciona

Assim como o Selection Sort, ele divide o vetor em uma parte ordenada (à esquerda) e uma desordenada (à direita).

O algoritmo funciona como ao organizar cartas de um baralho na mão:
1.  Começa com o segundo elemento (índice 1) do vetor, tratando-o como a "chave" a ser inserida.
2.  Compara essa "chave" com os elementos à sua esquerda (a parte já ordenada).
3.  Se a chave for menor, "desloca" os elementos maiores para a direita para abrir espaço.
4.  Continua deslocando até encontrar a posição correta onde a chave é maior ou igual ao elemento da esquerda.
5.  Insere a chave nessa posição.
6.  Repete o processo para o próximo elemento da parte desordenada.

## 📊 Complexidade

* **Pior Caso:** $O(n^2)$ (Ocorre se o vetor estiver ordenado ao contrário).
* **Melhor Caso:** $O(n)$ (Ocorre se o vetor já estiver ordenado; ele só faz uma verificação por elemento).
* **Complexidade de Espaço:** $O(1)$.

É muito eficiente para vetores pequenos ou vetores que estão "quase ordenados".

## 🚀 Código-Fonte

* **Implementação:** [`insertion_sort.cpp`](./insertion_sort.cpp)