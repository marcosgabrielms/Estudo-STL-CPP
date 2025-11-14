# 📦 Selection Sort (Ordenação por Seleção)

Esta pasta contém a implementação em C++ do algoritmo **Selection Sort** (Ordenação por Seleção).

## 📖 Como Funciona

O Selection Sort divide o vetor em duas partes: uma parte ordenada (que começa vazia no início) e uma parte desordenada (o resto do vetor).

O algoritmo funciona da seguinte forma:
1.  Encontra o **menor** elemento na parte desordenada.
2.  Troca (`swap`) esse elemento com o primeiro elemento da parte desordenada.
3.  Isso "move" a fronteira entre as partes ordenada e desordenada um passo para a direita.
4.  Repete o processo até que todo o vetor esteja ordenado.

A cada "passada", o próximo menor elemento é "selecionado" e colocado em sua posição final correta.

## 📊 Complexidade

* **Pior Caso:** $O(n^2)$
* **Melhor Caso:** $O(n^2)$ (Ele sempre fará as $n^2$ comparações, mesmo que o vetor já esteja ordenado).
* **Complexidade de Espaço:** $O(1)$ (ordena no próprio vetor).

É um algoritmo simples, mas ineficiente para grandes conjuntos de dados.

## 🚀 Código-Fonte

* **Implementação:** [`selection_sort.cpp`](./selection_sort.cpp)