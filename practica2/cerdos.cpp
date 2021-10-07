#include <iostream>
using namespace std;

int main(){
	
	int c50, c25, c5, cantidad, resto;
	
	cout << "Cantidad total de cerdos: ";
	cin >> cantidad;
	
	c50 = cantidad / 50;
	resto = cantidad % 50;
	
	c25 = resto / 25;
	resto = resto % 25; 
	
	c5 = resto / 5;
	resto = resto % 5;
	
	
	cout << c50 << " contenedores de 50" << endl
	 << c25 << " contenedores de 25" << endl
	 << c5 << " contenedores de 5" << endl
	 << resto << " contenedores de 1" << endl;
	
	return 0;
}

