#include <iostream>
using namespace std;

int Max2 (int a, int b){
	int mayor;
	
	if(a > b){
		mayor = a;
	}else{
		mayor = b;
	}
	return mayor;
}

int Max3 (int a, int b, int c){
	return Max2(a, Max2(b,c));
}

int main(){
	
	int a, b, c;
	
	cout << "Escribe dos numeros para ver el mayor: ";
	cin >> a >> b >> c;
	
	cout << "El mayor es: " << Max3(a, b, c) << endl;
	
	return 0;
}
