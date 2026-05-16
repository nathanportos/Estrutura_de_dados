#include <iostream>
using namespace std;

int main() {
    float precoEtiqueta, valorFinal;
    int codigo;

    cout << "Digite o preco de etiqueta: ";
    cin >> precoEtiqueta;

    cout << "Digite o codigo da condicao de pagamento (1 a 4): ";
    cin >> codigo;

    switch(codigo) {
        case 1:
            valorFinal = precoEtiqueta * 0.90;
            cout << "Pagamento a vista (10% desconto)" << endl;
            break;
        case 2:
            valorFinal = precoEtiqueta * 0.95;
            cout << "Pagamento a vista no cartao (5% desconto)" << endl;
            break;
        case 3:
            valorFinal = precoEtiqueta;
            cout << "Pagamento em 2x sem juros" << endl;
            break;
        case 4:
            valorFinal = precoEtiqueta * 1.10;
            cout << "Pagamento em 3x com 10% acrescimo" << endl;
            break;
        default:
            cout << "Codigo invalido!" << endl;
            return 0;
    }

    cout << "Valor final: " << valorFinal << endl;


}
