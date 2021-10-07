#include <iostream>
using namespace std;

int main() {

	int d, m, a;
	
	cout << "Te calculamos el dia siguiente de la fecha" << endl;
	cout << "----------" << endl;
	cout << "Escribe con espacios dia  mes  ano" << endl;
	cin >> d >> m >> a;
	
	// comprobamos si el mes tiene 31 dias 
	if((d==31) && ((m==1) || (m==3) || (m==5) || (m==7)  || (m==8)  || (m==10))){
		d=1;
		m++;
	// comprobamos si el mes tiene 30 dias 
	}else if((d==30) && ((m==4) || (m==6) || (m==9) || (m==11))){
		d=1;
		m++;
	// caso de que sea febrero 
	}else if((d==28) && (m==2)){
		d=1;
		m++;
	// caso de que sea diciembre	
	}else if((d==31) && (m==12)){
		d=1;
		m=1;
		a++;
	// caso normal sin cambio de mes ni de anho
	}else{
		d++;
	}
	
	cout << "El dia siguiente es: " << d << "/" << m << "/" << a;
	
	return 0;	
}
