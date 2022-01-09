// Problema de recorrido
// Esquema 1, proque ni necesitamos tratar el primer elemento ni la secuencia vacia diferente al resto
// La postcondicón es que el EA no sea la MarcaFin. El invariante es la suma
	
// LEXICO
//		S, R: secuencia de entero;
//		suma, ultimo: entero;
// ALGORITMO
//		Comenzar(S);
// SEGUN EA (S) 
	//		EA (S) = MarcaFin 
	//			Escribir("Secuencia vacia");
	//		EA (S) != MarcaFin 
	//			ultimo <- EA(S);	
	//			Avanzar (S);
	//			SI (EA(S)=MarcaFin) ENTONCES Escribir("vacia");		
	//			ITERAR
	//				Avanzar (S);
	//			DETENER EA(S) == MarcaFin;
	//				suma <- ultimo + EA(S);
	//				Registrar(R, suma);
	//				ultimo <- EA(S);
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
	
	//~ S = {1, 2, 3, 4, 5, 6};
	S = {1};
	
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
		
		// mostrar la lista resultado
		EA_R = R.begin();
		
		while(EA_R != R.end()){
			cout << *EA_R << ", ";
			EA_R++;
		}
	}
	
	return 0;
}
