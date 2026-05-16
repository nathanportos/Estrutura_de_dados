#include <iostream>
using namespace std;

int main() {
    float peso, altura, imc;

    cout << "Digite o peso (kg): ";
    cin >> peso;

    cout << "Digite a altura (m): ";
    cin >> altura;

    imc = peso / (altura * altura);

    cout << "IMC = " << imc << endl;

    if (imc < 20) {
        cout << "Abaixo do peso" << endl;
    }
    else if (imc >= 20 && imc < 25) {
        cout << "Peso Ideal" << endl;
    }
    else {
        cout << "Acima do Peso" << endl;
    }


}
