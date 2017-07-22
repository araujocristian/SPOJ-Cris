#include <iostream>

using namespace std;

int main() {
	int V, I=0, J=0, K=0, L=0, n=1;
	cin >> V;
	
	while ( V!=0){
		
	I = V/50;
	
	J = (V-(I*50))/10;
	
	K = (V-(I*50)-(J*10))/5;
	
	L = (V-(I*50)-(J*10)-(K*5));
	
	
	cout<<"Teste "<< n << endl << I << " " << J <<" " << K <<" " << L << endl << endl;
	n++;
	cin >> V;
	}
	
	
	
}
