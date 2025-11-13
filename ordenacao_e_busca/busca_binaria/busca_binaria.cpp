#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int buscaBinaria(vector <int>& vetor, int alvo) {
    int p = 0;
    int u = vetor.size() -1;

    while (p <= u) {
    
        int m = p + (u - p) /2;

        if(vetor[m] == alvo) {
            return m;
        }

        if(alvo < vetor[m]) {
            u = m - 1;
        }
        else {
            p = m + 1;
        }
    }

    return -1;
} 

int main() {
    vector<int> dados = {19, 27, 38, 46, 50 };

    int alvo = 46;
    int indice = buscaBinaria(dados, alvo);

    if (indice != -1 ) {
        cout << "Busca Binaria: Alvo " << alvo << " encontrado no indice " << indice << endl;

    } else {
        cout << "Busca Binaria: Alvo " << alvo << " nao encontrado " << endl;
    }

    alvo = 100;
    indice = buscaBinaria(dados, alvo);

    if (indice != -1) {
          cout << "Busca Binaria: Alvo " << alvo << " encontrado no indice " << indice << endl;

    } else {
        cout << "Busca Binaria: Alvo " << alvo << " nao encontrado " << endl;
    }

    return 0;
}