#include <iostream>

using namespace std;

int a[100001];

int main(){
	int n, acc1=0, acc2=0;
	
	cin >> n;
	
	for (int i=1; i<=n; i++){
		cin >> a[i];
		acc1 += a[i];
	}
	
	for(int i=1; i<=n; i++){
		acc2 += a[i];
		
		if(acc2 == acc1/2) cout << i << endl;
		
	}
}
