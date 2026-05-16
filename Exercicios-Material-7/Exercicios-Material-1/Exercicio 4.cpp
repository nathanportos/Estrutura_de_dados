#include <iostream>
using namespace std;

int main() {
    int v[20];
cout << "Digite os 20 numeros no qual terão a ordem trocada:" << endl;
    for(int i = 0; i < 20; i++){
        cin >> v[i];
    }

    for(int i = 19; i >= 0; i--){
        cout << v[i] << " ";
    }

    return 0;
}
