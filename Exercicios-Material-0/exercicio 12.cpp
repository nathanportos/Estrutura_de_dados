#include <iostream>
using namespace std;

int main(){

    int a, b, c;
cout << "de 3 e entre eles acharemos o maior: " << endl;

    cin >> a >> b >> c;

    if (a > b && a > c)
        cout << "Maior: " << a;
    else if (b > a && b > c)
        cout << "Maior: " << b;
    else
        cout << "Maior: " << c;

}
