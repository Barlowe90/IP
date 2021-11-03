//LEXICO
	//MarcaFin: constante entero;
	//secuencia_S: secuencia enteros;
	//secuencia_T: secuencia enteros;
	//suma: entero;
//ALGORITMO
	//Comenzar(s);
	//suma <- EA(S);
	//Registrar(suma);
	//ITERAR
		//Avanzar(S);
	//DETENER EA(S) = MarcaFin;
		// suma <- suma + EA(S);
		// Registrar(suma);
	//FIN_ITERAR
	//Comenzar(T);
	//MIENTRAS(EA(T) != MarcaFin) HACER
		//Escribir(EA(T);
		//Avanzar(T);
	//FIN_MIENTRAS

#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(){
	
	list <int> S, T;
	list <int>::iterator EA_S, EA_T;
	int suma;

	S = {1, 4, 5, 3, 5, 6};
	
	EA_S = S.begin();

	suma = *EA_S;		
	T.push_back(suma);
	
	do{
		EA_S++;
		if(EA_S == S.end())
			break;
			suma = suma + *EA_S;
			T.push_back(suma);
	}while(true);
	
	// recorrer y mostrar T
	EA_T = T.begin(); 

	while(EA_T != T.end()){
		cout << *EA_T << ", ";
		EA_T++;
	}
			
	return 0;
}
