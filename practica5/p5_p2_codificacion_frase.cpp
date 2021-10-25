#include <iostream>
using namespace std;

//LEXICO
	//frase: caracter;
//ALGORITMO
	//Leer(frase);
	//REPETIR
		//SEGUN frase
			//Z: Escribir(A)
			//z: Escribir(a)
			//9: Escribir(0)
			//c: Escribir(siguiente_letra)
			//EN_OTRO_CASO: Escribir(*)
		//FIN_SEGUN
	//HASTA_QUE frase=\n
//FIN


int main(){
	
	char frase;

	do{		
		cin.get(frase);

		if(frase=='Z'){
			cout << 'A';
		}else if(frase=='z'){
			cout << 'a';
		}else if(frase=='9'){
			cout << '0';
		}else if(frase=='(' || frase==')' || frase==' '){
			cout << '*';
		}else{
			(int)frase++;
			cout << (char)frase;
		}

	}while(frase!='\n');
		
	return 0;
}
