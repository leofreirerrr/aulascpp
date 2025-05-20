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

void imprime(country &p1){
    cout<<"País: "<<p1.nome<<"\t"<<"População: "<<p1.populacao<<endl;
}
int main(){
    country p1;
    
    cout<<"Insira o nome e a população do país: ";
    cin>>p1.nome;
    cin>>p1.populacao;

    imprime(p1);
    alterar(p1);
    imprime(p1);


    return 0;
}
