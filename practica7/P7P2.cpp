#include <iostream>
#include <list>
using namespace std;

int main(){
	
	list<int> S, R;
	list<int>::iterator EA, EA_R;
	int anterior, nuevo;
	
	S = {1, 0, 2, 1, 3, 2, 4, 3, 5, 4, 6};
	
	EA = S.begin();
	
	if(EA == S.end()){
		cout << "secuencia vacia";
	}else{
		anterior = *EA;
		EA++;
		while (EA != S.end()){
			nuevo = anterior + *EA;
			R.push_back(nuevo);
			anterior = *EA;
			EA++;
		}
		
	}
	
	EA_R = R.begin();
	while(EA_R != R.end()){
		cout << *EA_R << " ,";
		EA_R++;
	}
	
	return 0;
}
