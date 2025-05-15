#include <iostream>
using namespace std;

//vetores são automaticamente passados por referencia

int fatorial(int n){
    if (n==0){
        return 1;
    }else{
        return n*fatorial(n-1);
    }
}

void imprimir(int v[], int tamanho){
    for(int i=0; i<tamanho; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void fatorialVetor(int v[], int tamanho){
    for(int i = 0; i<tamanho; i++){
        v[i] = fatorial(v[i]);
    }
}

int main(){
    int tamanho;
    cin>>tamanho;
    int vet[tamanho], i;
    for(i=0; i<tamanho;i++){
        cin>>vet[i];
    }

    imprimir(vet, tamanho);
    fatorialVetor(vet, tamanho);
    imprimir(vet,tamanho);
}   