#include <iostream>
using namespace std;

int main(){

    string nome;
    string sintoma;
    int idade;
    char continuar;

    do{

        cout << "Digite o nome do paciente: ";
        cin >> nome;

        cout << "Digite a idade do paciente: ";
        cin >> idade;

        cout << "Digite o sintoma do paciente: ";
        cin >> sintoma;

        cout << "Paciente registrado!" << endl;

        cout << "Deseja cadastrar outro paciente? (s/n): ";
        cin >> continuar;

    }while(continuar == 's' || continuar == 'S');

}
