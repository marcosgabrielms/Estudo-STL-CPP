#include <iostream>
#include <vector>
#include <string>

using namespace std;

void imprimitVetor(const vector<int>& vetor, string titulo) {
    cout << titulo << ":\t[ ";
    for (int item : vetor){
        cout << item << " . ";
    }
    cout << "]" << endl;
}

void insertionSort(vector<int>& v) {
    int n = v.size();

    for(int i=1; i < n; i++) { //Loop começa do segundo elemento
        
        int chave = v[i]; //Pega o elemento chave a ser inserido

        int j = i - 1; // 'j' é o índice do elemento à esquerda da chave

        // Loop "while" para deslocar os elementos 
        // maiores que a chave para a direita

        while (j >= 0 && v[j] > chave) {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = chave; // Encontramos a posição correta (j+1) e inserimos a chave

        imprimitVetor(v, "Inserindo " + to_string(chave) + " (pass" + to_string(i) + ")" );
    }
}

int main() {
    cout << "Testando o Insertion Sort " << endl;
    vector<int> dados = {46, 38, 50, 27, 19};

    imprimitVetor(dados, "Original");

    insertionSort(dados);

    imprimitVetor(dados, "Ordenado");

    return 0;
}