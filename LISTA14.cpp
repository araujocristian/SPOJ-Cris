#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    char c;
    string pal;
    int nvpal=0, t=0;

    cin >> c;
    while (cin >> pal) {
        nvpal++;
        for (int i = 0; i < pal.size(); i++) {
            if (pal[i] == c) {
                t++;
                break;
            }
        }
    }
    
    cout << fixed << setprecision(1) << 100*((double)t)/nvpal << endl;
}
