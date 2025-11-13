:books: docs: adiciona documentação sobre Bubble Sort# 🚶 Busca Linear (Linear Search)

Esta pasta contém a implementação em C++ do algoritmo **Busca Linear**, o método de busca mais direto que existe.

## 📖 Como Funciona

Para verificar se um item `x` está em um vetor `v`, a busca linear simplesmente examina cada item de `v`, desde $v_0$, até encontrar um que seja igual a `x` ou, então, até que todos eles tenham sido examinados.

É o equivalente a procurar uma blusa em uma gaveta bagunçada: você tem que tirar uma por uma até achar a que quer (ou ver que ela não está ali).



## 📊 Complexidade

* **Pior Caso:** $O(n)$ (O item não existe, ou é o último da lista).
* **Vantagem Principal:** A busca linear funciona mesmo quando o vetor não está ordenado.

É um método simples e robusto, mas lento para coleções muito grandes.

## 🚀 Código-Fonte

* **Implementação:** [`busca_linear.cpp`](./busca_linear.cpp)