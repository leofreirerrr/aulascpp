#include <iostream>
using namespace std;


//para uma modificação ser feita na propria variavel é so colocar & na frente da variavel (passando por refencia no cabeçalho da função)

int divide(int a, int &b){
    int quociente = a/b;
    b = a%b;
    return quociente;
}

int main(){
    int a = 25, b=3;
    cout<<divide(a,b)<<" "<<b<<endl;
}