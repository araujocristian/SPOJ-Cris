#include <iostream>

using namespace std;

int main(){
	int contf=0, n, m, s, x, y,i,j;
	char let, mat[100][100];

	cin >> n >> m >> s;
	while(n!=0 && m!=0 && s!=0){

		for(i=0; i<n; i++){
			for(j=0; j<m; j++){
				cin >> mat[i][j];

				if(mat[i][j] == 'N' || mat[i][j] == 'S' || mat[i][j] == 'L' || mat[i][j] == 'O'){
					x=i;
					y=j;
				}
			}
		}

		for(int c=0; c<s; c++){
			cin >> let;

			switch (let){

				case 'D':
					if(mat[x][y] == 'N'){
						mat[x][y] = 'L';
					//	cout << "hei1"<< endl;
						break;
					}
					if(mat[x][y] == 'L' ){
						mat[x][y] = 'S';
						//cout << "hei2"<< endl;
						break;
					}
					if(mat[x][y] == 'S' ){
						mat[x][y] = 'O';
						//cout << "hei3"<< endl;
						break;
					}
					if(mat[x][y] == 'O' ){
						mat[x][y] = 'N';
						//cout << "hei4"<< endl;
						break;
					}
					break;


				case 'E':
					if(mat[x][y] == 'N' ){
						mat[x][y] = 'O';
						//cout << "hei5"<< endl;
						break;
					}
					if(mat[x][y] == 'L' ){
						mat[x][y] = 'N';
						//cout << "hei6"<< endl;
						break;
					}
					if(mat[x][y] == 'S' ){
						mat[x][y] = 'L';
					//	cout << "hei7"<< endl;
						break;
					}
					if(mat[x][y] == 'O' ){
						mat[x][y] = 'S';
					//	cout << "hei8"<< endl;
						break;
					}
					break;

				case 'F':
					//cout << "ok"<< x << y <<"  " << contf << endl;
					if(mat[x][y] == 'N' ){
						if(mat[x-1][y] == '#' || (x-1) < 0){
						//	cout << "hei9"<< endl;
							break;
						}
						else if(mat[x-1][y] == '*'){
						//	cout << "hei11"<< endl;
							x = x-1;
							mat[x][y] = 'N';
							mat[x+1][y] = '.';
							contf++;
							break;
						}
						else if(mat[x-1][y] == '.'){
						//	cout << "hei12"<< endl;
							x = x-1;
							mat[x][y] = 'N';
							mat[x+1][y] = '.';
							break;
						}
						break;
					}

					if(mat[x][y] == 'L' ){
						//cout << "to aqui" << x << y << endl;
						if(mat[x][y+1] == '#' || (y+1) >= m ){
						//	cout << "hei13" << endl;
							break;

						}
						//cout << "to aquiaaa" <<x<<y<<endl;
						if(mat[x][y+1] == '*'){
						//	cout << "hei14"<< endl;
							y = y+1;
							mat[x][y] = 'L';
							mat[x][y-1] = '.';
							contf++;
							break;
						}
						else if(mat[x][y+1] == '.'){
						//	cout << "hei15"<< x << y << endl;
							y = y+1;
							mat[x][y] = 'L';
							mat[x][y-1] = '.';
						//	cout << "hei15bbb"<< x << y << endl;
							break;

						}
						break;
						//cout << "hei15aA"<< x << y << endl;

					}

					if(mat[x][y] == 'S' ){
						if(mat[x+1][y] == '#' || (x+1) >= n){
					//		cout << "hei16"<< endl;
							break;
						}
						else if(mat[x+1][y] == '*'){
						//	cout << "hei17"<< endl;
							x = x+1;
							mat[x][y] = 'S';
							mat[x-1][y] = '.';
							contf++;
							break;
						}
						else if(mat[x+1][y] == '.'){
						//	cout << "hei18"<< endl;
							x = x+1;
							mat[x][y] = 'S';
							mat[x-1][y] = '.';
							break;
						}
						break;
					}

					if(mat[x][y] == 'O' ){
						//cout <<mat[x][y-1] << endl;
						if(mat[x][y-1] == '#' || (y-1) < 0){
						//	cout << "hei19"<< endl;
							break;
						}
						else if(mat[x][y-1] == '*'){
							//cout << "hei20"<< x <<  y <<endl;
							y = y-1;
							mat[x][y] = 'O';
							mat[x][y+1] = '.';
							contf++;
							break;
						}
						else if(mat[x][y-1] == '.'){
						//	cout << "hei21"<< endl;
							y = y - 1;
							mat[x][y] = 'O';
							mat[x][y+1] = '.';
							break;
						}
                        break;

					}
					break;


			}


		}

		cout << contf << endl;
		contf = 0;
		for(i=0; i<n; i++){
			for(j=0; j<m; j++){
				mat[i][j]=0;
			}
		}
		cin >> n >> m >> s;
	}
}
