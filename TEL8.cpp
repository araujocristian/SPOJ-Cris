#include <iostream>
#include <string>

using namespace std;

int main(){
	string num1;
	
	cin >> num1;
	
	for(int i=0; i<num1.length(); i++){
		if((num1[i]>='A') && (num1[i]<='Z')){
			if(num1[i]>='A' && num1[i]<='C'){
				num1[i]='2';
			}
			else if(num1[i]>='D' && num1[i]<='F'){
				num1[i]='3';
			}
			else if(num1[i]>='G' && num1[i]<='I'){
				num1[i]='4';
			}
			else if(num1[i]>='J' && num1[i]<='L'){
				num1[i]='5';
			}
			else if(num1[i]>='M' && num1[i]<='O'){
				num1[i]='6';
			}
			else if(num1[i]>='P' && num1[i]<='S'){
				num1[i]='7';
			}
			else if(num1[i]>='T' && num1[i]<='V'){
				num1[i]='8';
			}
			else if(num1[i]>='W' && num1[i]<='Z'){
				num1[i]='9';
			}	
		}
	}
	
	cout << num1 << endl;
}
