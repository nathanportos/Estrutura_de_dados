#include <iostream>
using namespace std;

int main() {
    int A[10], M[10], X;
cout << "Digite os numeros nos qual deseja multiplicar: "<< endl;

    for(int i = 0; i < 10; i++){

        cin >> A[i];
    }
cout << "Digite o numero que ira multiplicar os numeros a cima: ";
    cin >> X;

    for(int i = 0; i < 10; i++){
        M[i] = A[i] * X;
    }

    for(int i = 0; i < 10; i++){
        cout << M[i] << " ";
    }

    return 0;
}
