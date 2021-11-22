// Problema de recorrido
// Esquema 3 al no poder tratar la secuencia como al resto y no tratar al primero como al resto
// La postcondicón es que el EA no sea la MarcaFin. El invariante es la suma
// 

// LEXICO
//		S, R: secuencia de entero;
//		suma, ultimo, penultimo: entero;
// ALGORITMO
//		Comenzar(S);
// SEGUN EA (S) 
	//		EA (S) = MarcaFin O Avanzar (S) = MarcaFin 
	//			Escribir("Secuencia vacia");
	//		EA (S) != MarcaFin Y Avanzar (S) != MarcaFin
	
	//			ultimo <-  EA(S);
	//			penultimo <- 0;	
	//			ITERAR
	//				Avanzar (S);
	//			DETENER EA(S) == MarcaFin
	//				penultimo <- ultimo;
	//				ultimo <- EA(S);
	//				suma <- ultimo + penultimo;
	//				Registrar(R, suma);
	//			FIN_ITERAR;
		
	//			MIENTRAS EA (R) != MarcaFin ENTONCES
	//				Escribir(EA (R)); Avanzar (R);
	//			FIN_MIENTRAS
	// FIN_SEGUN
	// FIN
	
#include <iostream>
#include <list>
using namespace std;

int main(){
	int suma, ultimo;
	
	list<int> S, R;
	list<int>:: iterator EA_S, EA_R;
	
	S = {1, 2, 3, 4, 5, 6};
	R = {};
	
	EA_S = S.begin();
	
	if(EA_S == S.end()){
		cout << "Secuencia vacia";
	}else if(EA_S != S.end()){
		ultimo = *EA_S;
		do{
			EA_S++;
		if(EA_S == S.end())
			break;
			suma = ultimo + *EA_S;
			R.push_back(suma);
			ultimo = *EA_S;
		}while(true);
	
		EA_R = R.begin();
		
		while(EA_R != R.end()){
			cout << *EA_R << ", ";
			EA_R++;
		}
	}
	
	return 0;
}
