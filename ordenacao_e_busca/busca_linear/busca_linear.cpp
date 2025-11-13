#include <iostream>
#include <vector>

using namespace std;

int buscaLinear(const vector <int>& vetor,  int alvo) {
    for (int i =0; i < vetor.size(); i++) {

        if (vetor[i] == alvo) {
        return i;
        }
    }

    return -1;
}

int main() {
    vector<int> dados = {46, 38, 50, 27, 19};
    int alvo = 27;

    int indice = buscaLinear(dados, alvo);
    
    if (indice != -1) {
       
        cout<< "Busca Linear: Alvo " << alvo << " encontrado no indice " << indice << "." << endl;
    } else {
        cout << "Busca Linear: Alvo " << alvo << " nao encontrado no indice " << indice << "." << endl;
    }

    alvo = 99;
    indice = buscaLinear(dados, alvo);

     if (indice != -1) {
        cout<< "Busca Linear: Alvo " << alvo << " encontrado no indice " << indice << "." << endl;
    } else {
        cout << "Busca Linear: Alvo " << alvo << " nao encontrado no indice " << indice << "." << endl;
    }

    return 0;
}