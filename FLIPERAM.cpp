#include <iostream>

using namespace std;



void ord (int vet[], int tam){
	int aux=0;
	for(int i=tam-1; i>0; i--){
		for(int j=0; j<i; j++){
			if(vet[j]>vet[j+1]){
				aux = vet[j];
				vet[j]=vet[j+1];
				vet[j+1]=aux;
			}
		}
		
	}
}



int main(){
	int vet[10000],n,m;
	
	cin >> n >> m;
	
	for(int i=0; i<n; i++){
		cin >> vet[i];
	}
	
	ord(vet,n);
	
	for(int i=1; i<=m; i++){
		cout << vet[n-i]<<endl;
	}
	
}
