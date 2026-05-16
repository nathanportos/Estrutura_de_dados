#include <iostream>
using namespace std;

int main()
{
    int N[10];
    int P = 0, I = 0;
    int positivo = 0, negativo = 0, zero = 0;
    int mt = 0, mc = 0, mtc = 0;
    int maior, menor;
    int somaP = 0, somaI = 0;
    float mediaP, mediaI;

    cout << "Digite 10 numeros: " << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> N[i];

        if (i == 0)
        {
            maior = menor = N[i];
        }
        else
        {
            if (N[i] > maior) maior = N[i];
            if (N[i] < menor) menor = N[i];
        }

        if (N[i] % 2 == 0)
        {
            P++;
            somaP += N[i];
        }
        else
        {
            I++;
            somaI += N[i];
        }

        if (N[i] > 0)
            positivo++;
        else if (N[i] < 0)
            negativo++;
        else
            zero++;

        if (N[i] % 3 == 0 && N[i] % 5 == 0)
        {
            mtc++;
        }
        else
        {
            if (N[i] % 3 == 0) mt++;
            if (N[i] % 5 == 0) mc++;
        }
    }

    if (P == 0) mediaP = 0;
    else mediaP = somaP / P;

    if (I == 0) mediaI = 0;
    else mediaI = somaI / I;

    cout << "\nRESULTADO:\n";
    cout << "Pares: " << P << endl;
    cout << "Impares: " << I << endl;
    cout << "Positivos: " << positivo << endl;
    cout << "Negativos: " << negativo << endl;
    cout << "Zeros: " << zero << endl;
    cout << "Multiplos de 3: " << mt << endl;
    cout << "Multiplos de 5: " << mc << endl;
    cout << "Multiplos de 3 e 5: " << mtc << endl;
    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;
    cout << "Media dos pares: " << mediaP << endl;
    cout << "Media dos impares: " << mediaI << endl;

    return 0;
}
