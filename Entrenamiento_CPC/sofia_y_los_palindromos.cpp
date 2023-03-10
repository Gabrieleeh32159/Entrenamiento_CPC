#include <iostream>
#include <vector>
#include <string>
#define LL long long

using namespace std;

int main() {
    string n; cin >> n;
    string result = "";
    for (auto l: n) {
        result += l;
    }
    for (int i = n.size() - 1; i >= 0; i--) {
        result += n[i];
    }
    cout << result << endl;
    return 0;
}