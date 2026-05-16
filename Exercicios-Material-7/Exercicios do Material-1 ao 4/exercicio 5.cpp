#include <iostream>
using namespace std;

int main()
{
    int N;
    int V[50], V2[50];

    int pares = 0, impares = 0;
    int positivos = 0, negativos = 0, zeros = 0;
    int m2 = 0, m3 = 0, m5 = 0;

    int maior, menor;
    int soma = 0;

    cout << "Digite a quantidade (10 a 50): ";
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> V[i];

        soma += V[i];


        if (i == 0)
        {
            maior = menor = V[i];
        }
        else
        {
            if (V[i] > maior) maior = V[i];
            if (V[i] < menor) menor = V[i];
        }


        if (V[i] % 2 == 0)
            pares++;
        else
            impares++;


        if (V[i] > 0)
            positivos++;
        else if (V[i] < 0)
            negativos++;
        else
            zeros++;


        if (V[i] % 2 == 0) m2++;
        if (V[i] % 3 == 0) m3++;
        if (V[i] % 5 == 0) m5++;
    }

    float media = soma / N;

    int k = 0;


    for (int i = 0; i < N; i++)
    {
        if (V[i] % 2 == 0)
        {
            V2[k] = V[i];
            k++;
        }
    }


    for (int i = N - 1; i >= 0; i--)
    {
        if (V[i] % 2 != 0)
        {
            V2[k] = V[i];
            k++;
        }
    }

    int maisRep = V[0];
    int maiorFreq = 0;

    for (int i = 0; i < N; i++)
    {
        int cont = 0;

        for (int j = 0; j < N; j++)
        {
            if (V[i] == V[j])
            {
                cont++;
            }
        }

        if (cont > maiorFreq)
        {
            maiorFreq = cont;
            maisRep = V[i];
        }
    }

    cout << "\n=== ANALISE ===\n";
    cout << "Pares: " << pares << endl;
    cout << "Impares: " << impares << endl;
    cout << "Positivos: " << positivos << endl;
    cout << "Negativos: " << negativos << endl;
    cout << "Zeros: " << zeros << endl;
    cout << "Multiplos de 2: " << m2 << endl;
    cout << "Multiplos de 3: " << m3 << endl;
    cout << "Multiplos de 5: " << m5 << endl;
    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;
    cout << "Media: " << media << endl;

    cout << "\n=== FREQUENCIA ===\n";
    if (maiorFreq > 1)
        cout << "Numero que mais se repete: " << maisRep << endl;
    else
        cout << "Nao ha numeros repetidos\n";

    cout << "\n=== VETOR ORIGINAL ===\n";
    for (int i = 0; i < N; i++)
    {
        cout << V[i] << " ";
    }

    cout << "\n\n=== VETOR REORGANIZADO ===\n";
    for (int i = 0; i < N; i++)
    {
        cout << V2[i] << " ";
    }

    return 0;
}
