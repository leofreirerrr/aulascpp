#include <iostream>
using namespace std;

struct meme{
    int numero;
    string arquivo;
    string assunto;
    string site;
};

void entrada (meme v[], int total){
    for(int i = 0; i < total; i++){
        cin >> v[i].numero >> v[i].arquivo;
        cin >> v[i].assunto>> v[i].site;
    }
}

void imprime(meme v[], int total){
    for(int i = 0; i < total; i++){
        cout << "\n";
        cout << v[i].numero << " " << v[i].arquivo << " ";
        cout << v[i].assunto << " " << v[i].site << endl;
    }
}

//pra trocar o campo que eu quero ordenar, basta trocar o v[j].assunto por outro campo
// Exemplo: v[j].numero, v[j].arquivo, v[j].site
void selection_sort(meme v[], int t){
    int menor, i, j;
    meme aux_troca;
    // t = tamanho do vetor
    // v = vetor a ser ordenado
    for (i = 0; i < t - 1; i++){
        menor = i;
        for (j = i + 1; j < t; j++){
            if (v[j].assunto < v[menor].assunto) // Se o elemento v[j] for menor que o elemento v[menor]
                // Atualiza o índice do menor elemento encontrado
                menor = j;
        }
    // Troca o menor elemento encontrado com o elemento na posição i
        aux_troca = v[i];
        v[i] = v[menor];
        v[menor] = aux_troca;
        //terminou uma troca
    }
}

int main(){
    int total, i;
    cin >> total;
    meme v[total];

    entrada(v, total);
    selection_sort(v, total);
    imprime(v, total);


}