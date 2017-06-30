#include <iostream>

using namespace std;

int main(){
	int N, P, Q;
	char lx1, lx2, C;

	cin >> N;
	cin >> P >> C >> Q;


	if (C == '+'){
		if (P+Q > N){
			cout << "OVERFLOW" << endl;
			}else{
				cout << "OK" << endl;				
				}
	}

	if (C == '*'){
		if (P*Q > N){
			cout << "OVERFLOW" << endl;
			}else{
				cout << "OK" << endl;				
				}
	}


}
