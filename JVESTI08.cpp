#include <iostream>
#include <string>

using namespace std;

int main(){
	int n, cont=0;
	
	string gab, resp;
	
	cin >> n;
	cin >> gab;
	cin >> resp;
	
	for(int i=0; i<n; i++){
		if(gab[i]==resp[i]) cont++;
	}
	
	cout << cont << endl;
	
}
