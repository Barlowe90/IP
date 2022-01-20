#include <iostream>
#include <list>
using namespace std;

//0 - nada
//1 - quince
//2 - treinta
//3 - cuarenta
//4 - ventaja

struct marcador{
	int puntos_1;
	int puntos_2;
};
 
 void PuntuaAlPrimero(int &m1, int &m2){
	switch(m1){
		case 0:
		case 1:
		case 2:
			m1++;
			break;
		case 3:
			if(m2 == 3){
				m1 = 4;
			}else if(m2 == 4){
				m2 = 3;
			}else{
				m1 = 0;
				m2 = 0;
			}
			break;
		case 4:
			m1 = 0;
			m2 = 0;
			break;
	}
}

marcador SiguienteMarcador (marcador m, int jugador) {
	marcador nuevo;

	nuevo = m;
	if (jugador == 1) {
		PuntuaAlPrimero (nuevo.puntos_1, nuevo.puntos_2);
	}
	else {
		PuntuaAlPrimero (nuevo.puntos_2, nuevo.puntos_1);
	}
	return nuevo;
}

string PuntosACadena(int punto){
	string texto;
	
	switch(punto){
		case 0:
			texto = "nada";
			break;
		case 1:
			texto = "quince";
			break;
		case 2:
			texto = "treinta";
			break;
		case 3:
			texto = "cuarenta";
			break;
		case 4:
			texto = "ventaja";
			break;	
	}
	
	return texto;
}

void EscribeMarcador (marcador m) {
	if (m.puntos_1 == m.puntos_2) {
		cout << "Iguales a " << PuntosACadena (m.puntos_1) << endl;
	}
	else if (m.puntos_1 == 4) {
		cout << "Ventaja jugador 1" << endl;
	}
	else if (m.puntos_2 == 4) {
		cout << "Ventaja jugador 2" << endl;
	}
	else {
		cout << PuntosACadena (m.puntos_1) << " a " << PuntosACadena(m.puntos_2) << endl;
	}
}

int main(){

	list<int> S;
	list<int>::iterator EA_S;
	marcador actual;
	
	S = {1,1,2,2,1,1,2,2,1};

	EA_S = S.begin();
	actual.puntos_1 = 0;
	actual.puntos_2 = 0;	
		
	while(EA_S != S.end()){
		actual = SiguienteMarcador(actual, *EA_S);
		if (actual.puntos_1 == 0 && actual.puntos_2 == 0) {
			cout << "Punto para el jugador " << *EA_S << endl;
		}
		else {
			EscribeMarcador (actual);
		}
		EA_S++;
	}
	
	return 0;
}


