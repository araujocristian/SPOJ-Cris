#include <iostream>

using namespace std;

int main(){

	long long int L, N, T1, AT;

	cin >> L >> N;

	T1 = L-(N-1);
	
	AT = (T1*T1)+(N-1);
	
	cout << AT << endl;
	

}
