#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define LL long long
#define L long

using namespace std;

int n_zeros(vector<int> a) {
    int r = 0;
    for (auto n: a) {
        if (n==0) {
            r++;
        }
    }
    return r;
}

int main() {
    int t, n, zeros, ai, min1, min2, max; cin >> t;
    vector<int> a;

    while (t--) {
        a = {};
        cin >> n;
        while(n--) {
            cin >> ai;
            a.push_back(ai);
        }
        zeros = n_zeros(a);
        if (zeros == 0 || zeros <= a.size() - zeros + 1) {
            cout << 0 << endl;
        } else {
            max = *max_element(a.begin(), a.end());
            if (max == 0) {
                cout << 1 << endl;
            } else if (max == 1) {
                cout << 2 << endl;
            } else {
                cout << 1 << endl;
            }
        }
        
    }
    return 0;
}