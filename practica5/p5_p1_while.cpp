#include <iostream>
using namespace std;

// 83

int main(){
	
	const float LIMITE = 5.0;
	float suma;
	int cuenta;
	
	cuenta = 0;
	suma = 0.0;
	
	while(suma <= LIMITE){
		cuenta = cuenta + 1;
		suma = suma + 1.0/cuenta;
	}	
	
	cout << "El numero de terminos es: " << cuenta;
	
	return 0;
} 
