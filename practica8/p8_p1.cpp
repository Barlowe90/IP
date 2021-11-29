#include <iostream>
using namespace std;

int main(){
	
	const int N = 10;
	typedef int Vector[N];
	int i;
	
	Vector t = {3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
	
	t[1] = t[N-1];
	
	for (i = N-2; i >= 1; --i) {
		t[i] = t[i+1];
		cout << t[i] << ", ";
	}

	
	
	
		
	return 0;
}
