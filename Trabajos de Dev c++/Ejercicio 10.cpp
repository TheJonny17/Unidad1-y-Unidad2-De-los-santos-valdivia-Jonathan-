#include <iostream>
using namespace std;

int main() {

    int DIAS;
    float SEG;

    cout << "Ingrese el numero de dias: ";
    cin >> DIAS;

    SEG = DIAS * 24 * 60 * 60;

    cout << "En " << DIAS << " dias hay " << SEG << " segundos." << endl;

    return 0;
}
