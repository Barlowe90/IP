#include <iostream>
using namespace std;

	struct Fecha{	
		int d, m, a;
	};
	
	struct Fecha f;
	
	
int main() {

	cout << "Te calculamos el dia siguiente de la fecha" << endl;
	cout << "----------" << endl;
	cout << "Escribe con espacios dia  mes  ano" << endl;
	cin >> f.d >> f.m >> f.a;
	
	// comprobamos si el mes tiene 31 dias 
	if((f.d==31) && ((f.m==1) || (f.m==3) || (f.m==5) || (f.m==7)  || (f.m==8)  || (f.m==10))){
		f.d=1;
		f.m++;
	// comprobamos si el mes tiene 30 dias 
	}else if((f.d==30) && ((f.m==4) || (f.m==6) || (f.m==9) || (f.m==11))){
		f.d=1;
		f.m++;
	// caso de que sea febrero 
	}else if((f.d==28) && (f.m==2)){
		f.d=1;
		f.m++;
	// caso de que sea diciembre	
	}else if((f.d==31) && (f.m==12)){
		f.d=1;
		f.m=1;
		f.a++;
	// caso normal sin cambio de mes ni de anho
	}else{
		f.d++;
	}
	
	cout << "El dia siguiente es: " << f.d << "/" << f.m << "/" << f.a;
		
	return 0;	
}
