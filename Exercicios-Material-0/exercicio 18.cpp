#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Digite um numero para ver a tabuada: ";
    cin >> n;

    cout << "Tabuada do " << n << ":" << endl;

    for(int i = 1; i <= 10; i++){
        cout << n << " x " << i << " = " << n * i << endl;
    }

}

