#include <iostream>
#include <list>
using namespace std;

const int NF = 6;
const int NC = 6;
typedef char TipoCodificacion[NF][NC];

const char indiceFila[NF] = {
	'u',
	'v',
	'w',
	'x',
	'y',
	'z'
};

const char indiceColumna[NC] = {
	'u',
	'v',
	'w',
	'x',
	'y',
	'z'
};

void codificacion(TipoCodificacion t, char &c, char &fila, char &col){
	int i, j;
	
	i = 0, j = 0;
	
	while( !(i == NF && j == NC) && (t[i][j] != c)){
		if(j < NC){
			j++;
		}else{
			i++;
			j = 0;
		}
	}
	
	if(t[i][j] == c){
		fila = indiceFila[i];
		col = indiceColumna[j];
	}
}


int main () {

	TipoCodificacion t = {
		{'b','a','c','0','9','8'},
		{'x','w','v','d','7','m'},
		{'y','f','u','e','4','l'},
		{'i','g','h','6','j','k'},
		{'z','t','s','3','5','n'},
		{'1','2','r','q','p','o'},
	};
	
	list<char> S, R;
	list<char>::iterator EAS, EAR;
	char fila, col;
	
	S = {'m','e','n','s','a','j','e','1','0'};
	
	EAS = S.begin();
	
	while(EAS != S.end()){
		codificacion(t, *EAS, fila, col);
		R.push_back(fila);
		R.push_back(col);
		EAS++;
	}
	
	EAR = R.begin();
	
	while(EAR != R.end()){
		cout << *EAR;
		EAR++;
	}
	
	
	return 0;
}

