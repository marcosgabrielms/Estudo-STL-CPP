# 🧊 std::array

Esta pasta contém um exemplo do `std::array`, um contêiner de tamanho fixo.

## 📖 O que é?

É um "caixote de tamanho fixo". Basicamente, é um array normal do C (ex: `int v[10]`) com uma "capa" de C++ que o deixa mais inteligente e seguro.



## 🚀 Pontos Fortes

* **Sabe o Próprio Tamanho:** Diferente de um array C, ele sabe seu tamanho (ex: `meu_array.size()`).
* **Seguro:** Pode ser passado para funções sem "perder" o tamanho e permite acesso seguro com o método `.at()`.
* **Rápido:** Exatamente a mesma performance de um array C nativo.

## 🐢 Pontos Fracos

* **Tamanho Fixo:** O tamanho **não pode mudar** nunca. É definido em tempo de compilação (ex: `std::array<int, 10>`).

## 💡 Quando Usar?

Quando você sabe *exatamente* o tamanho que precisa (ex: "um vetor de 3 dimensões (x,y,z)", "cores RGB (r,g,b)") e esse tamanho nunca, jamais, mudará durante a execução.

## 🚀 Código-Fonte

* **Implementação:** [`exemplo_array.cpp`](./exemplo_array.cpp)