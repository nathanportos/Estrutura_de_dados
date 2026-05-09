#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> pilha;
    int numero;

    do {
        cout << "Digite um numero inteiro positivo (digite 0 para finalizar): ";
        cin >> numero;

        if(numero > 0) {
            pilha.push(numero);
        }

    } while(numero != 0);

    cout << "\nNumeros na ordem inversa:\n";

    while(!pilha.empty()) {
        cout << pilha.top() << " ";
        pilha.pop();
    }

    cout << endl;

    return 0;
}
