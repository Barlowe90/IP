//LEXICO
	//MarcaFin: constante entero;
	//secuencia_S: secuencia enteros;
	//suma: entero;
//ALGORITMO
	//Comenzar(s);
	//suma <- EA(S);
	//Escribir(suma);
	//ITERAR
		//Avanzar(S);
	//DETENER EA(S) = MarcaFin;
		// suma <- suma + EA(S);
	//FIN_ITERAR
	//Escribir(suma);

#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(){
	
	list <int> S;
	list <int>::iterator EA;
	int suma;

	S = {1, 4, 5, 3, 5, 6};
	
	EA = S.begin();
	
	suma = *EA;		
	cout << suma << ", ";
	
	do{
		EA++;
		if(EA == S.end())
			break;
			suma = suma + *EA;
			cout << suma << ", ";
	}while(true);
			
	return 0;
}
