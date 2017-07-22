#include <iostream>

using namespace std;

int main(){
	
	int k, n, vet[100][100], res[100][100];
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>> vet[i][j];			
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>> res[i][j];
			vet[i][j] += res[i][j];
		}
	}
		
   
   for (int h = 0; h < n; h++) {
		cout << vet[h][0];
		for (int m = 1; m < n; m++)
			cout << " " << vet[h][m];

		cout << endl;
	}
}
