# 🚀 Busca Binária (Binary Search)

Esta pasta contém a implementação em C++ do algoritmo **Busca Binária**, um método de busca extremamente rápido e eficiente.

## 📖 Como Funciona

A Busca Binária tem um pré-requisito crucial: ela **só funciona em um vetor ordenado**.

Seu método é como procurar uma palavra em um dicionário:
1.  Ela examina o item $v_m$ que está no meio de `v`.
2.  Se o item do meio for o alvo (`x`), a busca termina.
3.  Se o alvo for *menor* que o item do meio, ela descarta a metade direita e repete o processo na metade esquerda.
4.  Se o alvo for *maior* que o item do meio, ela descarta a metade esquerda e repete o processo na metade direita.

A cada comparação, a busca binária reduz o total de itens à metade, o que a torna incrivelmente rápida.



## 📊 Complexidade

* **Pior Caso:** $O(lg~n)$
* **Desvantagem:** Exige que o vetor esteja previamente ordenado.

## 🚀 Código-Fonte

* **Implementação:** [`busca_binaria.cpp`](./busca_binaria.cpp)