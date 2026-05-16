#include <iostream>
using namespace std;

int main(){

    float nota;

    cout << "Digite a nota (0 a 10): ";
    cin >> nota;

    if (nota >= 6)
        cout << "Aprovado" << endl;
    else if (nota >= 4)
        cout << "Recuperacao" << endl;
    else
        cout << "Reprovado" << endl;

}
