#include <iostream>


using namespace std;

void ord(int vet[], int tam){
	int aux=0;
	for(int i=tam; i>0; i--){
		for(int j=1; j<i; j++){
			if(vet[j]>vet[j+1]){
				aux = vet[j];
				vet[j] = vet [j+1];
				vet[j+1] = aux;				
			}
		}
	}
}

long long pos[100000000];
int vtemp[112];

int main(){
	int n, m, temp;
	
	
	cin >> n >> m;
	
	for(int i=1; i<=n; i++){
		for (int j=0; j<m; j++){
			cin >> temp;
			vtemp[i] += temp;
		}
	}
	
	for(int c=1; c<=n; c++){
		pos[vtemp[c]]=c;
	}
	
//	cout << endl;
	
	ord(vtemp,n);
	
//	for(int c=1; c<=n; c++){
//	cout << vtemp[c] <<endl;
//	}
	
//	cout << endl;
		
	for(int l=1; l<=3; l++){
		cout << pos[vtemp[l]] <<endl;
	}
	
	return 0;
}
