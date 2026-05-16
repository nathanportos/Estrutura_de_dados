#include <iostream>
using namespace std;

int main(){

    float nota;
    float soma = 0;
    int contador = 0;

    cout << "Digite uma nota (negativa para encerrar): ";
    cin >> nota;

    while(nota >= 0){

        soma = soma + nota;
        contador++;

        cout << "Digite outra nota: ";
        cin >> nota;
    }

    if(contador > 0){
        cout << "Media da turma: " << soma/contador << endl;
    }
    else{
        cout << "Nenhuma nota foi digitada." << endl;
    }

}

