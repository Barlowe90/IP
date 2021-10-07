#include <iostream>
using namespace std;

int main() {

	int nota;
	
	cout << "Introduzca una nota: " << endl;
	cin >> nota;
	
	if(nota==20){
		cout << "Matricula de honor" << endl;
	}else if((nota==19) || (nota==18)){
		cout << "Sobresaliente" << endl;
	}else if((nota==17) || (nota ==16)){
		cout << "Notable" << endl;
	}else if((nota==15) || (nota ==14)){
		cout << "Aprobado" << endl;
	}else{
		cout << "Suspenso" << endl;
	}
	
	return 0;	
}
