#include <iostream>
using namespace std;

const int N = 5;
typedef int Vector[N];

int main () {
	Vector t = {1, 2, 3, 4, 5};
	Vector tp = {};
	int i;
	
	tp[0] = t[N-1];
	
	for(i = 1; i < N; i++){
		tp[i] = t[i-1];
	}

	
	for(i=0; i<N; i++){
		cout << tp[i] << " ," << endl;
	}
	
	return 0;
}
