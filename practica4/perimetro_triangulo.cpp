#include <iostream>
#include <cmath>
using namespace std;

struct Punto{
	float x, y;
};

struct Triangulo{
	Punto p1, p2, p3;
};
	
float sqr(float x){
	return (x*x);
}

float distancia(Punto p1, Punto p2){
	return sqrt(sqr(p1.x - p2.x) + sqr(p1.y - p2.y));
}

void leerTriangulo(Triangulo &t){
	cout << "Vamos a crear un triangulo: ";
	cout << "Introduzca el primer punto: ";
	cin >> t.p1.x >> t.p1.y;
	cout << "Introduzca el segundo punto: ";
	cin >> t.p2.x >> t.p2.y;
	cout << "Introduzca el tercer punto: ";
 	cin >> t.p3.x >> t.p3.y;
}

int main(){
	Triangulo t;
	float perimetro;
	
	// creamos un triangulo
	leerTriangulo(t);
	// calcular el perimetro
	perimetro = distancia(t.p1, t.p2) + distancia(t.p2, t.p3) + distancia(t.p3, t.p1);
	// mostramos resultado
	cout << "El perimetro es: " << perimetro << endl;
	
	return 0;
}
