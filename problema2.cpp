#include <iostream>
using namespace std;

struct aluno{
    int matricula;
    string nome;
    float n1,n2;
    char sexo;
};

void imprime(int tamanho, aluno alunos[]){
    for(int i = 0; i<tamanho; i++){
        cout<<alunos[i].nome<< " ";
        cout<<alunos[i].n1<<" ";
        cout<<alunos[i].n2<< " ";
        cout<<alunos[i].sexo<<endl;
    }
}

float calculaMedia (aluno alunos[], int total){
    float media;
    //fazer isso aqui depois

    return media;
}

int main(){
    int tamanho;
    cout<<"Insira a quantidade de alunos: ";
    cin>>tamanho;

    aluno alunos[tamanho];

    for(int i=0; i<tamanho; i++){
        cin>>alunos[i].matricula;
        cin>>alunos[i].nome;
        cin>>alunos[i].n1;
        cin>>alunos[i].n2;
        cin>>alunos[i].sexo;
    }

    imprime(tamanho,alunos);

    return 0;
}