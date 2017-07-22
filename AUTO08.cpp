#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int c, acc=0;
	
	string t;
	
	cin >> c;
	
	cin >> t;
	
	for (int i=0; i<c; i++){
		
		if (t[i] == 'P'){
			acc+=2;
		}
		else if(t[i] == 'C'){
			acc+=2;
		}
		else if(t[i] == 'A'){
			acc+=1;
		}
		else if(t[i] == 'D'){
			acc+=0;
		}
	}
	
	t = ' ';
	
	cout << acc << endl;
	
	
}
