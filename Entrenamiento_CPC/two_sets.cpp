#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    long int n; cin >> n;

    if (n*(n+1) % 4 == 0) {
        cout << "YES" << endl;
        vector<long int> a, b;
        long int sum =  0, value = n*(n+1)/4;
        n++;
        while (--n) {
            if (sum + n <= value) {
                sum += n;
                a.push_back(n);
            } else {
                b.push_back(n);
            }
        }
        cout << a.size() << endl;
        for(auto n: a) {
            cout << n << ' ';
        } cout << endl;
        cout << b.size() << endl;
        for(auto n: b) {
            cout << n << ' ';
        } cout << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}