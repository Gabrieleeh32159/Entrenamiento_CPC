#include <iostream>
#include <vector>
#include <string>
#define LL long long

using namespace std;

int main() {
    int t;
    cin >> t;
    long int n;
    string letras;
    while(t--) {
        cin >> n;
        cin >> letras;
        int pL = -1, pR = -1;
        for(int i = 0; i < n; i++) {
            if(letras[i] == 'R' && pR == -1) {
                pR = i;
            } else if ( letras[i] == 'L' ) {
                pL = i;
            }
        }
        //cout << "Primer R: " << pR << endl << "Ultimo L: " << pL << endl;

        if (pR == -1 || pL == -1) {
            cout << -1 << endl;
        } else if (pR - pL == 1) {
            cout << pR << endl;
        } else if (pL - pR) {
            cout << 0 << endl;
        }
    }
    return 0;
}