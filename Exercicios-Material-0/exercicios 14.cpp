#include <iostream>
using namespace std;

int main(){

    int op;

    do{

        cout << endl;
        cout << "===== MENU =====" << endl;
        cout << "1 - Mostrar mensagem 1" << endl;
        cout << "2 - Mostrar mensagem 2" << endl;
        cout << "3 - Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> op;

        switch(op){

            case 1:
                cout << "Voce escolheu a opcao 1" << endl;
                break;

            case 2:
                cout << "Voce escolheu a opcao 2" << endl;
                break;

            case 3:
                cout << "Encerrando o programa..." << endl;
                break;

            default:
                cout << "Opcao invalida!" << endl;

        }

    } while(op != 3);

}
