#include <iostream>

using namespace std;

int main() {

	int b0, b1, b2, b3, decimal;
	
	cout << "Binario: ";
	cin >> b3 >> b2 >> b1 >> b0;
	
	decimal = b3*8 + b2*4 + b1*2 + b0; 

	cout << "Decimal: " << decimal << endl;
	
	return 0;	
}
