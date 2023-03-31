#include <iostream>
#include <string>
#include <vector>
#define LL long long
#define L long

using namespace std;

int main() {
    int t; cin >> t;
    L int a, b, c, d, x, y;

    while (t--) {
        cin >> a >> b >> c >> d;
        x = c - a; y = d - b;
        if (y >= x && y >= 0) {
            cout << y + y - x << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}