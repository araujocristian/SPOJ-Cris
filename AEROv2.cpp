#include <iostream>

using namespace std;

int main(){
	int a, v, x, y;
 	int teste = 0;
 	int trafego[101];
 
 	while (1){
  		cin >> a >> v;
  		if (a == 0 && v == 0) break;
  
  		for (int i = 1; i <= a; i++) trafego[i] = 0;
  
  
  		for (int i = 0; i < v; i++) {
   			cin >> x >> y;
   			trafego[x]++;
   			trafego[y]++;
  		}
  
  		int max = 0;
  		for (int i = 1; i <= a; i++){
   			if (max < trafego[i]) max = trafego[i];
  		}
  
  		cout << "Teste " << ++teste << endl;
 
  		bool primeiro = true;
  		for (int i = 1; i <= a; i++){
   			if (max == trafego[i]){
			    if (primeiro) cout << i;
    			else cout << ' ' << i;
    			primeiro = false;
   			}
  		}		
  
  		cout << endl << endl;
	}

}
