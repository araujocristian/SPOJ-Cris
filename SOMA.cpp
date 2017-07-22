#include <iostream>

using namespace std;

int main() {
	
	int N, X, acc=0;
	
	cin >> N;
	
	for (int i=0; i<N; i++){
		cin >> X;
		acc = acc + X;
	}

cout << acc << endl;

}
