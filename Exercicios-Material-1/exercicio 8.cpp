#include <iostream>
using namespace std;

int main(){

    int numeros[5];
    int *p;
    float soma = 0, media;

    // leitura dos valores
    for(int i = 0; i < 5; i++){
        cout << "Digite um numero: ";
        cin >> numeros[i];
    }

    p = numeros;

    // soma usando ponteiros
    for(int i = 0; i < 5; i++){
        soma += *(p + i);
    }

    media = soma / 5;

    cout << "\nMedia: " << media;

    return 0;
}
