#include <iostream>
using namespace std;

/*LEXICO
	notaFinal, notaExamen, notaTrabajo, notaTest: entero;
ALGORITMO
	Leer(notaExamen)
	Leer(notaTrabajo)
	Leer(notaTest)
	notaFinal <- 
	SEGUN notaFinal
	 notaFinal<5: Salida(Suspenso)
	 5<=notaFinal<7: Salida(Aprobado)
	 7<=notaFinal<9: Salida(Notable)
	 9<=notaFinal<10: Salida(Sobresaliente)
	 notaFinal=10: Salida(Matricula)
	FIN_SEGUN
FIN
* */


int main(){
	
	float notaFinal, notaExamen, notaTrabajoCasa, notaTest;
	
	cout << "Nota del Examen: ";
	cin >> notaExamen;
	
	cout << "Nota del trabajo en casa: ";
	cin >> notaTrabajoCasa;
	
	cout << "Nota del test: ";
	cin >> notaTest;

	notaFinal = (50*notaExamen/100) + (30*notaTrabajoCasa/100) + (20*notaTest/100);
	
	if(notaFinal<5){
		cout << "Suspenso" << endl;
	}else if(notaFinal>=5 && notaFinal<7){
		cout << "Aprobado" << endl;
	}else if(notaFinal>=7 && notaFinal<9){
		cout << "Notable" << endl;
	}else if(notaFinal>=9 && notaFinal<10){
		cout << "Sobresaliente" << endl;
	}else if(notaFinal==10){
		cout << "Matricula" << endl;
	}
	
	return 0;
}
