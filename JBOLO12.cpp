#include <iostream>

using namespace std;

int main(){
	
	int A, B, C, qa, qb, qc;
	
	cin >> A >> B >> C;
	
	qa= A/2;
	qb = B/3;
	qc = C/5;
		
	if ((qa || qb || qc) == 0 ){
		cout << '0' << endl;
			
	}else if ( qa < qb && qa <qc){
		cout << qa << endl;
		
	}else if (qb<qa && qb< qc){
		cout << qb << endl;
	}else {
		cout << qc << endl;
	}
	
}
