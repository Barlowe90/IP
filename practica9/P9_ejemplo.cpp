#include <iostream>
using namespace std;

const int NF = 3;
const int NC = 3;
typedef int Matriz[NF][NC];



int main () {
	
	int i, j;
	int sum, mayor;
	
	Matriz t = {
		{1, 4, 2},
		{2, 5, 1},
		{0, 1, 0}
	};
	
	sum = 0;
	
	for(i = 0; i < NF; i++){
		mayor = t[i][0];
		for(j = 1; j < NC; j++){
			if(mayor < t[i][j]){
				mayor = t[i][j];
				sum = sum + mayor;
			}
		}
	}
	
	cout << sum;
		
	return 0;
}

