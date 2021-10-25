#include <iostream>
using namespace std;

//LEXICO
	//c: caracter;
//ALGORITMO
	//Leer(c);
	//REPETIR
		//SEGUN c
			//Z: Escribir(A)
			//z: Escribir(a)
			//9: Escribir(0)
			//c: Escribir(siguiente_letra)
			//EN_OTRO_CASO: Escribir(*)
		//FIN_SEGUN
	//HASTA_QUE c=\n
//FIN


int main(){
	
	char c;

	cin.get(c);
	
	do{		
		if(c=='Z'){
			cout << 'A';
		}else if(c=='z'){
			cout << 'a';
		}else if(c=='9'){
			cout << '0';
		}else if(c=='(' || c==')' || c==' '){
			cout << '*';
		}else{
			(int)c++;
			cout << (char)c;
		}
		cin.get(c);
	}while(c!='\n');
				
	return 0;
}
