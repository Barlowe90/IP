// Marcado = TIPO <punto1, punto2: entero>

//LEXICO
	//marcador: TIPO Marcador;
	
	//marcadorNuevo: funcion (marcadorActual: tipo, jugador: entero) -> marcador;
	//ALGORITMO
		//SEGUN jugador
			//1:
				//SI marcadorActual.punto1 = 3 Y marcadorActual.punto2 = 3 ENTONCES 
					//marcadorActual.punto1 = 4;
				//SI marcadorActual.punto1 = 4 Y marcadorActual.punto2 = 4 ENTONCES 
					//marcadorActual.punto1 = 3; marcadorActual.punto2 = 3;
				//SI marcadorActual.punto1 = 5
					// marcadorActual.punto1 = 0; marcadorActual.punto2 = 0;
			//EN_OTRO_CASO 
				// marcadorActual.punto1++;
			//2;
				//SI marcadorActual.punto1 = 3 Y marcadorActual.punto2 = 3 ENTONCES 
					//marcadorActual.punto2 = 4;
				//SI marcadorActual.punto1 = 4 Y marcadorActual.punto2 = 4 ENTONCES 
					//marcadorActual.punto1 = 3; marcadorActual.punto2 = 3;
				//SI marcadorActual.punto1 = 5
					// marcadorActual.punto1 = 0; marcadorActual.punto2 = 0;
			//EN_OTRO_CASO 
				// marcadorActual.punto2++;
		//FIN_SEGUN
		
	//EscribirMarcador: acción (punto: entero);
	//ALGORITMO
		//SI punto = 0  ENTONCES
		//Escribir("nada");
		//SI_NO SI punto = 1  ENTONCES
		//Escribir("quince");
		//SI_NO SI punto = 2  ENTONCES
		//Escribir("treinta");
		//SI_NO SI punto = 3  ENTONCES
		//Escribir("cuarenta");
		//SI_NO SI punto = 4  ENTONCES
		//Escribir("iguales");
		//SI_NO SI punto = 5  ENTONCES
		//Escribir("juego");		
		//FIN_SI
		
//ALGORITMO

	//Leer(marcador);
	//Comenzar(marcador);
	
	//MIENTRAS(EA != MarcaFin) HACER
		//*EA // Sacar marcador y jugador
		//marcadorNuevo <- (marcadorActual, jugador);
		//Escribir(EscribirMarcador(marcadorNuevo.punto1) << "-" << Escribir(EscribirMarcador(marcadorNuevo.punto2);
	//FIN_MIENTRAS

#include <iostream>
#include <string>
#include <list>

using namespace std;

struct Marcador{
	int punto1;
	int punto2;
};
			
Marcador nuevoMarcador(Marcador m, int jugador){
	switch(jugador){
		case 1:
			if(m.punto1 == 3 && m.punto2 == 3){
				m.punto1 = 4;
			}else if(m.punto1 == 4 && m.punto2 == 4){
				m.punto1 = 3;
				m.punto2 = 3;
			}else if(m.punto1 == 5){
				m.punto1 = 0;
				m.punto2 = 0;
			}else{
				m.punto1++;
			}			}
			break;
		case 2:
			if(m.punto1 == 3 && m.punto2 == 3){
				m.punto2 = 4;
			}else if(m.punto1 == 4 && m.punto2 == 4){
				m.punto1 = 3;
				m.punto2 = 3;
			}else if(m.punto2 == 5){
				m.punto1 = 0;
				m.punto2 = 0;
			}else{
				m.punto2++;
			}
			break;
	}
	
	return m;
}

string escribirMarcador(int punto){
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
		case 5:
			texto = "juego";
			break;		
	}
	
	return texto;
}		
		
int main(){
	
	list<int> S;
	list<int>::iterator EA_S;
	
	Marcador m;
	
	S = {1,1,2,2,1,1,2,2,1};
	
	EA_S = S.begin();
	m.punto1 = 0;
	m.punto2 = 0;
	
	while(EA_S != S.end()){
		nuevoMarcador(m, *EA_S);
//		cout << m.punto1 << " - " << m.punto2 << endl;
		cout << escribirMarcador(m.punto1) << ", " << escribirMarcador(m.punto2) << endl;
		EA_S++;
	}
	
	return 0;
}
