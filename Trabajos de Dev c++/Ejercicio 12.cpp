#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    
    float X1, Y1, X2, Y2, D;

    
    cout << "--- Punto 1 ---" << endl;
    cout << "Ingrese X1: ";
    cin >> X1;
    cout << "Ingrese Y1: ";
    cin >> Y1;

    
    cout << "\n--- Punto 2 ---" << endl;
    cout << "Ingrese X2: ";
    cin >> X2;
    cout << "Ingrese Y2: ";
    cin >> Y2;

    D = sqrt(pow(X1 - X2, 2) + pow(Y1 - Y2, 2));

    cout << "\n--------------------------------------------" << endl;
    cout << "La distancia entre P1 y P2 es: " << D << endl;
    cout << "--------------------------------------------" << endl;

    return 0;
}
