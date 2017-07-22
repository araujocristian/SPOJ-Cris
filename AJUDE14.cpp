#include <iostream>

using namespace std;

int main() {
	int N, Ci, T, ACC=0;
	
	cin >> N;
	
	for (int i = 0; i<N; i++){
		cin >> Ci;
		ACC+=Ci;		
	}
	cin >> T;
	
	if (ACC == T){
		cout << "Acertou" << endl;
	}else{
		cout << "Errou" << endl;
	}
}
