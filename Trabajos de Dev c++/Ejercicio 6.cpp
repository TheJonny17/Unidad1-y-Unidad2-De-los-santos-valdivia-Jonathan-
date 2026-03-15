#include <iostream>
using namespace std;

int main() {
    
    float PREPRO, PAGO, DEVO;

    cout << "Ingrese el precio del producto: ";
    cin >> PREPRO;

    cout << "Ingrese el pago del cliente: ";
    cin >> PAGO;

    DEVO = PAGO - PREPRO;

    cout << "El cambio a devolver es: " << DEVO << endl;

    return 0;
}
