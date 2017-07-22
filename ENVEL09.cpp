#include <iostream>

using namespace std;

int rot[1010];

int main(){
	int n, k, x, menor;
	
	cin >> n >> k;
	for (int i = 0; i <= k; i++) rot[i] = 0;
	
	for (int i=1; i<=n; i++){
		cin >> x;
		rot[x]++;
	}
	
	bool flag = true;
	for (int i=1; i<=k; i++){
		if (flag){
			menor = rot[i];
			flag = false;
		}
		else if(rot[i]<menor) menor = rot[i];	
	}

	cout << menor << endl;
}
