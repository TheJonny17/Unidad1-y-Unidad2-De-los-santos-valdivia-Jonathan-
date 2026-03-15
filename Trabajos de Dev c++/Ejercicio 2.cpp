#include <iostream>
using namespace std;

int main() {
    int A, B;
    float resultado;

    cout << "Ingrese el valor de A: ";
    cin >> A;

    cout << "Ingrese el valor de B: ";
    cin >> B;

    resultado = ((A + B) * (A + B)) / 3.0;

    cout << "El resultado de (A + B)^2 / 3 es: " << resultado << endl;

    return 0;
}
