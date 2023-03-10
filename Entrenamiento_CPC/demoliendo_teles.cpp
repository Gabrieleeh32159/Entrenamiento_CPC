#include <iostream>
#include <vector>
#include <string>
#define LL long long

using namespace std;

int main() {
    int n, should_be = 1, enter; cin >> n;
    bool found = false;
    for (int i = 0; i < n; i++) {
        cin >> enter;
        if (enter == should_be) {
            should_be++;
            found = true;
        }
    }
    if (found) {
        cout << n - should_be + 1 << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}