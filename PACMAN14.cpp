#include <iostream>

using namespace std;

int main(){
	
	int n, c=0, max=0; 
	char vet[100][100];
	bool flag = true;
	
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> vet[i][j];
		}
	}
	
	for(int i=0; i<n; i++){
		if(flag){
			for(int j=0; j<n; j++){
				if (vet[i][j] == 'o') c++;
				else if(vet[i][j] == 'A'){
					if(c>max) max = c;
					c=0;
				}
			}
			flag = false;
		}else{
			for(int j=(n-1); j>=0; j--){
				if (vet[i][j] == 'o') c++;
				else if(vet[i][j] == 'A'){
					if(c>max) max = c;
					c=0;
				}
			}
			flag = true;
		}
		
	}
	
	if(c>max) max = c;
	
	cout << max << endl;
	
}
