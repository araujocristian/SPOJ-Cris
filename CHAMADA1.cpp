#include <iostream>
#include <string>

using namespace std;


void ord(string vet[], int tam){
	string aux;
	for(int i=tam; i>1; i--){
		
		for(int j=1; j<i; j++){
			if (vet[j] > vet[j+1]){
				
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
			}
		}	
	}
}


int main(){
	int n, k;
	string lista[102];
	
	cin >> n >> k;
	
	for (int i=1; i<=n; i++){
		cin >> lista[i];
	}
	
	ord(lista,n);
	
	
	cout << lista[k]<<endl;

}
