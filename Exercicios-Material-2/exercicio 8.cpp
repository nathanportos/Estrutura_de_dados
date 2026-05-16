#include <iostream>
using namespace std;

struct Endereco{
    string rua;
    string cidade;
    string cep;
};

typedef Endereco TipoEndereco;

int main(){

    TipoEndereco endereco;

    cout << "Rua: ";
    cin >> endereco.rua;

    cout << "Cidade: ";
    cin >> endereco.cidade;

    cout << "CEP: ";
    cin >> endereco.cep;

    cout << "\nEndereco cadastrado:\n";
    cout << endereco.rua << " - "
         << endereco.cidade << " - "
         << endereco.cep;

    return 0;
}
