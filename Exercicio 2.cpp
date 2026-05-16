#include <iostream>
#include <list>
#include <algorithm>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    list<string> funcionarios;
    int quantidade;
    string nome;

    cout << "Quantos funcionários serão cadastrados? ";
    cin >> quantidade;
    cin.ignore();

    for (int i = 1; i <= quantidade; i++) {
        cout << i<< "-Nome do funcionário" << ": ";
        getline(cin, nome);
        funcionarios.push_back(nome);
    }

    cout << "\n--- LISTA DE FUNCIONÁRIOS ---" << endl;

    if (funcionarios.empty()) {
        cout << "A lista está vazia!" << endl;
        return 0;
    }

    cout << "\nOrdem de cadastro:" << endl;
    for (string f : funcionarios) {
        cout << "  - " << f << endl;
    }

    funcionarios.sort();
    cout << "\nOrdem alfabética:" << endl;
    for (string f : funcionarios) {
        cout << "  - " << f << endl;
    }

    funcionarios.reverse();
    cout << "\nOrdem reversa:" << endl;
    for (string f : funcionarios) {
        cout << "  - " << f << endl;
    }

    cout << "\nTotal de funcionários cadastrados: " << funcionarios.size() << endl;

    return 0;
}
