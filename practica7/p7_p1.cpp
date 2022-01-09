// Problema de recorrido
// Hay que tratar la secuencia vacía y no hay que tratar el primer elemento
// Al finalizar la iteracion tenemos que mostrar el total de cada peso
//
// LEXICO
	// S: secuencia de Real;
	// sumaPeso, mediaPeso: Real;
	// cont, menos40, entre40y50, mas50: entero;
//
// ALGORITMO
	// Comenzar(S);
	// SEGUN EA (S) 
	//		EA (S) = MarcaFin
	//			Escribir("Secuencia vacia");
	//		EA (S) != MarcaFin
	//			sumaPeso = 0; cont = 0; menos40 = 0; entre40y50 = 0; mas50 = 0;
	//			REPETIR 
	//				sumaPeso <- sumaPeso + EA (S);
	//				cont <- cont + 1;
	//				SI EA (S) < 40 ENTONCES menos40 <- menos40 + 1;
	//				SINO EA (S) > 40 Y EA (S) < 50 ENTONCES entre40y50 <- entre40y50 + 1;
	//				SINO EA (S) > 50 ENTONES mas50 <- mas50 + 1;
	//				Avanzar (S)
	//			HASTA EA (S) != MarcaFin
	//			mediaPeso = sumaPeso / cont;
	//			Escribir(mediaPeso);
	//			Escribir(menos40);
	//			Escribir(entre40y50);
	//			Escribir(mas50);
	// FIN_SEGUN
	// FIN

#include <iostream>
#include <list>
using namespace std;

int main(){
	
	double sumaPeso, mediaPeso;
	int cont, menos40, entre40y50, mas50; 
	
	list<double> S;
	list<double>:: iterator EA_S;
	
	S = {40.5, 44.9, 53.6, 60.3, 71.2, 58.6, 62.5, 71.7, 39};
	
	EA_S = S.begin();
	
	if(EA_S == S.end()){
		cout << "Secuencia vacia";
	}else{
		sumaPeso = 0; cont = 0; menos40 = 0, entre40y50 = 0, mas50 = 0;
		do{
			sumaPeso = sumaPeso + *EA_S;
			cont++;
			if(*EA_S < 40){
				menos40++;
			}else if(*EA_S >= 40 && *EA_S <= 50){
				entre40y50++;
			}else if(*EA_S > 50){
				mas50++;
			}
			EA_S++;
		}while(EA_S != S.end());
		
		mediaPeso = sumaPeso / cont;
		cout << "La media es: " << mediaPeso << endl;
		cout << "Numero menores de 40: " << menos40 << endl;
		cout << "Numero entre 40 y 50: " << entre40y50 << endl;
		cout << "Numero mmas de 50: " << mas50 << endl;
	}

	return 0;
}
