#include <iostream>
using namespace std;

//ver essa bosta de questão depois

struct Brinquedo{
    string nomeBrinquedo;
    int disponivel;
    int pedido;
};

struct Carta{
    string crianca;
    string nomeBrinquedo;
};

void verificaPedidos(CartaCartinhas[], Brinquedo vBrinquedo[], int totalCrianca, int totalBrinquedo){
    for (int i = 0; i < totalCrianca; i++){
        for (int j = 0; j < totalBrinquedo; j++){
            if (carinhas[i].nomeBrinquedo == vBrinquedo[j].nomeBrinquedo){
                if(vBrinquedo[j].disponivel>=1){
                    vBrinquedo[j].disponivel--;
                }
            }
        }
    }
}

int main(){
    int totalCrianca, totalBrinquedo;
    cin >> totalCrianca;
    Carta cartinhas[totalCrianca];

    for(int i = 0; i < totalCrianca; i++){
        cin >> cartinhas[i].crianca>> cartinhas[i].nomeBrinquedo; 
    }

    cin >> totalBrinquedo;
    Brinquedo vBrinquedo[totalBrinquedo];

    for (int i = 0; i < totalBrinquedo; i++){
        cin >> vBrinquedo[i].nomeBrinquedo;
        cin >> vBrinquedo[i].disponivel;
        vBrinquedo[i].pedido = 0;
    }

    return 0;
}