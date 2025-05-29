#include <iostream>
using namespace std;

void saida(int t, int v[]){
    int i;

    for (i = 0; i < t; i++)
        cout << v[i] << " ";
    cout << endl;
}

// Para ordenar do maior pro menor, basta trocar o sinal de comparação
void selection_sort(int t, int v[]){
    int menor, aux_troca, i, j;
    // t = tamanho do vetor
    // v = vetor a ser ordenado
    for (i = 0; i < t - 1; i++){
        menor = i;
        for (j = i + 1; j < t; j++){
            if (v[j] < v[menor]) // Se o elemento v[j] for menor que o elemento v[menor]
                // Atualiza o índice do menor elemento encontrado
                menor = j;
        }
    // Troca o menor elemento encontrado com o elemento na posição i
        aux_troca = v[i];
        v[i] = v[menor];
        v[menor] = aux_troca;
        //terminou uma troca
        saida(t, v);
    }
}
int main(){
    int tamanho = 0;
    cout << "Digite o tamanho do vetor: ";
    cin>> tamanho;
    int v[tamanho];

    cout << "Digite os elementos do vetor:  ";
    for(int  i = 0; i < tamanho; i++){
        cin >> v[i];
    }

    selection_sort(tamanho, v);
    saida(tamanho, v);

    return 0;
}