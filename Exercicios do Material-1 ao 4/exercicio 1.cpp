#include <iostream>
using namespace std;

int main()
{
    int idade;
    string doencapre, fumante;
    double rendam,valor;


    cout << "Coloque os dados do cliente: "<<endl;
    cout << "Idade: "<<endl;
    cin >> idade;
    cout << "Possui alguma doenca pre existente? (sim/nao) "<<endl;
    cin >> doencapre;
    cout<< "E fumante? (sim/nao) "<<endl;
    cin >> fumante;
    cout << "Qual Renda mensal? "<<endl;
    cin >> rendam;


    if(idade <= 18)
        valor = 100;
    else if (idade >= 19 && idade <= 40)
        valor = 180;
    else if (idade >= 41 && idade <= 60)
        valor = 300;
    else
        valor = 500;

    {
        if (doencapre == "sim" && idade <=40)
            valor *= 1.30;
        else if(doencapre == "sim" && idade >40)
            valor *= 1.50;

    }
    {
        if (fumante == "sim" && idade <=50)
            valor *= 1.20;
        else if(fumante == "sim" && idade >50)
            valor *= 1.40;
    }
    {
        if (rendam <2000)
            valor *= 0.80;
        else if(rendam  >=2000 && rendam <=5000)
            valor *= 0.90;
    }

    cout << endl;
    cout << "VALOR DO SEU PLANO DE SAUDE: R$" << valor <<endl;
}
