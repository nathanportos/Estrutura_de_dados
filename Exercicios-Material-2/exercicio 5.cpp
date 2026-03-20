#include <iostream>
using namespace std;

int main() {

    string prato;
    int quantidade;
    float preco;

    while(true){

        cout << "Nome do prato: ";
        cin >> prato;

        cout << "Quantidade: ";
        cin >> quantidade;

        cout << "Preco total (0 para encerrar): ";
        cin >> preco;

        if(preco == 0){
            break;
        }

    }

    return 0;
}
