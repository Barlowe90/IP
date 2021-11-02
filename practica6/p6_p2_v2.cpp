#include <iostream>
#include <fstream>
#include <list>
#include <string>
using namespace std;

const char MARCA_FIN_LINEA = '\n';

void Cargar_Fichero (list<char> &S, string nombre) {
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
	
	list<char> S;
	list<char>::iterator EA_S;
	int cont;
	
	Cargar_Fichero(S,"datosP5_2.txt");

	/* Primer esquema de recorrido del 
	 * primer modelo de acceso secuencial*/

	EA_S = S.begin();
	cont = 0;
	
	while (EA_S != S.end()) {
		EA_S++;
		cout << *EA_S << ", ";
		cont = cont + 1;
	}
	
	cout << endl << "El número de datos recogidos es: " << cont << endl;
	
	return 0;
}
