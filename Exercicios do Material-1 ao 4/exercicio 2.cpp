#include <iostream>
using namespace std;

int main()
{
    int L1, L2, L3;
    int L, A, B;

    cout << "Passe o lado 1: ";
    cin >> L1;

    cout << "Passe o lado 2: ";
    cin >> L2;

    cout << "Passe o lado 3: ";
    cin >> L3;

    if (L1 < L2 + L3 && L2 < L1 + L3 && L3 < L1 + L2)
    {
        cout << "Forma um triangulo\n";

        // classificação pelos lados
        if (L1 == L2 && L2 == L3)
            cout << "Equilatero\n";
        else if (L1 == L2 || L1 == L3 || L2 == L3)
            cout << "Isosceles\n";
        else
            cout << "Escaleno\n";

        // descobrir o maior lado
        if (L1 >= L2 && L1 >= L3)
        {
            L = L1;
            A = L2;
            B = L3;
        }
        else if (L2 >= L1 && L2 >= L3)
        {
            L = L2;
            A = L1;
            B = L3;
        }
        else
        {
            L = L3;
            A = L1;
            B = L2;
        }

        // classificação pelos ângulos
        if (L*L == A*A + B*B)
            cout << "Triangulo Retangulo";
        else if (L*L > A*A + B*B)
            cout << "Triangulo Obtusangulo";
        else
            cout << "Triangulo Acutangulo";
    }
    else
    {
        cout << "Nao forma um triangulo";
    }

    return 0;
}
