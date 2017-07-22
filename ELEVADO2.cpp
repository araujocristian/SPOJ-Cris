#include <iostream>
using namespace std;

int main (){
	int N, C, S, E, T=0;
	bool f=false;
	char c;
	cin >> N >> C;
	
	for (int i = 0; i<N; i++){
		cin >> S >> E;
		T = T - S + E;
		
		
		if (T>C){
			f=true;
			c='S';
		}else if(f!=true){
			c='N';
		}
	}
	
	cout << c << endl;
}
