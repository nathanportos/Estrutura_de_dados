#include <iostream>
using namespace std;

int main() {
    int numero;
    float altura;
    float maiorAltura = 0, menorAltura = 999;
    int numMaior, numMenor;

    for(int i = 1; i <= 10; i++) {
        cout << "Digite o numero do aluno: ";
        cin >> numero;

        cout << "Digite a altura (cm): ";
        cin >> altura;

        if(altura > maiorAltura) {
            maiorAltura = altura;
            numMaior = numero;
        }

        if(altura < menorAltura) {
            menorAltura = altura;
            numMenor = numero;
        }
    }

    cout << "Aluno mais alto: " << numMaior
         << " - Altura: " << maiorAltura << " cm" << endl;

    cout << "Aluno mais baixo: " << numMenor
         << " - Altura: " << menorAltura << " cm" << endl;
}
