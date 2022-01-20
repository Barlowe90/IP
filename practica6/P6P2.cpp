#include <iostream>
#include <list>
using namespace std;

int main(){

	list<int> S, T;
	list<int>::iterator EA_S, EA_T;
	int suma;
	
	S = {1,4,5,3,5,6};
	
	EA_S = S.begin();
	
	if(EA_S == S.end()){
		cout << "secuencia vacia";
	}else{
		//tratar primer elemento diferente al resto
		suma = *EA_S;
		T.push_back(suma);
		do{
			EA_S++;
		if (EA_S == S.end())
			break;
			suma = *EA_S + suma;
			T.push_back(suma);
		}while(true);
	}
	
	EA_T = T.begin();
	
	while(EA_T != T.end()){
		cout << *EA_T << ", ";
		EA_T++;
	}
	
}
