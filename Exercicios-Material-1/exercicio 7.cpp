#include <iostream>
using namespace std;

int main(){

    int vetor[10];
    int *p;

    // leitura dos valores
    for(int i = 0; i < 10; i++){
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }

    // impressão normal
    cout << "\nOrdem normal:\n";
    p = vetor;

    for(int i = 0; i < 10; i++){
        cout << *(p + i) << " ";
    }

    // impressão inversa
    cout << "\n\nOrdem inversa:\n";

    for(int i = 9; i >= 0; i--){
        cout << *(p + i) << " ";
    }

    return 0;
}
