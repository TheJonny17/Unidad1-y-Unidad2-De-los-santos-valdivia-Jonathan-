#include <iostream>
using namespace std;

int main() {

    float radio, altura;
    float volumen, area;
    float pi = 3.141592;

    cout << "Ingrese el radio del cilindro: ";
    cin >> radio;

    cout << "Ingrese la altura del cilindro: ";
    cin >> altura;

    volumen = pi * (radio * radio) * altura;
    area = 2 * pi * radio * altura;

    cout << "El volumen del cilindro es: " << volumen << endl;
    cout << "El area del cilindro es: " << area << endl;

    return 0;
}
