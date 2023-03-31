#include <iostream>
#include <vector>
#include <string>
#include <set>
#define LL long long

using namespace std;

int main() {
    int t, pares, impares, n, ai; cin >> t;
    while (t--) {
        pares = 0, impares = 0;
        cin >> n;
        while (n--) {
            cin >> ai;
            if (ai %2 == 0) {
                pares += ai;
            } else {
                impares += ai;
            }
        }
        if (pares > impares) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }   
    return 0;
}