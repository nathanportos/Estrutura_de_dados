#include <iostream>
using namespace std;

int main() {
    int voto;
    int cand1 = 0, cand2 = 0, nulo = 0, branco = 0, total = 0;

    do {
        cout << "Digite o voto (1,2,3,4) ou 0 para finalizar: ";
        cin >> voto;

        if(voto == 1) cand1++;
        else if(voto == 2) cand2++;
        else if(voto == 3) nulo++;
        else if(voto == 4) branco++;

        if(voto != 0) total++;

    } while(voto != 0);

    if(total > 0) {
        cout << "Percentual Cand 1: " << (cand1 * 100.0 / total) << "%" << endl;
        cout << "Percentual Cand 2: " << (cand2 * 100.0 / total) << "%" << endl;
        cout << "Percentual Nulos: " << (nulo * 100.0 / total) << "%" << endl;
        cout << "Percentual Brancos: " << (branco * 100.0 / total) << "%" << endl;
    } else {
        cout << "Nenhum voto registrado." << endl;
    }

}
