#include <iostream>

using namespace std;

int main(){
	int x=4, y=3, nt, ns=0, t;
  	cin>>nt;
  	
  for(int i=0; i<nt; i++){
		cin>>t;
 
        if(t==1){
			x++; y=y+2;
		}
		
        if(t==2){
			x=x+2; y++;
		}
		
        if(t==3){
			x=x+2; y--;
		}
		
        if(t==4){
			x++; y=y-2;
		}
        
        if(t==5){
			x--; y=y-2;
		}
		
        if(t==6){
			x=x-2; y--;
		}
		
        if(t==7){
			x=x-2; y++;
		}
			
        if(t==8){
			x--; y=y+2;
		}
		
        ns++;
 
        if(x==1 && y==3) i=nt;
        
        if(x==2 && y==3) i=nt;
        
        if(x==2 && y==5) i=nt;
        
        if(x==5 && y==4) i=nt;
        
  }
	cout<<ns<<endl;
}
