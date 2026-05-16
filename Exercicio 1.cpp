#include <iostream>
#include <list>
#include <algorithm>
#include <locale>

 using namespace std;

 int main(){
setlocale(LC_ALL, "Portuguese");
 list<int> numeros;
 int num;

 cout << "Digite 5 numeros inteiros"<< endl;
for (int i = 1;i <=5; ++i) {
 cout << i<< "-Numero" << ": ";
 cin>> num;
 numeros.push_back(num);

}

  cout <<endl << "Ordem de inserção: ";
    for (int n : numeros) {
        cout << n << " ";
    }
        reverse(numeros.begin(), numeros.end());

cout <<endl << "Ordem de inserção inversa: ";
 for (int n : numeros) {
        cout << n << " ";
 }
 return 0;



 }
