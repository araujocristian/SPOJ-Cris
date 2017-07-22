	#include <iostream>

using namespace std;

void ord (int vet[], int tam){
	int aux = 0;
	for(int i=tam; i>0; i--){
		for(int j=1; j<i; j++){
			if(vet[j]<vet[j+1]){
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
			}
		}
	}
}

int main(){
	int n, m, o, p, b, vet[110]={}, pos[110]={};
	
	cin >> n >> m;
	
	for(int i=1; i<=m; i++){
		cin >> o >> p >> b;
		vet[o] +=1;
		vet[p] +=1;
		vet[b] +=1;
	}
	
	for(int c=1; c<=n; c++){
		pos[vet[c]] = c;
	}
	
//	for(int c=1; c<=n; c++){
//		cout << vet[c] <<endl <<endl;
//	}
	
	ord(vet, n);
	
	for(int c=m*n; c>=0 ; c--){
		//if(pos[c]!=0){
		
			cout << pos[c] <<' ';
		//}
	}
	//cout << endl;
	
//	for(int c=1; c<=n; c++){
//	cout << vet[c] <<endl;
//	}
	
	
	
	
}
