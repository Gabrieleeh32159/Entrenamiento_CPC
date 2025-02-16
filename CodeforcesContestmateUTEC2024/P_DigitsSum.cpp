#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n; cin >> n;
    if (n <= 8) {
        cout << 0 << endl;
        return;
    } 

    cout << ll((n + 1) / 10) << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve(); 
}