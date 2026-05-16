#include <iostream>
using namespace std;

struct Pessoa{
    string nome;
    string endereco;
    string cpf;
    int idade;
};

int main(){

    Pessoa pessoas[5];

    for(int i = 0; i < 5; i++){
        cout << "Pessoa " << i+1 << endl;

        cout << "Nome: ";
        cin >> pessoas[i].nome;

        cout << "Endereco: ";
        cin >> pessoas[i].endereco;

        cout << "CPF: ";
        cin >> pessoas[i].cpf;

        cout << "Idade: ";
        cin >> pessoas[i].idade;
    }

    cout << "\nDados cadastrados:\n";

    for(int i = 0; i < 5; i++){
        cout << pessoas[i].nome << " "
             << pessoas[i].endereco << " "
             << pessoas[i].cpf << " "
             << pessoas[i].idade << endl;
    }

    return 0;
}
