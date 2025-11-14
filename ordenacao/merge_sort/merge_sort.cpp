#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Função auxiliar para imprimir o vetor
void imprimirVetor (const vector<int>& vetor, string titulo) {
    cout << titulo <<  ":\t[ ";
    for (int item : vetor) {
        cout << item <<  " . ";
    }
    cout << "]" << endl; 
}

/**
 * Função "merge" (Juntar)
 * Pega duas metades ordenadas (p..q e q+1..r) e as junta em uma só.
 */
void merge(vector<int>& v, int p, int q, int r) {
    int n1 = q - p + 1; // Tamanho da metade esquerda
    int n2 = r - q;     // Tamanho da metade direita

    // Cria vetores temporários
    vector<int> esquerda(n1);
    vector<int> direita(n2);

    // Copia os dados para os vetores temporários
    for (int i = 0; i < n1; i++)
        esquerda[i] = v[p + i];
    for (int j = 0; j < n2; j++)
        direita[j] = v[q + 1 + j];

    // Índices para percorrer os vetores
    int i = 0; // índice da esquerda
    int j = 0; // índice da direita
    int k = p; // índice do vetor principal 'v' onde vamos inserir

    // --- O "Merge" ---
    // Compara os elementos da esquerda e direita e insere o menor em 'v'
    while (i < n1 && j < n2) {
        if (esquerda[i] <= direita[j]) {
            v[k] = esquerda[i];
            i++;
        } else {
            v[k] = direita[j];
            j++;
        }
        k++;
    }

    // --- Copia os elementos restantes ---
    // (Se um dos vetores temporários acabou antes do outro)
    while (i < n1) {
        v[k] = esquerda[i];
        i++;
        k++;
    }
    while (j < n2) {
        v[k] = direita[j];
        j++;
        k++;
    }
}

/**
 * Função "mergeSort" (Dividir)
 * A função recursiva que divide o vetor.
 */
void mergeSort(vector<int>& v, int p, int r) {
    // 'p' é o início (primeiro) e 'r' é o fim (último)
    
    // Condição de parada da recursão (quando o vetor tem 1 elemento)
    if (p < r) {
        // Encontra o meio
        int q = p + (r - p) / 2;

        // 1. Divide: Chama o mergeSort para as duas metades
        mergeSort(v, p, q);
        mergeSort(v, q + 1, r);

        // 2. Conquista: Junta as metades ordenadas
        merge(v, p, q, r);
        
        // Imprime o estado após cada "merge"
        cout << "Juntando (" << p << ".." << q << ") e (" << q+1 << ".." << r << "):\t";
        imprimirVetor(v, "");
    }
}

int main() {
    cout << " Testando o Merge Sort " << endl;
    vector<int> dados = {46, 38, 50, 27, 19};

    imprimirVetor(dados, "Original");

    // Chama o mergeSort (índice 0 até o último índice)
    mergeSort(dados, 0, dados.size() - 1);

    imprimirVetor(dados, "Ordenado");

    return 0;
}