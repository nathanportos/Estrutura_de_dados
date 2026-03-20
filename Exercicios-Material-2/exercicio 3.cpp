#include <iostream>
using namespace std;

int main() {

    float enredo, atuacao, efeitos, media;
    char continuar;

    do {

        cout << "Nota do enredo: ";
        cin >> enredo;

        cout << "Nota da atuacao: ";
        cin >> atuacao;

        cout << "Nota dos efeitos especiais: ";
        cin >> efeitos;

        media = (enredo + atuacao + efeitos) / 3;

        cout << "Media do filme: " << media << endl;

        cout << "Avaliar outro filme? (s/n): ";
        cin >> continuar;

    } while(continuar == 's');

    return 0;
}
