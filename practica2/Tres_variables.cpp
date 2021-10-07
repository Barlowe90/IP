#include <iostream>

using namespace std;

int main() {

	char a, b, c, aux;
	
	cout << "Introduce 3 letras> ";
	cin >> a >> b >> c;	
	
	aux = b;
	b = a;
	a = c;
	c = aux;
	
	cout << "Ahora son: " << a << b << c;
	return 0;
}
