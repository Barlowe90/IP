//Lexico
	//n1, n2, n3: entero;
	//triangulo, equilatero, isosceles, escaleno: booleano;
//Algoritmo
	//Escribir("Introduzca 3 numeros: ");
	//Leer(n1, n2, n3);
	//SEGUN
		//n1+n2>=n3:
			//triangulo <- true;
		//triangulo Y n1=n2=n3:
			//equilatero <- true;
		//triangulo Y n1=n2 O n1=n3:
			//isosceles <- true;
		//triangulo Y n1!=n2 Y n1!=n3 Y n2!=n3:
			//escaleno <- true;
	//FIN-SEGUN
//Fin

#include <iostream>
using namespace std;

int main(){
	
	int n1, n2, n3;
	bool triangulo, equilatero;
	
	cout << "Triangulos" << endl;
	cout << "-------------" << endl;
	cout << "Introduzca 3 numeros: " << endl;
	cin >> n1 >> n2 >> n3;
	
	if(n1+n2>=n3){
		triangulo=true;
		cout << "Es un triangulo: ";
	}else{triangulo=false;}
	
	if((triangulo==true) && (n1==n2) && (n2==n3) && (n1==n3)){
		cout << "equilatero." << endl;
		equilatero=true;
	}else{equilatero=false;}

	if((triangulo==true) && (equilatero==false) && ((n1==n2) || (n2==n3) || (n1==n3))){
		cout << "isosceles." << endl;
	}
	
	if((triangulo==true) && (n1!=n2) && (n2!=n3) && (n1!=n3)){
		cout << "escaleno." << endl;
	}
	return 0;
}
