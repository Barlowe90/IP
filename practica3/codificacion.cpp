//Lexico
	//c: caracter;
//Algoritmo
	//Escribir("Introduzca un caracter: ");
	//Leer(c);
	//SEGUN c
		// Z:				Escribir(A);
		// z:				Escribir(a);
		// 9: 				Escribir(0);
		// c: 				Escribir(c++);
		// EN-OTRO-CASO:	Escribir(*);
	//FIN-SEGUN
//Fin

#include <iostream>
using namespace std;

int main(){
	
	char carEntrada, carSalida;
	int num;
	
	cout << "Codificacion de caracteres" << endl;
	cout << "-------------" << endl;
	cout << "Introduzca un caracter: " << endl;
	// leo el caracter
	cin >> carEntrada;
	// paso ese caracter a entero para saber su codigo
	num = carEntrada;

	// compruebo si es Z para asignarle el caracter A
	if(num==90){
		num=65;
		carSalida = num;
		cout << "El siguiente caracter es: " << carSalida << endl;
	// compruebo si es z para asignarle a
	}else if(num==122){
		num=97;
		carSalida = num;
		cout << "El siguiente caracter es: " << carSalida << endl;
	// compruebo si es 9 para asignarle 0
	}else if(num==57){
		num=48;
		carSalida = num;
		cout << "El siguiente caracter es: " << carSalida << endl;
	// compruebo si esta dentro de letras minusculas, mayusculas y digitos
	// para mostrar el siguiente
	}else if((num>=48 && num<57) || (num>=65 && num<90) || (num>=97 && num<122)){
		num++;
		carSalida = num;
		cout << "El siguiente caracter es: " << carSalida << endl;
	}else {
		// para el resto de casos:
		cout << "*";
	}
	
	return 0;
}
