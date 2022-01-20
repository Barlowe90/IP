#include <iostream>
using namespace std;

const int LMAX = 80;
typedef char Texto[LMAX];


int main(){
	
	Texto t = {'a','x','c','x','a','d','a','c','a','c','a','c','b','a','c',
		'a','c','a','c','a','c','a','c','a','c','a','c','a','c','b',
		'a','c','a','c','a','c','a','c','a','c','a','c','a','c','b',
		'a','c','a','c','a','c','a','c','a','c','a','c','a','c','b',
		'a','c','a','c','a','c','a','c','a','c','a','c','a','c','b',
		'a','c','a','c','a'};
	char anterior;
	int act; 
	//~ int cont;
	
	
	// opcion de recorrido para encontrar todas las dobles
	//~ if(LMAX == 0){
		//~ cout << "texto vacio";
	//~ }else{
		//~ anterior = t[0];
		//~ cont = 0;
		
		//~ for(act = 1; act < LMAX; act++){
			//~ if(anterior == t[act]){
				//~ cont++;
				//~ cout << "posicion " << act << ": " << anterior << " , " << t[act] << endl;
			//~ }
			//~ anterior = t[act];
		//~ }
		//~ cout << "Total letras dobles " << cont;
	//~ }
	
	// opcion de busqueda para encontrar la primera doble
	if(LMAX == 0){
		cout << "Vacia ";
	}else{
		act = 0;
		anterior = t[act];
		act++;
		while( (t[act] != LMAX) && !(anterior == t[act]) ){
			anterior = t[act];
			cout << anterior;
			cout << t[act] << endl;
			act++;
		}
		if(anterior == t[act]){
			cout << "hay dobles";
		}else{
			cout << "no hay dobles";
		}
	}
	
	return 0;
}
