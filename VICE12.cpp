#include <iostream>

using namespace std;

int main(){
	
	int A, B, C;
	
	cin >> A >> B >> C;
	
	if ((A > B && A < C) || (A < B && A > C)){
		cout << A << endl;
	} else if ((B > A && B < C) || (B < A && B > C)){
		cout << B << endl;
	} else {
		cout << C << endl;
	}
}
