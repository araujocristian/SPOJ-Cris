#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int n, a, b, cont=0, r[1000]={};
	
	string nome1, nome2;
	
	while(1){
		
		cin >> n;
		
		
		
		if (n==0) break;
		
		cin >> nome1 >> nome2;
		
		for(int i=0; i<n; i++){
			cin >> a;
			cin >> b;
			r[i] = a+b;
		
		}
		
		cont ++;
		
		cout << "Teste " << cont << endl;
		
		for(int i=0; i<n; i++){
			if(r[i]%2 == 0) cout << nome1 << endl;
			else cout << nome2 << endl;
		}
		
		for(int i=0; i<n; i++) r[i]=0;
		nome1 = ' ';
		nome2 = ' ';
		cout << endl;
		
		
	}



}
