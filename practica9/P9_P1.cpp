#include <iostream>
using namespace std;

const int NTITULACIONES = 8;
const int NANOS = 11;
typedef int TipoEgresados[NTITULACIONES][NANOS];

// obtenga el ano que mas alumnos terminaron la carrera
int sumaAno(TipoEgresados t, int ano){
	int tit, sum;
	
	sum = 0;
	
	for(tit = 0; tit < NTITULACIONES; tit++){
		sum = sum + t[tit][ano];
	}
	
	return sum;
}

int anoMasTitulados(TipoEgresados t){
	int sant, sact, amas;
	int act;
	
	sant = -1;
	
	for(act = 0; act < NANOS; act++){
		sact = sumaAno(t, act);
		if(sact > sant){
			sant = sact;
			amas = act;
		}
	}
	
	return amas;
}

// titulacion que menor numero de profesionales ha generado

int menosTitulados(TipoEgresados t, int tit){
	int ano, sum;
	
	sum = 0;
	
	for(ano = 0; ano < NANOS; ano++){
		sum = sum + t[tit][ano];
	}
	
	return sum;
}

int titulacionMenosTitulados(TipoEgresados t){
	int tmen, tact, smen, sact;
	
	tmen = 0;
	smen = menosTitulados(t, 0);
	
	for(tact = 0; tact < NTITULACIONES; tact++){
		sact = menosTitulados(t, tact);
		if(sact < smen){
			smen = sact;
			tmen = tact;
		}
	}
	
	return tmen;
}

int main () {
	
	TipoEgresados t = {
		{12, 15, 13, 21,  8, 11, 20, 57, 41, 36, 33},
		{12, 15, 13, 21,  8, 11, 20, 57, 41, 36, 33},
		{12, 15, 13, 21,  8, 11, 20, 57, 41, 36, 33},
		{12, 15, 13, 21,  8, 11, 20, 57, 41, 36, 33},
		{12, 15, 13, 21,  8, 11, 20, 57, 41, 36, 33},
		{12, 15, 18, 21, 28, 31, 32, 35, 41, 46, 53}, // <== Esta es creciente
		{12, 15, 13, 21,  8, 11, 20, 57, 41, 36, 33},
		{12, 15, 13, 21,  8, 11, 20, 57, 41, 36, 33}
	};
	
	cout << anoMasTitulados(t) + 1990 << endl;
	cout << titulacionMenosTitulados(t) << endl;
	
	return 0;
}

