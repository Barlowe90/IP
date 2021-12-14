#include <iostream>
using namespace std;

int main(){
	
	const int N = 10;
	typedef int Vector[N];
	int i, ultimo;
	
	Vector t = {3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
	
	ultimo = t[N-1];
	
	for (i = N-1; i >= 1; --i) {
		t[i] = t[i-1];
	}
	t[0] = ultimo;

	for(i = 0; i< N; i++){
		cout << t[i] << ", ";
	}
	
	return 0;
}
