#include <iostream>
using namespace std;

struct Animal{
    string nome;
    string especie;
    int idade;
    float peso;
};

typedef Animal ListaAnimais[10];

int main(){

    ListaAnimais animais;

    for(int i = 0; i < 10; i++){

        cout << "Animal " << i+1 << endl;

        cout << "Nome: ";
        cin >> animais[i].nome;

        cout << "Especie: ";
        cin >> animais[i].especie;

        cout << "Idade: ";
        cin >> animais[i].idade;

        cout << "Peso (kg): ";
        cin >> animais[i].peso;
    }

    cout << "\nAnimais cadastrados:\n";

    for(int i = 0; i < 10; i++){

        cout << "Nome: " << animais[i].nome << endl;
        cout << "Especie: " << animais[i].especie << endl;
        cout << "Idade: " << animais[i].idade << endl;
        cout << "Peso: " << animais[i].peso << endl;
        cout << endl;
    }

    return 0;
}
