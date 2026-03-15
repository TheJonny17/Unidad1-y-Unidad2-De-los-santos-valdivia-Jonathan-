#include <iostream>
using namespace std;

int main() {

    float BASE, ALTU;
    float PERIMETRO, SUPERFICIE;

    cout << "Ingrese la base del rectangulo: ";
    cin >> BASE;

    cout << "Ingrese la altura del rectangulo: ";
    cin >> ALTU;

    PERIMETRO = 2 * (BASE + ALTU);
    SUPERFICIE = BASE * ALTU;

    cout << "El perimetro del rectangulo es: " << PERIMETRO << endl;
    cout << "La superficie del rectangulo es: " << SUPERFICIE << endl;

    return 0;
}
