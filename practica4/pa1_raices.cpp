#include <iostream>
#include <cmath>
using namespace std;

float sqr(float x){
	return x*x;
}

void leerNumeros(float &a, float &b, float &c){
	cout << "Vamos a calcular la raiz" << endl;
	cout << "Introduce el valor de a: ";
	cin >> a;
	cout << "Introduce el valor de b: ";
	cin >> b;
	cout << "Introduce el valor de c: ";
	cin >> c;
}

void calculaRaiz(float a, float b, float c){	
	if(sqr(b)-4*a*c >= 0){
		cout << "Raiz 1: " << (-b+sqrt(sqr(b)-4*a*c))/2*a << endl;
		cout << "Raiz 2: " << (-b-sqrt(sqr(b)-4*a*c))/2*a << endl;
	}else{
		cout << "raiz compleja";
		cout << "Raiz 1: " << (-b+sqrt(sqr(b)-4*a*c))/2*a << endl;
		cout << "Raiz 2: " << (-b-sqrt(sqr(b)-4*a*c))/2*a << endl;
	}
}

int main(){
	float a, b, c;
	
	leerNumeros(a, b, c);
	calculaRaiz(a, b, c); 
	
	return 0; 
}
