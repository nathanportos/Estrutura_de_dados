#include <iostream>
using namespace std;

int main() {
    float temp[365], soma = 0, media;
    float menor, maior;
    int abaixo = 0;
cout << "Qual a temperatura de cada dia? "<<endl;

    for(int i = 0; i < 365; i++){
        cin >> temp[i];
        soma += temp[i];

        if(i == 0){
            menor = maior = temp[i];
        }

        if(temp[i] < menor){
            menor = temp[i];
        }

        if(temp[i] > maior){
            maior = temp[i];
        }
    }

    media = soma / 365;

    for(int i = 0; i < 365; i++){
        if(temp[i] < media){
            abaixo++;
        }
    }

    cout << "Menor temperatura: " << menor << endl;
    cout << "Maior temperatura: " << maior << endl;
    cout << "Media anual: " << media << endl;
    cout << "Dias abaixo da media: " << abaixo << endl;


    return 0;
}
