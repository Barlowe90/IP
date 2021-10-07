#include <iostream>

using namespace std;

int main() {

	int cantidad, resto, quinientos, cien, cincuenta, veinte, diez, cinco;
	
	cout << "Cantidad total ";
	cin >> cantidad;
	
	quinientos = cantidad / 500;
	resto = cantidad % 500;
	
	cien = resto / 100;
	resto = resto % 100; 
	
	cincuenta = resto / 50;
	resto = resto % 50;
	
	veinte = resto / 20;
	resto = resto % 20;
	
	diez = resto / 10;
	resto = resto % 10;
	
	cinco = resto / 5;
	resto = resto % 5;
	
	
	cout << quinientos << " de quinientos euros" << endl
	 << cien << " de cien euros" << endl
	 << cincuenta << " de cincuenta euros" << endl
	 << veinte << " de veinte euros" << endl
	 << diez << " de diez euros" << endl
	 << cinco << " de cinco euros" << endl
	 << resto << " monedas" << endl;
	
	return 0;
	
}
