#include <iostream>
using namespace std;

const int NPRODUCTOS = 6;
const int NDEPENDIENTES = 5;
typedef int Tipo_Existencias[NPRODUCTOS];
typedef int Tipo_Ventas[NDEPENDIENTES][NPRODUCTOS];
typedef double Tipo_Precio[NPRODUCTOS];

// apartado 2
bool vendedorLiquidador(Tipo_Ventas tv, Tipo_Existencias te, int dependiente){
	int i;
	
	i = 0;
	while(i != NPRODUCTOS && !(tv[dependiente][i] == te[i] )){
		i++;
	}
	
	return tv[dependiente][i] == te[i];
}

// apartado 3
void vendedorTop(Tipo_Ventas tv, Tipo_Precio tp, int &dependiente){
	
	double factActual, factMayor;
	int i, j;
	
	factMayor = -1.0;
	
	for(i = 0; i < NDEPENDIENTES; i++){
		factActual = 0.0;
		for(j = 0; j < NPRODUCTOS; j++){
			factActual = factActual + tv[i][j] * tp[j];
			if(factActual >= factMayor){
				dependiente = i;
				factMayor = factActual;
			}
		}
	}
}

int main () {
	
	Tipo_Ventas tv = {
		{12,  4,  0,  0,  4,  5},
		{ 5, 12,  0,  0, 14,  1},
		{ 6,  4, 35,  0, 24,  2},
		{ 7,  3,  0, 36,  1,  7},
		{ 2,  0,  0,  0,  6,  2}
		};
	
	Tipo_Existencias te = { 40, 60, 35, 80, 50, 25 };
	
	// apartado 2
	if(vendedorLiquidador(tv, te, 3)){
		cout << "True" << endl;
	}else{
		cout << "False" << endl;
	}
		
	// apartado 3	
	Tipo_Precio tp = { 3.75, 1.15, 2.00, 7.13, 4.00, 0.75 };	
	int dependiente;
	
	vendedorTop(tv, tp, dependiente);	
	cout << dependiente + 1;
		
	return 0;
}

