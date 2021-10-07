#include <iostream>
using namespace std;

int main() {

	int n1, n2;
	
	cout << "Introduzca dos numeros: " << endl;
	cin >> n1 >> n2;
	
	if(n1>n2){
		cout << "El maximo es: " << n1 << endl;
	}else{
		cout << "El maximo es: " << n2 << endl;
	}
	
	return 0;	
}
