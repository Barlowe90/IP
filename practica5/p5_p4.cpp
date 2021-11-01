// LEXICO
	//i, n, actual, nuevo, ultimo, antepenul: entero;
// ALGORTIMO
	//Leer(n);
	//SI n=0 ENTONCES
		//Escribir(1);
	//SI n=1 ENTONCES 
		//Escribir(2);
	//SI n=2 ENTONCES 
		//Escribir(3);
	//antepenul <- 1;
	//ultimo <- 2;
	//actual <- 3;
	//RECORRER (i=0; i<=n; i++)
		//nuevo <- 3*actual - 2*antepenul;
		//n <- nuevo;
		//actual <- nuevo;
		//ultimo <- actual;
		//antepenul <- ultimo;
	//FIN_RECORRER
	//Escribir(n);
	
#include<iostream>
using namespace std;

int main(){
	
	int i, n, actual, nuevo, ultimo, antepenul;
	
	cout << ("Introduzca un numero: ");
	cin >> n;
	
	switch(n){
		case 0:
			cout << ("1");
			break;
		case 1:
			cout << ("2");
			break;
		case 2:
			cout << ("3");
			break;
		default:
			antepenul = 1;
			ultimo = 2;
			actual = 3;
			
			for(i=3; i<=n; i++){
				nuevo = 3*actual - 2*antepenul;
				antepenul = ultimo;	
				ultimo = actual;
				actual = nuevo;
			}
			cout << ("El numero es ") << nuevo;
			break;
	}
	return 0;
}
