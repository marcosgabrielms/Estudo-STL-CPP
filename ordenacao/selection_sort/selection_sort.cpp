#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void imprimirVetor(const vector<int>& vetor, string titulo) { // Função auxiliar para imprimir o vetor
    cout << titulo << ":\t[ ";
    for (int item : vetor) {
        cout << item << " . ";
    }
    cout << "]" << endl;
}

void selectionSort(vector<int>& v) {
    int n = v.size();

    // Loop principal (passadas)
    // Vai de 0 até n-2 (o último elemento já estará ordenado)
    for (int i = 0; i < n - 1; i++) { 
        int indice_minimo = i; // Assume que o menor é o primeiro da parte desordenada

        for (int j = i + 1; j < n; j++) { // Loop interno: encontra o índice do menor elemento
            if (v[j] < v[indice_minimo]) {
                indice_minimo = j;
            }
        }

        if (indice_minimo != i) { // Se o índice do menor for diferente do atual (i), troca
            swap(v[i], v [indice_minimo]);
        }
        imprimirVetor(v, "Apos passada " + to_string(i+1));
    }
}

int main(){
    cout << "Testando o Selection Sort " << endl;
    vector<int> dados = {50, 46, 38, 27, 19};

    imprimirVetor(dados, "Original");

    selectionSort(dados);

    imprimirVetor(dados, "Ordenado");

    return 0;
}