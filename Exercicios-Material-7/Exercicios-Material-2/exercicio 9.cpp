#include <iostream>
using namespace std;

typedef int VetorInteiros[5];

int main(){

    VetorInteiros numeros = {10,20,30,40,50};

    for(int i = 0; i < 5; i++){
        cout << numeros[i] << endl;
    }

    return 0;
}
