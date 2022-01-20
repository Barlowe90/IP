#include <iostream>
#include <list>
using namespace std;

int main(){
	
	list<double> S;
	list<double>::iterator EA;
	double media; 
	int contador;
	
	S = {44.5, 21.5, 65.1, 73.8, 57.6, 67.5, 73.3, 53.4, 56.8};
	
	EA = S.end();
	
	if(EA == S.begin()){
		cout << "secuencia vacia";
	}else{
		EA--;
		media = *EA;
		contador = 1;
		while (EA != S.begin()){
			media = media + *EA;
			contador++;
			EA--;
		}
		cout << "peso medio :" << media/contador;
	}
	
	return 0;
}
