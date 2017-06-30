#include <iostream>
#include <math.h>
#include <stdlib.h> 

using namespace std;

int main(){
	
	unsigned int Xm, Ym, Xr, Yr, acc1, acc2;
	
	cin >> Xm >> Ym >> Xr >> Yr;
	
	acc1 = abs(Xr-Xm);
	acc2 = abs(Yr-Ym);
	
	cout << acc1 + acc2 << endl;
	
}
