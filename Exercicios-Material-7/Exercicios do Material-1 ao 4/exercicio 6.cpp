#include <iostream>
using namespace std;

struct Funcionario
{
    int id;
    string nome;
    float salario;
    int idade;
    int tempoEmpresa;
};

int main()
{
    int N;
    Funcionario F[50];

    cout << "Digite a quantidade de funcionarios (5 a 50): ";
    cin >> N;

    // Leitura
    for (int i = 0; i < N; i++)
    {
        cout << "\nFuncionario " << i + 1 << endl;
        cout << "ID: ";
        cin >> F[i].id;
        cout << "Nome: ";
        cin >> F[i].nome;
        cout << "Salario: ";
        cin >> F[i].salario;
        cout << "Idade: ";
        cin >> F[i].idade;
        cout << "Tempo de empresa: ";
        cin >> F[i].tempoEmpresa;
    }


    float soma = 0;
    float maior, menor;

    int acimaMedia = 0;
    int idade50 = 0;
    int tempo10 = 0;

    for (int i = 0; i < N; i++)
    {
        soma += F[i].salario;

        if (i == 0)
        {
            maior = menor = F[i].salario;
        }
        else
        {
            if (F[i].salario > maior) maior = F[i].salario;
            if (F[i].salario < menor) menor = F[i].salario;
        }

        if (F[i].idade > 50)
            idade50++;

        if (F[i].tempoEmpresa > 10)
            tempo10++;
    }

    float media = soma / N;

    for (int i = 0; i < N; i++)
    {
        if (F[i].salario > media)
            acimaMedia++;
    }


    for (int i = 0; i < N; i++)
    {
        float aumento = 0;

        if (F[i].tempoEmpresa < 3)
            aumento += 0.05;
        else if (F[i].tempoEmpresa <= 10)
            aumento += 0.10;
        else
            aumento += 0.20;

        if (F[i].idade > 50)
            aumento += 0.05;

        if (F[i].salario < media)
            aumento += 0.05;

        F[i].salario = F[i].salario + (F[i].salario * aumento);
    }


    cout << "\n=== ANALISE ===\n";
    cout << "Media salarial: " << media << endl;
    cout << "Maior salario: " << maior << endl;
    cout << "Menor salario: " << menor << endl;
    cout << "Acima da media: " << acimaMedia << endl;
    cout << "Idade > 50: " << idade50 << endl;
    cout << "Tempo > 10 anos: " << tempo10 << endl;

    cout << "\n=== LISTA ATUALIZADA ===\n";
    for (int i = 0; i < N; i++)
    {
        cout << "\nFuncionario " << i + 1 << endl;
        cout << "ID: " << F[i].id << endl;
        cout << "Nome: " << F[i].nome << endl;
        cout << "Salario: " << F[i].salario << endl;
        cout << "Idade: " << F[i].idade << endl;
        cout << "Tempo de empresa: " << F[i].tempoEmpresa << endl;
    }

    return 0;
}
