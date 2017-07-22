#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	unsigned int N, P; 
	float NT=0.0, NO=0.0;
	string a = ("P"),
			b = (""),
			c = ("dle");
	
	cin >> N >> P;
	
	while(N!=0 && P!=0){
		if (N%P==0){
			NT = N/P;
		}else{
			NT = (N/P) + 1;
		}
		NO = NT-4;
		
		if(NT <= 6) {
			cout << "Poodle" << endl;
		}else if(NT >= 20){
			cout << "Poooooooooooooooodle"<< endl;
		}else {
			for(int i=0; i<NO; i++ ){
				b+="o"; 				
			}
			cout << a+b+c << endl;
			b = ("");
		}
		
		cin >> N >> P;
	}
}
