# 🫧 Bubble Sort (Ordenação por Trocas)

Esta pasta contém a implementação em C++ do algoritmo **Bubble Sort**, um dos métodos de ordenação mais simples e fundamentais.

## 📖 Como Funciona

O Bubble Sort (ou "ordenação por trocas") funciona varrendo o vetor várias vezes, comparando itens adjacentes. Se um par de itens adjacentes estiver fora de ordem, eles são trocados de posição.

Esse processo é repetido em múltiplas "varreduras". Após a primeira varredura completa, o **maior item** do vetor "borbulha" e se fixa na última posição. Após a segunda varredura, o segundo maior item se fixa na penúltima posição, e assim por diante, até que todo o vetor esteja ordenado.



## 📊 Complexidade

* **Pior Caso:** $O(n^2)$
* **Melhor Caso (Vetor já ordenado):** $O(n)$ (com uma pequena otimização para parar cedo, o que não está na versão do PDF).
* **Complexidade de Espaço:** $O(1)$ (pois ordena no próprio vetor).

O algoritmo é simples de entender, mas se torna muito lento para vetores grandes em comparação com métodos como o Merge Sort.

## 🚀 Código-Fonte

* **Implementação:** [`bubble_sort.cpp`](./bubble_sort.cpp)