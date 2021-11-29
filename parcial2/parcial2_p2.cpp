//~ esDiptongo: funcion(car1: Caracter, car2: Caracter) -> Booleano;
//~ ALGORITMO
	//~ esDiptongo <- ((car1 = i O u) Y (car2 = a O e O o));
//~ FIN;

//~ LEXICO
	//~ S: Secuencia de Caracter;
	//~ ultimaLetra: Caracter;
	//~ diptongoCreciente, posicion: Entero;
//~ ALGORITMO

	//~ Comenzar(S);
	//~ ultimaLetra <- EA(S);
	//~ Avanzar(S);
	//~ diptongoCreciente <- 0; posicion <- 1;
	//~ MIENTRAS EA_S != MarcaFin Y NO esDiptongo() HACER
		//~ posicion <- posicion + 1;
		//~ ultimaLetra <- EA(S)
		//~ Avanzar(S);
	//~ FIN_MIENTRAS
	//~ SEGUN EA(S)
	 //~ EA(S) = MarcaFin: Escribir(no hay diptongos);
	 //~ EA(S) != MarcaFin: Escribir(diptongo en posicion: posicion);
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

bool esDiptongo(char car1, char car2){
	return ((car1 == 'i' || car1 == 'u' || car1 == 'a') && (car2 == 'e' || car2 == 'o'));
}

int main(){
	
	char ultimaLetra;
	int diptongoCreciente, posicion; 
	
	list<char> S;
	list<char>:: iterator EA_S;
	
	Cargar_Fichero (S, "entrada2.txt");
	
	EA_S = S.begin();

	diptongoCreciente = 0; posicion = 1;
	
	ultimaLetra = *EA_S;
	EA_S++;
	
	while(EA_S != S.end() && (!esDiptongo (ultimaLetra, *EA_S))){
		posicion++;
		ultimaLetra = *EA_S;
		EA_S++;
	}
		
	if(EA_S == S.end()){
		cout << "No hay";
	}else{
		cout << "Posicion: " << posicion << endl;
	}

	return 0;
}
