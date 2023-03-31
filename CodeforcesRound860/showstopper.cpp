#include <iostream>
#include <vector>
#include <string>
#include <set>
#define LL long long

using namespace std;

int main() {
    int t, n, temp; cin >> t;
    bool result;
    int* a;
    int* b;
    while (t--) {
        cin >> n;
        a = new int[n+1];
        for(int i = 1; i < n+1; i++) {
            cin >> a[i];
        }
        b = new int[n+1];
        for(int i = 1; i < n+1; i++) {
            cin >> b[i];
        }
        result = true;
        for (int i = 1; i < n+1; i++) {
            if ((a[i] > a[n] && a[i] > b[n]) || (b[i] > b[n] && b[i] > a[n]) || (a[i] > a[n] && b[i] > a[n]) || (b[i] > b[n] && a[i] > b[n])) {
                result = false;
                break;
            }
            if (a[i] > a[n] || b[i] > b[n]) {
                temp = a[i];
                a[i] = b[i];
                b[i] = temp;
            }
        }

        if (result) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
    return 0;
}