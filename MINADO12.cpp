#include <iostream>

using namespace std;

int main(){
	
	int N, c;
	
	cin >>N;
	int tabuleiro[51], result[51]={};
	
	
	for(int i=0; i<N; i++){
		cin >> c;
	
		tabuleiro[i]=c;		
		
	}
	
	for(int i=0; i<N; i++){
		if(tabuleiro[i]==1){
			result[i]++;
			result[i-1]++;
			result[i+1]++;
		}
	}
		
	for(int i=0; i<N; i++) cout<<result[i]<<endl;
	
	
}
