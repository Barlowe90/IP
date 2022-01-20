#include <iostream>
#include <fstream>
#include <string>
#include <list>
using namespace std;

const int LMAX = 26;
typedef int Vector[LMAX];

const string abecedario[LMAX] = {
	"a",
	"b",
	"c",
	"d",
	"e",
	"f",
	"g",
	"h",
	"i",
	"j",
	"k",
	"l",
	"m",
	"n",
	"o",
	"p",
	"q",
	"r",
	"s",
	"t",
	"u",
	"v",
	"w",
	"x",
	"y",
	"z"
};

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
	int i;
	
	Vector fre = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	
	Cargar_Fichero (S, "entrada3.txt");
	
	EA = S.begin();
	
	if(EA == S.end()){
		cout << "secuencia vacia";
	}else{
		do{
			if((*EA >= 97) && (*EA<=122) ){
				fre[(int)*EA-97]++;
			}
			EA++;
		}while(EA != S.end());
	}

	for (i = 0; i < LMAX; i++){
		cout << "La frecuencia de la letra " << abecedario[i] << " es: " << fre[i] << endl;
	}

	return 0;
}
