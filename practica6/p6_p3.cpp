//~ LEXICO
	//~ S1, S2, R: secuencia de Entero;
//~ ALGORITMO
	//~ Comenzar(S1); Comenzar(S2);
	//~ MIENTRAS EA(S1) != MarcaFin Y EA(S2) != MarcaFin HACER
		//~ SI EA(S1) < EA(S2) ENTONCES	
			//~ Avanzar (S1);
		//~ FIN_SI
		//~ SI EA(S2) < EA(S1) ENTONCES	 
			//~ Avanzar (S1);
		//~ FIN_SI
		//~ SI EA(S1) = EA(S2) ENTONCES	
			//~ Registrar(R,S1);
		//~ FIN_SI
	//~ FIN_MIENTRAS
	
	//~ Comenzar(R)
	//~ MIENTRAS EA(R) != MarcaFin HACER
		//~ Escribir(EA(R);
		//~ Avanzar(R);
	//~ FIN_MIENTRAS;
//~ FIN

#include <iostream>
#include <list>
using namespace std;

int main(){
	
	list <int> S1, S2, R;
	list <int>::iterator EA_S1, EA_S2, EA_R;
	
	S1 = {-44, -21, -1, 3, 5, 7, 18, 24, 30, 33, 54, 66, 101};
	S2 = {-32, -28, -21, 0, 3, 4, 6, 7, 14, 20, 24, 31, 33, 51, 66, 104, 200};
	
	EA_S1 = S1.begin();
	EA_S2 = S2.begin();

	while(EA_S1 != S1.end() && EA_S2 != S2.end()){
		if(*EA_S1 < *EA_S2){
			EA_S1++;
		}else if(*EA_S2 < *EA_S1){
			EA_S2++;
		}else if(*EA_S1 == *EA_S2){
			R.push_back(*EA_S1);
			EA_S1++;
		}
	}
	
	// recorrer y mostrar R
	EA_R = R.begin(); 

	cout << "[ "; 
	while(EA_R != R.end()){
		cout << *EA_R << ", ";
		EA_R++;
	}
	cout << " ]";		
	return 0;
}
