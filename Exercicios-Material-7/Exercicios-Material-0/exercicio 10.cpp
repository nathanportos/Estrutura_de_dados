#include <iostream>
using namespace std;

<<<<<<< HEAD
int main()
=======
int main() {

    int idade, opiniao;
    int total = 0;
    int somaIdade = 0;

    int otimo = 0, bom = 0, regular = 0, ruim = 0;

    cout << "Digite a idade (negativa para encerrar): ";
    cin >> idade;

    while (idade >= 0) {

        cout << "Opiniao sobre o filme (1-otimo, 2-bom, 3-regular, 4-ruim): ";
        cin >> opiniao;

        total++;
        somaIdade += idade;

        if (opiniao == 1)
            otimo++;
        else if (opiniao == 2)
            bom++;
        else if (opiniao == 3)
            regular++;
        else if (opiniao == 4)
            ruim++;

        cout << "Digite a idade (negativa para encerrar): ";
        cin >> idade;
    }

    if (total > 0) {

        float media = (float)somaIdade / total;

        float pOtimo = (float)otimo * 100 / total;
        float pBom = (float)bom * 100 / total;
        float pRegular = (float)regular * 100 / total;
        float pRuim = (float)ruim * 100 / total;

        cout << "\nQuantidade de pessoas: " << total << endl;
        cout << "Media das idades: " << media << endl;

        cout << "\nPorcentagem das respostas:" << endl;
        cout << "Otimo: " << pOtimo << "%" << endl;
        cout << "Bom: " << pBom << "%" << endl;
        cout << "Regular: " << pRegular << "%" << endl;
        cout << "Ruim: " << pRuim << "%" << endl;
    }

    return 0;
}
>>>>>>> beb0bef (Continuação das atividades)
