#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Para std::swap

using namespace std;

void imprimirVetor (const vector<int>& vetor, string titulo) {
    cout << titulo <<  ":\t[ ";
    for (int item : vetor) {
        cout << item <<  " . ";
    }
    
    cout << "]" << endl; 
}

void imprimirPasso (const vector<int>&vetor, string nomePasso) {
    cout << nomePasso << ":\t";
   
    imprimirVetor(vetor, ""); 
}

void bubbleSort(vector<int>& v) {
    int n = v.size();

    
    for (int i = 0; i < n - 1; i++) {
        
        
        for( int j = 0; j < n - i - 1; ++j) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j +1]);
            }
        }
        
       
         imprimirVetor(v, "Apos passada " + to_string(i+1));
    }
}

int main() {
    cout << " Testando o Bubble Sort " << endl;
    vector<int> dados = {46, 38, 50, 27, 19 };

    imprimirVetor(dados, "Original");

    bubbleSort(dados);

    imprimirVetor(dados, "Ordenado");

    return 0;
}