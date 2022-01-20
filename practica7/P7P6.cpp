#include <iostream>
#include <list>
using namespace std;


int main(){
	
	list<int> S;
	list<int>:: iterator EA;
	int suma, primero;
	
	S = {6, 1, 2, 2, 1};
	
	EA = S.end();

	if(EA == S.begin()){
		cout << "vacia";
	}
	else{
		EA--;
		suma = 0;
		primero = *EA;
		do{
			EA--;
			suma = suma + primero;
			primero = *EA;
		}while (EA != S.begin() && *EA != suma);
		
		if(*EA == suma){
			cout << "si";
		}else{
			cout << "no";
		}
	}

	return 0;
}
