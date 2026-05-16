#include <iostream>
using namespace std;

int main() {
    float salario, reajuste, novoSalario;

    cout << "Digite o salario atual: ";
    cin >> salario;

    if (salario < 1000) {
        reajuste = salario * 0.15;
    }
    else if (salario <= 1500) {
        reajuste = salario * 0.10;
    }
    else {
        reajuste = salario * 0.05;
    }

    novoSalario = salario + reajuste;

    cout << "Reajuste: " << reajuste << endl;
    cout << "Novo salario: " << novoSalario << endl;

}
