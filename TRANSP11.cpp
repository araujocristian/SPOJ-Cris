#include <iostream>

using namespace std;

int main(){
	
	unsigned int A, B, C, X, Y, Z, acc1, acc2, acc3;
	
	cin >> A, B, C;
	cin >> X, Y, Z;
	
	acc1 = X/A;
	acc2 = Y/B;
	acc3 = Z/C;
	
	cout << acc1*acc2*acc3 << endl;
	
}
