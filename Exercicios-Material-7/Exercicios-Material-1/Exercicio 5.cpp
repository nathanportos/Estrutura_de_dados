#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Digite o valor de N:"<< endl;
    cin >> N;

    int A[N], B[N], Soma[N];

    for(int i = 0; i < N; i++)
    {
        cout <<"Digite o valor de A:"<<endl;

        cin >> A[i];
    }

    for(int i = 0; i < N; i++)
    {
        cout <<"Digite o valor de B:"<<endl;

        cin >> B[i];
    }

    for(int i = 0; i < N; i++)
    {
        Soma[i] = A[i] + B[i];
    }

    for(int i = 0; i < N; i++)
    {
        cout << Soma[i] << " ";
    }

    return 0;
}
