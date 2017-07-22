#include <iostream>

using namespace std;

int traf[101];
int main(){
	int A, V, X, Y;
	int maior=0, cont=0;
	
	bool flag = true;
	
	cin >> A >> V;
	
	while (A!=0 && V!=0){
		for(int a=0; a < V; a++){	
			cin >> X >> Y;	
			traf[X]++;
			traf[Y]++;	
		}
		
		for(int b=1; b<=A; b++){
			if(traf[b]>maior){
				maior = traf[b];
			}
		}
		
		cout << "Teste " << ++cont << endl;
		

		for(int i=1; i<=A; i++){
			if(traf[i] == maior){
				if(flag) cout << i;
				else cout << ' ' << i;
				flag = false;
			}			
		}
		
		cout << endl << endl;
	
		for (int c=0; c<101; c++) traf[c] = 0;
		flag = true;
		
		cin >> A >> V;
		
	}
	
}
