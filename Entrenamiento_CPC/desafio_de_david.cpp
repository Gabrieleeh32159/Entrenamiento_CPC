#include <iostream>
#include <vector>
#include <string>
#define LL long long

using namespace std;

int main() {
    LL int n;
    cin >> n;
    LL int sum = 0, num;
    for (int i = 1; i < n; i++) {
        cin >> num;
        sum += num;
    }
    cout << n*(n+1)/2 - sum << endl;
    return 0;
}