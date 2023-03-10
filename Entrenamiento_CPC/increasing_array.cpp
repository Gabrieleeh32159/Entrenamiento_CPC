#include <iostream>

using namespace std;

int main() {
    long long int n; cin >> n;
    long long int max, ans=0, in; cin >> max;
    while(--n) {
        cin >> in;
        if (in > max) {
            max = in;
        } else {
            ans += max - in;
        }
    }
    cout << ans << endl;
    return 0;
}