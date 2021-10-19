#include <iostream>
using namespace std;

//LEXICO
	//contador: entero;
	//c: caracter;
//ALGORITMO
	//contador <- 0;
	//REPETIR
		//Leer(c);
		//SI c=' ' ENTONCES contador <- contador + 1;
	//HASTA QUE !(c='\n')
	//Escribir(contador);	
//FIN

int main(){
	
	int cont;
	char c;
	
	cont = 0;
	
	do{
		cin.get(c);
		if(c==' '){
			cont = cont + 1;
		}
	}while(c!='\n');
	
	cout << "El numero de blancos es: " << cont << endl;
	
	return 0;
}
