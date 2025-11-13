# 📦 std::vector

Esta pasta contém um exemplo do `std::vector`, o contêiner de sequência mais fundamental da STL.

## 📖 O que é?

O `std::vector` é o "pau pra toda obra" da STL. É um array dinâmico, o que significa que ele pode crescer e diminuir de tamanho automaticamente.



## 🚀 Pontos Fortes

* **Acesso Rápido:** O acesso a elementos por índice (ex: `v[5]`) é instantâneo (complexidade $O(1)$).
* **Adição Rápida no Fim:** Adicionar no final (`push_back`) é (geralmente) muito rápido.

## 🐢 Pontos Fracos

* **Inserção Lenta:** Adicionar ou remover elementos do **início** ou do **meio** da lista é *extremamente lento* (complexidade $O(n)$), pois exige que todos os elementos seguintes sejam movidos.

## 💡 Quando Usar?

**Quase sempre.** Se você precisa de uma lista de coisas, comece com `vector`. Mude para outro contêiner apenas se tiver um bom motivo (como precisar inserir muito no *início* da lista).

## 🚀 Código-Fonte

* **Implementação:** [`exemplo_vector.cpp`](./exemplo_vector.cpp)