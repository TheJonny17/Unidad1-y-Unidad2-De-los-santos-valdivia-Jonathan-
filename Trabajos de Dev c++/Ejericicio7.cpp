#include <iostream>
#include <string>

using namespace std;

int main() {
    // Definición de variables según la explicación de la imagen
    string NOM;        // Nombre del dinosaurio (cadena de caracteres)
    float PES, LON;    // Peso en toneladas y Longitud en pies (reales)
    float PESKIL, LONMET; // Resultados en kg y metros (reales)

    // Entrada de datos (El paralelogramo: NOM, PES, LON)
    cout << "Ingrese el nombre del dinosaurio: ";
    getline(cin, NOM);
    
    cout << "Ingrese el peso en toneladas: ";
    cin >> PES;
    
    cout << "Ingrese la longitud en pies: ";
    cin >> LON;

    // Procesamiento (El rectángulo: Operaciones matemáticas)
    PESKIL = PES * 1000;
    LONMET = LON * 0.3047;

    // Salida de datos (El paralelogramo: NOM, PESKIL, LONMET)
    cout << "\n--- Resultados ---" << endl;
    cout << "Dinosaurio: " << NOM << endl;
    cout << "Peso en kilogramos: " << PESKIL << " kg" << endl;
    cout << "Longitud en metros: " << LONMET << " m" << endl;

    return 0;
}
