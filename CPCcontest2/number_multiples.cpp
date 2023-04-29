#include <iostream>
using namespace std;

int main() {
    long double l, r, d; cin >> l >> r >> d;

    int ans = int(r / d) - int ((l-1) /d );

    cout << ans << endl;

    return 0;
}