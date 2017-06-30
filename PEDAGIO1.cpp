#include <iostream>

using namespace std;

int main(){
	
	unsigned int L, D, K, P, qped, ckmp, cped;
	
	cin >> L >> D;
	cin >> K >> P;
	
	qped = L/D;
	ckmp = L*K;
	cped = qped*P;
	
	cout << cped + ckmp << endl;
	
}
