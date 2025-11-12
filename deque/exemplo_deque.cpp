#include <iostream>
#include <deque>

using namespace std;

// Funçãozinha para imprimir o deque
void printDeque(const deque<int>& d) {
    cout<<"Conteudo do Deque: [ ";
    for (int num : d) {
        cout<< num << " ";
    }
    cout<< "]" <<endl;
}

int main() {
    deque<int> meu_deque; //Cria um deque de inteiros

    // Adicionando no FIM (igual ao vector)
    cout<< "Adicionando 10 e 20 no FIM..\n";
    meu_deque.push_back(10);
    meu_deque.push_back(20);
    printDeque(meu_deque); // Saída esperada: [10 20]

    cout<<"---------------------\n";

    // Adicionando no INÍCIO 
    cout<< "Adicionando 1 e 2 no INICIO.. \n";
    meu_deque.push_front(1);
    meu_deque.push_front(2);
    printDeque(meu_deque); //Saída esperada [2 1 10 20]

    cout<<"---------------------\n";

    // Acesso pelo índice (igual ao vector)

    cout<<"Acessando elemento do indice [2]: " <<meu_deque.at(2) << endl; //Vai imprimir o 10
    cout<<"Acessando elemento do indice [0]: " <<meu_deque.at(0) << endl; //Vai imprimir o 2
    cout<<"Acessando elemento do indice [3]: " <<meu_deque.at(3) << endl; //Vai imprimir o 20

    cout << "---------------------\n";

     // Removendo dos dois lados
     cout<<"Removendo um do INICIO (pop_front) \n";
     meu_deque.pop_front(); // Remove o 2 que está no início do deque
     printDeque(meu_deque); // Saída: [1 10 20]

     cout<<"Removendo um do FIM (pop_back) \n";
     meu_deque.pop_back(); // Remove o 20 que está no fim do deque
     printDeque(meu_deque);

    return 0;
}