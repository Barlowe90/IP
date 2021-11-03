#include <iostream>
#include <fstream>
#include <list>
#include <string>

//ALGORITMO
//	Comenzar(S1);
//	Comenzar(S2);
//  MIENTRAS(S1 O S2 != MarcaFin)
//		SI S1==S2 ENTONCES
//			Registrar(R, EA_S1);
//			Avanzar(EA_S1);
//			Avanzar(EA_S2);
//  	SI S1>S2 ENTONCES	
//			Avanzar(EA_S2);
// 	 	SI S2>S1 ENTONCES	
//			Avanzar(EA_S1);
// 	FIN_MIENTRAS
//	Comenzar(R);
//	MIENTRAS(EA_R != R.end()) HACER
//		cout << *EA_R;
//		EA_R++;
//	FIN_MIENTRAS


using namespace std;

int main(){
		list<int> S1, S2, R;
		list<int>::iterator EA_S1, EA_S2, EA_R;
		
		S1 = {-44, -21, -1, 3, 5, 7, 18, 24, 30, 33, 54, 66, 101};
		S2 = {-32, -28, -21, 0, 3, 4, 6, 7, 14, 20, 24, 31, 33, 51, 66, 104, 200};
		 
		EA_S1 = S1.begin();
		EA_S2 = S2.begin();
		 
		while(EA_S1 != S1.end() || EA_S2 != S2.end()){
			if(*EA_S1 == *EA_S2){
				R.push_back(*EA_S1);
				EA_S1++;
				EA_S2++;
			}else if(*EA_S1 > *EA_S2){
				EA_S2++;
			}else if(*EA_S2 > *EA_S1){
				EA_S1++;
			}
		}
		
		EA_R = R.begin();
		
		while(EA_R != R.end()){
			cout << *EA_R << ", ";
			EA_R++;
		}
		 
	return 0;
}
