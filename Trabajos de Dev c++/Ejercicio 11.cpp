#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    
    float L1, L2, L3, S, AREA;

    // Entrada de datos
    cout << "Ingrese el lado 1: ";
    cin >> L1;
    cout << "Ingrese el lado 2: ";
    cin >> L2;
    cout << "Ingrese el lado 3: ";
    cin >> L3;

    S = (L1 + L2 + L3) / 2;

    AREA = pow(S * (S - L1) * (S - L2) * (S - L3), 0.5);

    cout << "\nEl area del triangulo es: " << AREA << endl;

    return 0;
}
