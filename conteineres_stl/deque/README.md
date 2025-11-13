# ↔️ std::deque

Esta pasta contém um exemplo do `std::deque` (Double-Ended Queue), ou "Fila de Duas Pontas".

## 📖 O que é?

Pense em um "canudo" onde você pode adicionar ou remover itens de qualquer um dos lados (início ou fim) com a mesma eficiência.



## 🚀 Pontos Fortes

* **Rápido nos Extremos:** Tão rápido quanto o `vector` para adicionar no final (`push_back`) e igualmente rápido para adicionar no **início** (`push_front`).
* **Acesso Rápido:** Permite acesso rápido por índice (ex: `d[5]`), assim como o `vector`.

## 🐢 Pontos Fracos

* **Um Pouco Mais Lento:** Cada inserção (início ou fim) é *um pouquinho* mais lenta que a `push_back` otimizada do `vector`.
* **Mais Memória:** Usa um pouco mais de memória para gerenciar seus blocos de dados.

## 💡 Quando Usar?

Quando você precisa da velocidade de acesso por índice de um `vector` (acesso por `[]`), mas também precisa (e muito) adicionar e remover do **início** da lista.

## 🚀 Código-Fonte

* **Implementação:** [`exemplo_deque.cpp`](./exemplo_deque.cpp)