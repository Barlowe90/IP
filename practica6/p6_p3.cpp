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
#include <fstream>
#include <string>
#include <list>
using namespace std;

void Cargar_Fichero (list<int> &S, string nombre) {
	ifstream f;
	int dato;
	f.open (nombre);

	if (!f) {
		cout << "Error abriendo el fichero de datos" << endl;
	}else {
		while (f >> dato) { // mientras la lectura sea exitosa
			S.push_back (dato); // Registrar (S, dato)
		}
		f.close();
	}
}

int main(){
	
	list <int> S;
	list <int>::iterator EA;
	int suma;

	Cargar_Fichero(S, "datosP5_2.txt");
	
	EA = S.begin();
	
	suma = *EA;		
	cout << suma << ", ";
	
	do{
		EA++;
		cout << "Avanza. ";
		if(EA == S.end())
			break;
			cout << "aqui no entra";
			suma = suma + *EA;
			cout << suma << ", ";
		cout << "sale?";
	}while(true);
	
	cout << "Salio.";
		
	return 0;
}
