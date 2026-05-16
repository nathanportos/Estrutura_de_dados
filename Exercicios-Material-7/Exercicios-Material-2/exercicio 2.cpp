#include <iostream>
using namespace std;

int main() {

    string titulo, autor;
    int ano;

    while(true){

        cout << "Titulo do livro: ";
        cin >> titulo;

        if(titulo == "FIM"){
            break;
        }

        cout << "Autor: ";
        cin >> autor;

        cout << "Ano de publicacao: ";
        cin >> ano;

    }

    return 0;
}
