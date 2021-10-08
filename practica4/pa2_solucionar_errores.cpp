#include <iostream>
using namespace std;

void arearec(float lado1, float lado2, float &area, float &perimetro){	
	area = lado1*lado2;
	perimetro = 2*(lado1+lado2);
}

void areacir(float radio, float &area, float &diametro){	
	area = radio*radio*3.1416;
	diametro = 2*radio;
}

int main(){
	float lado1, lado2, radio; // datos de entrada del circulo o del rectangulo
	float areaRec, areaCir, perimetro, diametro; // datos de salida
	
	cout << "Introduce la longitud de un lado ";
	cin >> lado1;
	cout << "Introduce la longitud del otro lado ";
	cin >> lado2;
	arearec(lado1, lado2, areaRec, perimetro);
	
	cout << "Introduce el radio del circulo ";
	cin >> radio;
	areacir(radio, areaCir, diametro);
	
	cout << "El area del rectangulo es " << areaRec << " / el perimetro " << perimetro << endl;
	cout << "El area del circulo es " << areaCir << " / el diametro " << diametro;
	
	return 0;
}
