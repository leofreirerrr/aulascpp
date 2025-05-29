#include <iostream>
using namespace std;

struct aluno{
    int matricula;
    string nome;
    float n1,n2;
    char sexo;
};

void imprime(aluno alunos[], int tamanho){
    cout<<""<<endl;
    cout<<"--------------------------"<<endl;
    for(int i = 0; i<tamanho; i++){
        cout<<"Nome: "<< alunos[i].nome<< " ";
        cout<<"Nota 1: "<< alunos[i].n1<<" ";
        cout<<"Nota 2: "<< alunos[i].n2<< " ";
        cout<<"Sexo: "<< alunos[i].sexo<<endl;
        cout << endl;
    }
}

float calculaMedia (aluno alunos[], int total){
    float mediaMasc, soma = 0;
    int cont = 0;
    for (int i = 0; i < total; i++){
        soma += alunos[i].n1 + alunos[i].n2;
    }

    return soma / (total * 2);
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

    imprime(alunos, tamanho);

    float media = calculaMedia(alunos, tamanho);
    cout<<"Media da turma "<<media<<endl;

    return 0;
}
//falta a media dos alunos do sexo masculino