# ➡️ std::forward_list

Esta pasta contém um exemplo do `std::forward_list`, a "rua de mão única" da STL.

## 📖 O que é?

É uma lista simplesmente encadeada. Cada elemento só sabe quem é o próximo; ele não tem ideia de quem veio antes.



## 🚀 Pontos Fortes

* **Extremamente Leve:** É o contêiner de lista com o menor uso de memória.
* **Inserção Rápida:** Otimizado para inserir elementos *depois* de um elemento existente.

## 🐢 Pontos Fracos

* **Mão Única:** Só pode andar para frente (`++it`). Não pode andar para trás (`--it`).
* **Sem Acesso Rápido:** Não permite acesso por índice (ex: `lista[5]`).
* **Limitado:** Não tem `.size()` (para saber o tamanho, teria que percorrer tudo, o que é lento). Não tem `push_back()` (ele não sabe onde é o fim).

## 💡 Quando Usar?

Em cenários muito específicos onde a memória é *extremamente* restrita e você só precisa inserir no início (`push_front`) e andar para frente.

## 🚀 Código-Fonte

* **Implementação:** [`exemplo_forward_list.cpp`](./exemplo_forward_list.cpp)