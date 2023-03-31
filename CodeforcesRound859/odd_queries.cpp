#include <iostream>
#include <vector>
#include <string>
#include <set>
#define LL long long
#define L long

using namespace std;

int main() {
    LL int t, n, l, r, q; cin >> t;
    L int k;
    LL int* numbers;
    LL int suma;
    L int ai;
    while (t--) {
        suma = 0;
        cin >> n >> q;
        numbers = new LL int[n+1];
        for (int i = 1; i < n+1; i++) {
            cin >> numbers[i];
            numbers[i] += numbers[i-1];
        }
        while (q--) {
            cin >> l >> r >> k;
            if ((numbers[l-1] + numbers[n] - numbers[r] + k*(r-l + 1))%2 == 0) {
                cout  << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}