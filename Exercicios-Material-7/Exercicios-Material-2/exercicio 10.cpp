#include <iostream>
using namespace std;

enum Cores{
    vermelho,
    verde,
    azul
};

typedef Cores TipoCor;

int main(){

    TipoCor cor;
    int opcao;

    cout << "Escolha uma cor:\n";
    cout << "0 - Vermelho\n";
    cout << "1 - Verde\n";
    cout << "2 - Azul\n";
    cin >> opcao;

    cor = (TipoCor) opcao;

    cout << "Cor escolhida: ";

    if(cor == vermelho)
        cout << "Vermelho";
    else if(cor == verde)
        cout << "Verde";
    else
        cout << "Azul";

    return 0;
}
