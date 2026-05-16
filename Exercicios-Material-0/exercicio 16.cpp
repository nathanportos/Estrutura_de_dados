#include <iostream>
using namespace std;

int main(){

    int n;
    int soma = 0;

    cout << "Digite um numero positivo (0 ou negativo para parar): ";
    cin >> n;

    while(n > 0){

        soma = soma + n;

        cout << "Digite outro numero positivo: ";
        cin >> n;

    }

    cout << "Soma dos numeros: " << soma << endl;

}
