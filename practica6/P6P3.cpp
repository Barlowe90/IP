#include <iostream>
#include <list>
using namespace std;

int main(){

	list<int> S1, S2, R;
	list<int>::iterator EA_S1, EA_S2, EA_R;
	
	S1 = {-44, -21, -1, 3, 5, 7, 18, 24, 30, 33, 54, 66, 101};
	S2 = {-32, -28, -21, 0, 3, 4, 6, 7, 14, 20, 24, 31, 33, 51, 66, 104, 200};

	EA_S1 = S1.begin();
	EA_S2 = S2.begin();
	
	if(EA_S1 == S1.end() && EA_S2 == S2.end()){
		cout << "secuencia vacia";
	}else{
		do{
			if(*EA_S1 < *EA_S2){
				EA_S1++;
			}else if(*EA_S2 < *EA_S1){
				EA_S2++;
			}else if(*EA_S1 == *EA_S2){
				EA_S1++;
				R.push_back(*EA_S2);
			}
		}while(EA_S1 != S1.end() && EA_S2 != S2.end());
	}
	
	EA_R = R.begin();
	
	while(EA_R != R.end()){
		cout << *EA_R << ", ";
		EA_R++;
	}
	
}

