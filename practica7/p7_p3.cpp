//~ Problema de busqueda al tener que buscar un par y de recorrido porque quizas es el ultimo de la lista.
//~ La condicion para deteenr la iteracion es llegar al fin o encontrar la propiedad.
//~ Las diferencias es que en el primero no trato el primer elemento y no comprobamos si la secuencia esta vacia y en el esquema 2 tratamos la secuencia vacia

//~ LEXICO
	//~ S: Secuencia de Entero;
	
//~ ALGORITMO esquema 1
	//~ Comenzar(S);
	//~ MIENTRAS EA(S)!= MF Y EA(S) MOD 2 != 0 HACER
		//~ Avanzar(S);
	//~ FIN_MIENTRAS

	//~ SEGUN EA(S)
		//~ EA(S) = MarcaFin: Escribir("No hay pares");
		//~ EA(S): Escribir("hay par");
	//~ FIN_SEGUN
//~ FIN

//~ ALGORITMO esquema 2
	//~ Comenzar(S);
	//~ SEGUN EA(S)
		//~ EA(S) = MarcaFin: Escribir("Secuencia vacia");
		//~ EA(S) != MarcaFin:
			//~ REPETIR 
				//~ Avanzar(S);
			//~ HASTA EA(S)!= MF Y EA(S) MOD 2 != 0 
			//~ SEGUN EA(S)
				//~ EA(S) = MarcaFin: Escribir("No hay pares");
				//~ EA(S) != MarcaFin: Escribir("El par es: " EA(S));
			//~ FIN_SEGUN
//~ FIN

#include <iostream>
#include <list>
using namespace std;

// Esquema 1
int main(){
	list<int> S, R;
	list<int>:: iterator EA_S;
	
	S = {2, 3, 9, 11, 5, 9};
	
	EA_S = S.begin();
	
	while(EA_S != S.end() && *EA_S % 2 != 0){
		EA_S++;
	}
		
	if(EA_S == S.end()){
		cout << "No hay pares";
	}else if(EA_S != S.end()){
		cout << "El par es: " << *EA_S;
	}

	return 0;
}


// Esquema 2
//~ int main(){
	//~ list<int> S, R;
	//~ list<int>:: iterator EA_S;
	
	//~ S = {1, 3, 9, 11, 5, 4};
	
	//~ EA_S = S.begin();
	
	//~ if(EA_S == S.end()){
		//~ cout << "Secuencia vacia";
	//~ }else if(EA_S != S.end()){
		//~ do{
			//~ EA_S++;
		//~ }while(EA_S != S.end() && *EA_S % 2 != 0);	
		
		//~ if(EA_S == S.end()){
				//~ cout << "No hay pares";
		//~ }else if(EA_S != S.end()){
			//~ cout << "El par es: " << *EA_S;
		//~ }
	//~ }
	
	//~ return 0;
//~ }
