#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int numeros[10];


    cout << "Digite 10 numeros:\n";
    for(int i = 0; i < 10; i++) {
        cin >> numeros[i];
    }


    sort(numeros, numeros + 10);

    cout << "\nVetor ordenado:\n";
    for(int i = 0; i < 10; i++) {
        cout << numeros[i] << " ";
    }

    int menor = numeros[0];
    int maior = numeros[9];

    int contMenor = 0, contMaior = 0;

    for(int i = 0; i < 10; i++) {
        if(numeros[i] == menor) {
            contMenor++;
        }
        if(numeros[i] == maior) {
            contMaior++;
        }
    }


    cout << "\n\nMenor numero: " << menor;
    cout << "\nQuantidade de vezes que aparece: " << contMenor;

    cout << "\n\nMaior numero: " << maior;
    cout << "\nQuantidade de vezes que aparece: " << contMaior;

    return 0;
}
