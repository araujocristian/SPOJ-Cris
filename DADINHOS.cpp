#include <iostream>

using namespace std;

int main() {
	int N, C, D, ACC=0;
	cin>> N >> C >> D;
	while (N!=0 && C!=0 && D!=0){
		
		ACC = N*C*D;
		cout << ACC << endl;
		cin>> N >> C >> D;
	}


}
