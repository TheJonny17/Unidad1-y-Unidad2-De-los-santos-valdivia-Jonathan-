#include <iostream>
using namespace std;

int main() {

    int MAT;
    float CAL1, CAL2, CAL3, CAL4, CAL5, PRO;

    cout << "Ingrese la matricula del alumno: ";
    cin >> MAT;

    cout << "Ingrese la calificacion 1: ";
    cin >> CAL1;

    cout << "Ingrese la calificacion 2: ";
    cin >> CAL2;

    cout << "Ingrese la calificacion 3: ";
    cin >> CAL3;

    cout << "Ingrese la calificacion 4: ";
    cin >> CAL4;

    cout << "Ingrese la calificacion 5: ";
    cin >> CAL5;

    PRO = (CAL1 + CAL2 + CAL3 + CAL4 + CAL5) / 5;

    cout << "\nMatricula del alumno: " << MAT << endl;
    cout << "Promedio de calificaciones: " << PRO << endl;

    return 0;
}
