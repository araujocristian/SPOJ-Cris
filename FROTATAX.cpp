#include <iostream>

using namespace std;

int main(){
	
	float A, G, Ra, Rg, Pa, Pg;
	
	cin >> A >> G >> Ra >> Rg;
	
	Pa = A/Ra;
	Pg = G/Rg;
	
	if (Pa>=Pg){
		cout << 'G' << endl;
		
	}else{
		cout << 'A' << endl;
	}
	
}
