#include <iostream>
using namespace std;

int main (){
string nome[10];
string busca;
bool achou=false;


cout << "Digite os 10 nomes "<<endl;

for(int i=0; i <10;i++)


{

  cin>>nome[i];


}
cout << "busque um nome :"<< endl;
cin >> busca;

for(int i=0;i<10;i++)
if(nome[i]==busca) achou=true;
{
    cout <<(achou? "ACHEI": "NAO ACHEI");
}











}
