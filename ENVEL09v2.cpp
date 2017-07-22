#include <iostream>

using namespace std;
#define MAX 1010
#define MAX_VALUE 1<<30

int balas[MAX];

int main(){
	int n, m, tipo, min = MAX_VALUE;
 
	cin >> n >> m;
 
 	for (int i = 0; i <= m; i++) balas[i] = 0;
 
 	for (int i = 0; i < n; i++) {
  		cin >> tipo;
 		balas[tipo]++;
 	}
 
 	for (int i = 1; i <= m; i++) {
  		if (balas[i] < min) min = balas[i];
 	}
 
 	cout << min << endl;
 
 	return 0;
}

