#include <iostream>
using namespace std;

int main() {
    float notas[20], soma = 0, media;
    int acima = 0;

    for(int i = 0; i < 20; i++){
            cout << "Digite as notas: ";
        cin >> notas[i];
        soma += notas[i];
    }

    media = soma / 20;

    for(int i = 0; i < 20; i++){
        if(notas[i] > media){
            acima++;
        }
    }

    cout << "Media da turma: " << media << endl;
    cout << "Alunos acima da media: " << acima << endl;

    return 0;
}
