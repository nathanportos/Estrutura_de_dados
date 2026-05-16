#include <iostream>
using namespace std;

int main(){
int n;

cout << "coloque um numero para ver se é par ou impar: ";
cin >> n;

if (n % 2 == 0)
cout << "esse numero é par";
else
    cout << "esse numero é impar";
return 0;
}
