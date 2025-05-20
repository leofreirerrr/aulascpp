#include <iostream>
using namespace std;

struct country{
    string nome;
    int populacao;
};

int main(){
    country p1;
    
    cout<<"Insira o nome e a população do país: ";
    cin>>p1.nome;
    cin>>p1.populacao;
    cout<<"País: "<<p1.nome<<"\t"<<"População: "<<p1.populacao<<endl;

    return 0;
}