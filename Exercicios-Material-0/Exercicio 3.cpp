#include <iostream>
using namespace std;

int main() {
    float horasTrabalhadas, salarioMinimo;
    float valorHora, salarioBruto, imposto, salarioLiquido;

    cout << "Digite o numero de horas trabalhadas: ";
    cin >> horasTrabalhadas;

    cout << "Digite o valor do salario minimo: ";
    cin >> salarioMinimo;

    valorHora = salarioMinimo / 2;

    salarioBruto = horasTrabalhadas * valorHora;

    imposto = salarioBruto * 0.03;

    salarioLiquido = salarioBruto - imposto;

    cout << "Valor da hora: " << valorHora << endl;
    cout << "Salario bruto: " << salarioBruto << endl;
    cout << "Imposto: " << imposto << endl;
    cout << "Salario a receber: " << salarioLiquido << endl;

}
