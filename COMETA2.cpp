#include <iostream>

using namespace std;

int main(){
	
	int ano, atual, acc1, acc2;
	
	ano = 1986;
	
	cin >> atual;
	
	acc1 = atual - ano;
	
	if(acc1 < 76){
		cout << ano+76 << endl;
	}else{
		acc2 = (acc1/76)+1;
		
		cout<<ano + (76*acc2) << endl;
	}
	
	
}
