#include <iostream>

using namespace std;

int main() {

	int notaFinal, notaExamen, notaTrabajoCasa, notaTest;
	
	cout << "Nota del Examen: ";
	cin >> notaExamen;
	
	cout << "Nota del trabajo en casa: ";
	cin >> notaTrabajoCasa;
	
	cout << "Nota del test: ";
	cin >> notaTest;

	notaFinal = (50*notaExamen/100) + (30*notaTrabajoCasa/100) + (20*notaTest/100);
	
	cout << "La nota final es: " << endl;
	cout << notaFinal;
}
