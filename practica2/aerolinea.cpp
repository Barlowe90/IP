#include <iostream>

using namespace std;

int main() {

	int kmRec, costeKm, litCom, preCom, costeTotal, costesFijos, costeCom;
	
	cout << "Kilometros recorridos: ";
	cin >> kmRec;
	
	cout << "Litros de combustible utilizados: ";
	cin >> litCom;
	
	preCom = 1;
	costesFijos = 2;
	
	costeKm = kmRec*costesFijos;
	costeCom = litCom*preCom;
	
	costeTotal = costeKm + costeCom;
		
	cout << "El coste total es: ";
	cout << costeTotal << " €" << endl;
	
	cout << "Kilometros recorridos por litro de combustible: ";
	cout << kmRec/litCom << " km" << endl;
	
	cout << "Coste por kilometro: ";
	cout << costeTotal/kmRec << "€/km";
}
