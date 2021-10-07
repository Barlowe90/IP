#include <iostream>
using namespace std;

int main() {

	float capital, total;
	int interes, meses;
	char riesgo;
	
	cout << "Servicio credito rapido Murcia Bank instant" << endl;
	cout << "----------" << endl;
	cout << "Introduzca el capital deseado: " << endl;
	cin >> capital;
	
	cout << "Meses que durara el prestamo (de 1 a 24): " << endl;
	cin >> meses;
	
	cout << "Interes en tanto por ciento (%) mensual: " << endl;
	cin >> interes;
	
	cout << "Tiene otras deudas? (S/N): " << endl;
	cin >> riesgo;
		
	total = capital + (capital * interes / 100.0 ) * meses;
	
	if((riesgo=='S') || (riesgo=='s')){
		total = total * 1.01;
	}
	
	cout << "Debe abonar al mes: " << total/meses << " euros";
	
	
	return 0;	
}
