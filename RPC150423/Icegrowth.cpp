#include "bits/stdc++.h"

using namespace std;

template <typename T>
void print(vector<T> v) {
    for (auto it = v.begin(); it != v.end(); it++) cout << *it << " ";
    cout << endl;
}

int main() {
    int n, k, a, b; cin >> n >> k;
    vector<double> iceg(n+1);
    double news;

    iceg[0] = 0;
    for (int i = 1; i < n + 1; i++) {
        cin >> a;
        news = max((double)(iceg[i-1] + a/(-5.0)), 0.0);
        iceg[i] = news;
    }

    sort(iceg.begin(), iceg.end());



    int s = iceg.size();

    for (int i = 0; i < k; i++) {
        cin >> b;
        cout <<iceg.size() - (lower_bound(iceg.begin(), iceg.end(), b) - iceg.begin())<< endl;
    }
    return 0;
}