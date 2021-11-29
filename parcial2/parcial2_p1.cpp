//~ LEXICO
	//~ S: Secuencia de Caracter;
	//~ ultimaLetra: Caracter;
	//~ diptongoCreciente, diptongoDecreciente: Entero;
//~ ALGORITMO
	//~ Comenzar(S);
	//~ ultimaLetra <- EA(S);
	//~ Avanzar(S);
	//~ diptongoCreciente <- 0; diptongoDecreciente <- 0;
	//~ MIENTRAS EA_S != MarcaFin HACER
		//~ SI ultimaLetra = i O u Y EA(S) = a O e O o ENTONCES diptongoCreciente <- diptongoCreciente + 1;
		//~ SI ultimaLetra = a O e O o Y EA(S) = i O u ENTONCES diptongoDecreciente <- diptongoDecreciente + 1;
		//~ ultimaLetra <- EA(S)
		//~ Avanzar(S);
	//~ FIN_MIENTRAS
	//~ Escribir(numero diptongos crecientes);
	//~ Escribir(numero diptongos decrecientes);
//~ FIN

#include <iostream>
#include <fstream>
#include <string>
#include <list>
using namespace std;

void Cargar_Fichero (list<char> &S, string nombre) {
	const char MARCA_FIN_LINEA = '\n';
	
	ifstream f;
	string cadena;
	int i;

	f.open (nombre);
	if (!f) {
		cout << "Error abriendo el fichero de datos" << endl;
	}
	else {
		S.clear(); // Borra el contenido previo de la lista
		while (getline(f, cadena)) {
			for (i=0; i<cadena.length(); i++) {
				S.push_back (cadena[i]);
			}
			S.push_back (MARCA_FIN_LINEA);
		}
	}
	f.close();
}

int main(){
	
	char ultimaLetra;
	int diptongoCreciente, diptongoDecreciente; 
	
	list<char> S;
	list<char>:: iterator EA_S;
	
	Cargar_Fichero (S, "entrada1.txt");
	
	EA_S = S.begin();

	diptongoCreciente = 0; diptongoDecreciente = 0;
	
	ultimaLetra = *EA_S;
	EA_S++;
	
	while(EA_S != S.end()){
		if((ultimaLetra == 'i' || ultimaLetra == 'u' || ultimaLetra == 'a') && (*EA_S == 'e' || *EA_S == 'o')){
			diptongoCreciente++;
		}else if((ultimaLetra == 'a' || ultimaLetra == 'e' || ultimaLetra == 'o') && (*EA_S == 'i' || *EA_S == 'u')){
			diptongoDecreciente++;
		}
		ultimaLetra = *EA_S;
		EA_S++;
	}
		
	cout << "diptongoCreciente: " << diptongoCreciente << endl;
	cout << "diptongoDecreciente: " << diptongoDecreciente;

	return 0;
}
	

