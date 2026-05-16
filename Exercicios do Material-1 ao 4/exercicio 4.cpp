#include <iostream>
using namespace std;

int main()
{
    int opcao = 1;
    float saldo = 1000;

    float valor;
    float totalDeposito = 0, totalSaque = 0;
    int operacoes = 0;
    float maiorDeposito = 0, maiorSaque = 0;

    while (opcao != 0)
    {
        cout << "\n=== MENU ===\n";
        cout << "1 - Deposito\n";
        cout << "2 - Saque\n";
        cout << "3 - Consulta\n";
        cout << "4 - Relatorio\n";
        cout << "0 - Sair\n";
        cout << "Opcao: ";
        cin >> opcao;

        if (opcao == 1)
        {
            cout << "Digite o valor do deposito: ";
            cin >> valor;

            if (valor > 0)
            {
                saldo += valor;
                totalDeposito += valor;
                operacoes++;

                if (valor > maiorDeposito)
                    maiorDeposito = valor;
            }
            else
            {
                cout << "Valor invalido!\n";
            }
        }
        else if (opcao == 2)
        {
            cout << "Digite o valor do saque: ";
            cin >> valor;

            if (valor > saldo)
            {
                cout << "Saldo insuficiente!\n";
            }
            else
            {
                if (valor > saldo / 2)
                {
                    cout << "Saque de alto valor!\n";
                }

                saldo -= valor;
                totalSaque += valor;
                operacoes++;

                if (valor > maiorSaque)
                    maiorSaque = valor;
            }
        }
        else if (opcao == 3)
        {
            cout << "Saldo atual: R$ " << saldo << endl;
            operacoes++;
        }
        else if (opcao == 4)
        {
            cout << "\n=== RELATORIO ===\n";
            cout << "Total depositado: R$ " << totalDeposito << endl;
            cout << "Total sacado: R$ " << totalSaque << endl;
            cout << "Numero de operacoes: " << operacoes << endl;
            cout << "Maior deposito: R$ " << maiorDeposito << endl;
            cout << "Maior saque: R$ " << maiorSaque << endl;
        }
        else if (opcao == 0)
        {
            cout << "Encerrando sistema...\n";
        }
        else
        {
            cout << "Opcao invalida!\n";
        }
    }

    return 0;
}
