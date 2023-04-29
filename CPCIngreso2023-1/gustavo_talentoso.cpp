#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<string> v;
    string w1, w2, ans;
    cin >> w1 >> w2;
    for(int i = 0; i < w1.size(); i++) {
        ans += to_string(int(w1[i] != w2[i] ));
    }
    cout << ans << endl;
    return 0;
}