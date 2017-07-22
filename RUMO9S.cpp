#include <iostream>

using namespace std;

int soma (int valr){
	int acc=0;
	while(1){
			acc += (valr%10);
			
			if((valr%10)==0){
				break;
			}
			
		}
	return acc;
}

int main(){
	int n, s, acc=0;
	cin>>n;
	
	while( n =! 0){
		
		int res = soma(n);
		
		cout << res << endl;
		
	}
}
