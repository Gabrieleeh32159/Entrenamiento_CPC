#include <iostream>
#include <string>
#include <math.h>
#define LL long long

using namespace std;

int abs(int a, int b){
    if (b < a){
        return a - b;
    }
    return b - a;
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        int xa, ya, xb, yb, xf, yf;
        bool verif;
        cin >> xa >> ya;
        cin >> xb >> yb;
        cin >> xf >> yf;
        verif = ((xa == xb && xa == xf && ((ya - yf)/abs(ya, yf) == (yf - yb)/abs(yf, yb) )) || (ya == yb && ya == yf) && ((xa - xf)/abs(xa, xf) == (xf - xb)/abs(xf, xb)));
        cout << abs(xb, xa) + abs(yb, ya) + 2*verif;
        cout << endl;
    }
    return 0;
}