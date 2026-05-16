#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Digite um numero entre 1 e 10: ";
    cin >> n;

    while(n < 1 || n > 10){

        cout << "Numero invalido. Digite novamente entre 1 e 10: ";
        cin >> n;

    }

    cout << "Numero valido: " << n << endl;

}
