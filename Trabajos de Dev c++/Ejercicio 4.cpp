#include <iostream>
using namespace std;

int main() {

    int NUM;
    int CUA, CUB;

    cout << "Ingrese un numero entero positivo: ";
    cin >> NUM;

    CUA = NUM * NUM;
    CUB = NUM * NUM * NUM;

    cout << "El cuadrado del numero es: " << CUA << endl;
    cout << "El cubo del numero es: " << CUB << endl;

    return 0;
}
