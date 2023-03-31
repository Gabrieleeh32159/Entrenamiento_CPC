#include <iostream>
#include <string>
#define LL long long

using namespace std;

bool is_lucky(LL int n) {
    string number = to_string(abs(n));
    for (auto l: number) {
        if (l == '8') {
            return true;
        }
    }
    return false;
}


int main() {
    LL int n; cin >> n;
    int res = 0;
    while (!is_lucky(n) || res == 0) {
        res++;
        n++;
    }
    cout << res << endl;
    return 0;
}