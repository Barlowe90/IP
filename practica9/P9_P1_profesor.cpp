#include <iostream>
using namespace std;

const int NTITULACIONES = 8;
const int NANOS = 11;

typedef int TipoEgresados[NTITULACIONES][NANOS];

const string nombresTitulaciones[NTITULACIONES] = {
	"Sexador de pollos",
	"Enhebrador de agujas hipodÃ©rmicas",
	"Vendedor de frigorÃ­ficos en el polo",
	"Peluquero de bombillas",
	"Desfacedor de entuertos",
	"Atrapamoscas",
	"Abrazafarolas",
	"Cueceleches"
};

//~ Obtener el año que mas alumnos terminaron la carrera

int sumaAno(TipoEgresados e, int a){
	int tit, suma;
	
	suma = 0;
	
	for(tit = 0; tit < NTITULACIONES; tit++){
		suma = suma + e[tit][a];
	}
	return suma;
}

int anoMasTitulados(TipoEgresados m){

	int amas,	// año que mas titulados hubo
		act,	// año actual
		smas,	// suma de titulados del año que mas hubo
		sact;	// suma de titulados del año actual
		
		smas = -1;
		
		for(act = 0; act < NANOS; act++){
			sact = sumaAno(m, act);
			if (sact > smas){
				smas = sact;
				amas = act;
			}
		}
		return amas;
}

//~ Titulacion con menor numero de titulados

int sumaTitulacion(TipoEgresados e, int a){
	int ano, suma;
	
	suma = 0;
	
	for(ano = 0; ano < NANOS; ano++){
		suma = suma + e[a][ano];
	}
	return suma;
}

int titulacionMenosTitulados(TipoEgresados m){
	int tmen,	// titulacion en que menos titulados hubo
		tact,	// tituacion actual
		smen,	// suma titulados de la tituacion en que menos hubo
		sact;	// suma titulados de la titulacion actual
	
	tmen = 0;
	smen = sumaTitulacion(m, 0);
	
	for(tact = 1; tact < NTITULACIONES; tact++){
		sact = sumaTitulacion(m, tact);
		if(sact < smen){
			smen = sact;
			tmen = tact;
		}
	}
	return tmen;
}

//~ Titulacion creciente

bool esCreciente(TipoEgresados e, int c){
	
	int ano;
	
	ano = 1;
	
	while(ano != NANOS - 1 && e[c][ano] > e[c][ano-1]){
		ano++;
	}
	
	return e[c][ano] > e[c][ano-1];
}

int titulacionCreciente(TipoEgresados e){
	int t;
	
	t = 0;
	
	while(t != NTITULACIONES - 1 && !esCreciente(e,t)){
		t++;
	}
	
	if(esCreciente(e,t)){
		return t;
	}else{
		return -1;
	}
}

//~ Programa principal

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

	int titCreciente;
	
	cout << "Año con mas titulados " << anoMasTitulados(t) + 1990 << endl;
	cout << "Titulacion con menos titulados " << nombresTitulaciones[titulacionMenosTitulados(t)] << endl;
	
	titCreciente = titulacionCreciente(t);
	
	if(titCreciente == -1){
		cout << "No hay titulaciones crecientes" << endl;
	}else{
		cout << "La primera titulacion creciente es: " << nombresTitulaciones[titCreciente] << endl;
	}
	
	return 0;
}
