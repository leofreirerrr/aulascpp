#include <iostream>
using namespace std;

struct country{
    string nome;
    int populacao;
};//ponto e virgula é obrigatorio

void alterar(country &p1){
    cout<<"Digite um novo nome: ";
    cin>>p1.nome;
}

void imprime(int tamanho, country vetor[]){// o colchete vazio é para indicar q é mais de um parâmetro
    for(int i=0; i<tamanho; i++){
        cout<<"País: "<<vetor[i].nome<<"\tPopulação: "<<vetor[i].populacao<<endl;
    }

}
int main(){
    int n;
    cout<<"Informe a quantidade de elementos: ";
    cin>>n;

    country vetor[n];
    
    cout<<"Insira "<< n<< " nomes de países e suas populações\n";

    for(int i=0; i<n; i++){
        cin>>vetor[i].nome;
        cin>>vetor[i].populacao;
    }

    imprime(n,vetor);
    
    return 0;
}