#include <iostream>
#include <vector>
#include <string>
#define LL long long

using namespace std;

int main() {
    int n, r = 0; cin >> n;
    bool a, b, c;
    while (n--) {
        cin >> a >> b >> c;
        if (int(a) + int(b) + int(c) >= 2) {
            r++;
        }
    }
    cout << r << endl;
    return 0;
}