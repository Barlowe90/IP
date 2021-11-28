//~ LEXICO
	//~ S, T: secuencia de Entero;
	//~ suma: Entero;
//~ ALGORITMO
	//~ Comenzar(S);
	//~ Segun (EA(S))
		//~ EA(S) = MarcaFin:
			//~ Escribir("vacio");
		//~ EA(S) != MarcaFin:
			//~ suma <- EA(S);
			//~ Registrar(T, suma);
			//~ ITERAR
				//~ Avansar(S);
			//~ DETENER EA(S) = MarcaFin;
				//~ suma <- suma + EA(S);
				//~ Registrar(T, suma);
			//~ FIN_ITERAR
	//~ FIN_SEGUN
//~ FIN

#include <iostream>
#include <list>

using namespace std;

int main(){
	
	list<int> S, T;
	list<int>::iterator EA_S, EA_T;
	int suma;
	
	S = {1, 4, 5, 3, 5, 6};

	EA_S = S.begin();
	
	if(EA_S == S.end()){
		cout << "vacia";
	}else if(EA_S != S.end()){
		suma = *EA_S;
		T.push_back(suma);
		do{
			EA_S++;
		if(EA_S == S.end()) 
			break;
			suma = suma + *EA_S;
			T.push_back(suma);
		}while(true);
	}
	
	EA_T = T.begin();
	
	while(EA_T != T.end()){
		cout << *EA_T << ", ";
		EA_T++;
	}

	return 0;
}
