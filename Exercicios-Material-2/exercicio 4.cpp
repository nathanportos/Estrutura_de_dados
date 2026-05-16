#include <iostream>
using namespace std;

int main() {

    string nome[50];
    float nota[50];
    string resultado[50];
    int i = 0;
    char continuar;

    do {

        cout << "Nome do estudante: ";
        cin >> nome[i];

        cout << "Nota final: ";
        cin >> nota[i];

        if(nota[i] >= 6)
            resultado[i] = "Aprovado";
        else
            resultado[i] = "Reprovado";

        cout << resultado[i] << endl;

        i++;

        cout << "Inserir outro estudante? (s/n): ";
        cin >> continuar;

    } while(continuar == 's');

    return 0;
}
