#include <iostream>

using namespace std;

int main() {

	int N, ACC=1;
	
	cin >> N;
	
	for (int i = 1; i<=N; i++){
		ACC*=i;
	}
	
	cout << ACC << endl;
	

}
