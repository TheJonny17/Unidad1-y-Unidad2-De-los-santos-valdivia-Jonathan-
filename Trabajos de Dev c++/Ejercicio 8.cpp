#include <iostream>
using namespace std;

int main() {
    
    float GAL;
    float TOTAL;
    
    cout << "Ingrese los galones de gasolina surtidos: ";
    cin >> GAL;
    
    TOTAL = GAL * 3.785 * 8.20;
    
    cout << "Total a pagar: $" << TOTAL << endl;
    
    return 0;
}
