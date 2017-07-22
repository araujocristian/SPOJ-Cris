#include <iostream>
#include <math.h>
using namespace std;

int main (){
	
	int N, pos=0; 
	double v, maior=0.0, D, C;
	cin>>N;
	
	for(int i=0; i<N; i++){
		cin >> D >> C;
		v = C*log(D);
		
		
		if(v>maior){
			maior=v;
			pos=i;
		}
	}
	
	cout<<pos<<endl;
}

