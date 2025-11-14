# 🧬 Merge Sort (Ordenação por Junção)

Esta pasta contém a implementação em C++ do algoritmo **Merge Sort** (Ordenação por Junção).

## 📖 Como Funciona

O Merge Sort é um algoritmo clássico de **"Dividir e Conquistar"**:

1.  **Dividir:** O algoritmo divide recursivamente o vetor ao meio, repetindo o processo em cada metade até que restem apenas vetores de tamanho 1 (que, por definição, já estão ordenados).
2.  **Conquistar (Merge/Juntar):** O algoritmo começa a "juntar" (merge) os pequenos vetores ordenados. Ele pega dois vetores ordenados e os combina em um novo vetor maior, que também estará ordenado.
3.  Esse processo de junção sobe pela "árvore" de recursão até que o vetor original inteiro esteja ordenado.

A "mágica" acontece na função `merge`, que junta dois vetores ordenados de forma eficiente.

## 📊 Complexidade

* **Pior Caso:** $O(n~lg~n)$
* **Melhor Caso:** $O(n~lg~n)$ (A complexidade é a mesma independentemente da ordem inicial).
* **Complexidade de Espaço:** $O(n)$
    * **Desvantagem:** O Merge Sort não ordena no próprio vetor (`in-place`). Ele exige um vetor auxiliar de tamanho $O(n)$ para realizar a junção, o que gasta mais memória.

## 🚀 Código-Fonte

* **Implementação:** [`merge_sort.cpp`](./merge_sort.cpp)