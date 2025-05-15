#include <iostream>
using namespace std;
int somaDigitos(int n){
    int resto, soma=0;

    while(n/10>0){
        resto = n%10;
        soma+=resto;
        n = n/10;
    }
    soma+=n;
    return soma;
}

bool ehHarshad(int n){
    if(n % somaDigitos(n)== 0){
        return true;
    }else{
        return false;
    }

}

int main(){
    int n;
    cout<<"Digite um numero: ";
    cin>>n;
    if(ehHarshad(n)){
        cout<<"verdadeiro";
    }else{
        cout<<"Não é Harshad";
    }

    return 0;
}