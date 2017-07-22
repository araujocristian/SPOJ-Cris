#include <iostream>

using namespace std;

int onde[110];

int main(){
	int n, m, p, d, x;
	
	
	cin >> n >> m;
	
	for(int i=1; i<=m; i++){
		cin >> p >> d;
		onde[p]=1;
		x=p;
		while(x<=n){
			onde[x]=1;
			x+=d;
		}
		x=p;
		while(x>=1){
			 onde[x]=1;
			 x-=d;
		}
	}
	
	for(int i=1; i<=n; i++){
		cout<<onde[i]<<endl;
	}
	
}
