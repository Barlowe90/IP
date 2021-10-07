#include <iostream>
using namespace std;

int main(){
	
	bool edad, salud, accidente;
	char respuesta;
		
	cout << "Tiene mas de 30 anos? (S/N)" << endl;
	cin >> respuesta;
	
	if(respuesta=='S' || respuesta=='s'){edad=true;}else{edad=false;}
	
	cout << "Tiene buena salud? (S/N)" << endl;
	cin >> respuesta;
		
	if(respuesta=='S' || respuesta=='s'){salud=true;}else{salud=false;}
		
	cout << "Ha tenido alguna vez un accidente? (S/N)" << endl;
	cin >> respuesta;
		
	if(respuesta=='S' || respuesta=='s'){accidente=true;}else{accidente=false;}	
	
	if ((salud && accidente) || (!salud && !accidente)){
		cout << "Llamar a un experto" << endl;
	}else if (!salud && accidente){
		cout << "Rechazado" << endl;
	}else if (edad && salud && !accidente){
		cout << "Contrato B" << endl;
	}else if (!edad && salud && !accidente){
		cout << "Contrato A" << endl;
	}else {cout << "Error";}
		
	return 0;
}
