#include "iostream"
#include "string"

using namespace std;

int main()
{
	//mensaje bienvenida
	cout<< "hola! este programa 1.6 escribe los datos en orden inverso" << "\n";
	
	//se declaran los numeros que se sumaran (pueden ser decimales)
	int A,B,C,D;
	
	//Se pide el primer numero
	cout << "por favor ingrese el primer valor A:   "  << "\n";
	
	//se asigna el primer valor a A
	cin >> A;
	
	//Se pide el segundo numero
	cout << "por favor ingrese el segundo valor B:  "  << "\n";
	
	//se asigna el segundo valor a B
	cin >> B;
	
	//Se pide el tercer numero
	cout << "Por favor ingrese el tercer valor C:   "  << "\n";
	
	//se asigna el tercer valor a C
	cin >> C;
	
	//se pide el cuarto numero
	cout << "Por favor ingrese el cuarto valor D "  <<  "\n";
	
	//se asigna el cuarto valor a D
	cin >> D;
	
	//se muestra el resultado
	cout << D << "   ,  " << C << "   ,   " << B << "   ,    " << A;
	
	return 0;
}

