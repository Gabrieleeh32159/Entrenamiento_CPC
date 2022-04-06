#include <iostream>
#include <string>
#include <math.h>

#define LL long long

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        LL l, r;
        cin >> l >> r;
        if (r/2 >= l){
            cout << (r + (1*(r%2 != 0)))/2 -1 << endl;
        }
        else{
            cout << r - l << endl;
        }
    }
    return 0;
}