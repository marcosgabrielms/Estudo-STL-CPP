#include <iostream>
#include <array>

using namespace std; //Chama as funções pelo nome ao invés de colocar o 'std'

int main() {

    array<int, 10> myarray; // Array de tamanho FIXO 10, de inteiros

    cout << "Preenchendo o array com os numeros de 1 a 10 \n";

    for (int i=0; i<10; i++) // Atribui valores usando .at() <- mais seguro
    myarray.at(i) =  i+1;

    cout << "MyArray: ";
    for (int i=0; i<10; i++)
    cout << ' ' << myarray.at(i);
    cout << '\n';

    return 0;
}