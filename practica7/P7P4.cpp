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
	
	list<char> S;
	list<char>:: iterator EA;
	int x, contador;
	char c;
	
	Cargar_Fichero (S, "entrada1.txt");
	
	EA = S.begin();
	
	cout << "Letra a buscar: ";
	cin >> c;
	cout << "Numero de veces: ";
	cin >> x;
	
	contador = 0;
	
	while(EA != S.end() && contador != x){
		if(*EA == c){
			contador++;
		}
		EA++;
	}
	if (EA == S.end()){
		cout << "no";
	}else{
		cout << "si";
	}
	
	return 0;
}
