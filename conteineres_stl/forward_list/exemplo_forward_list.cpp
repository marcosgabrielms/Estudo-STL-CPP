#include <iostream>
#include <forward_list>

using namespace std;

int main() {

    // Inicializa uma lista de valores

    forward_list<int> mylist = {34, 77, 16, 2};

    // Imprime um rótulo
    cout<< "Mylist: ";

    //Caminho do início (begin) até o fim(endl), avançando com o ++it

    for ( auto it = mylist.begin(); it != mylist.end(); it++)
        cout << ' ' << *it; //*it acessa o valor

        cout<< '\n';
    
    return 0;
}