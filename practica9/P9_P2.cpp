#include <iostream>
#include <string>
using namespace std;

const int NF = 6;
const int NC = 4;
typedef char TipoSopa[NF][NC];

void buscaLetra(TipoSopa t, string palabra){
	int i, j, cont;
	i = 0; j = 0;
	
	for(cont = 0; cont < palabra.length(); cont++){
		while( !(i == NC && j == NF) && (t[i][j] != palabra[cont]) ){
			if( j < NF){
				j++;
			}else{
				i++;
				j = 0;
			}
		}
	
		if(t[i][j] == palabra[cont] && cont == 0){
			cout << "Inicio " << i+1 << ", " << j+1 << endl;
		}else if((t[i][j] == palabra[cont]) && (cont == palabra.length()-1) ){
			cout << "Final " << i+1 << ", " << j+1 << endl;
		}else if(t[i][j] != palabra[cont]){
			cout << "0,0";
		}
	}
}

int main () {
		
	string palabra;	
	
	TipoSopa t = {
		{ 'c', 'v', 'j', 'y' },
		{ 'p', 'a', 'd', 'e' },
		{ 'o', 's', 's', 'e' },
		{ 'd', 'd', 'y', 'a' },
		{ 'w', 'i', 'a', 'e' },
		{ 'a', 'd', 'd', 'd' }
			};
	
	cout << "Palabra: " << endl;
	cin >> palabra;
	
	buscaLetra(t, palabra);
	
	return 0;
}

