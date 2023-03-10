#include <iostream>
#include <vector>
#include <string>
#define LL long long

using namespace std;

int main() {
    LL int n;
    cin >> n;

    LL int x, y, max;
    while (n--) {
        cin >> x >> y;
        if (x == y) {
            cout << x*(x - 1) + 1 << endl;
        } else if (x < y) {
            if (y % 2 == 1) {
                cout << y*y - x + 1 << endl;
            } else {
                cout << (y - 1)*(y - 1) + x << endl;
            }
        } else  if (y < x) {
            if (x % 2 == 1) {
                cout << (x - 1)*(x - 1) + y << endl;
            } else {
                cout << x*x - y + 1 << endl;
            }
        }
    }
    return 0;
}