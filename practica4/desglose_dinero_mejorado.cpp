#include <iostream>
using namespace std;

/*
 * LEXICO
	cantidad, resto, quinientos, cien, cincuenta, veinte, diez, cinco: entero;
	desglose: (dato dividiendo, divisor, resultado cociente, resultado resto: entero;)
	ALGORITMO
		cociente <- dividiendo / divisor;
		resto <- dividiendo MOD divisor;
	FIN;
ALGORITMO
	Leer(cantidad);
	desglose(cantidad, 500, quinientos, resto);
	desglose(resto, 100, cien, resto);
	desglose(resto, 50, cincuenta, resto);
	desglose(resto, 20, veinte, resto);
	desglose(resto, 10, diez, resto);
	desglose(resto, 5, cinco, resto);
FIN
* */

void desglose(int dividiendo, int divisor, int &cociente, int &resto){
	cociente = dividiendo / divisor;
	resto = dividiendo % divisor;	
}

int main() {

	int cantidad, resto, quinientos, cien, cincuenta, veinte, diez, cinco;
	
	cout << "Cantidad total ";
	cin >> cantidad;
	
	desglose(cantidad, 500, quinientos, resto);
	desglose(resto, 100, cien, resto);
	desglose(resto, 50, cincuenta, resto);
	desglose(resto, 20, veinte, resto);
	desglose(resto, 10, diez, resto);
	desglose(resto, 5, cinco, resto);
	
	cout << quinientos << " de quinientos euros" << endl
	 << cien << " de cien euros" << endl
	 << cincuenta << " de cincuenta euros" << endl
	 << veinte << " de veinte euros" << endl
	 << diez << " de diez euros" << endl
	 << cinco << " de cinco euros" << endl
	 << resto << " monedas" << endl;
	
	return 0;
}
