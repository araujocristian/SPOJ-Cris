#include <iostream>
#include <string>

using namespace std;

int main(){
	int vet[3]={};
	int n, m, a, k;
	
	string s;
	
	cin >> n >> m >> a >> k;
	
	
	cin >> s;
	
	for (int i=0; i<s.length(); i++){
		if(s[i]>='a' && s[i]<='z') vet[0]++;
		else if(s[i]>='A' && s[i]<='Z') vet[1]++;
		else if(s[i]>='0' && s[i]<='9') vet[2]++;		
	}
	
	if(s.length()>=n){
		if(vet[0]>=m){
			if(vet[1]>=a){
				if(vet[2]>=k){
					cout << "Ok =/" << endl;
				}else cout << "Ufa :)" << endl;
			}else cout << "Ufa :)" << endl;
		}else cout << "Ufa :)" << endl;
	}else cout << "Ufa :)" << endl;

}
