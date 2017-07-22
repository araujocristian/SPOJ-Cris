#include <iostream>
#include<algorithm>

using namespace std;

void busca(int vet[], int tam, int n, int *meio){
	int ini=0, fim=tam-1;
	
	while(ini<=fim){
		*meio = (ini + fim)/2;
		if(n==vet[*meio]){
			break;
		}else if(n<vet[*meio]){
			fim=*meio-1;
		}else ini=*meio+1;
		
	}
}


int main(){
	int n, m, casa[45010], enc[45010], cam=0, resp=0, k=0, met, *meio=&met;
	
	cin >> n >> m;
	
	for(int i=0; i<n; i++){
		cin >> casa[i];
	}
	
	for(int i=0; i<m; i++){
		cin >> enc[i];
	}
	
	for(int i=0; i<m; i++){
		busca(casa,n,enc[i], meio);
		cam= met-k;
        k += cam;
        cam= abs(cam);
 
        resp+=cam;
        
	}
	cout << resp <<endl;
}
