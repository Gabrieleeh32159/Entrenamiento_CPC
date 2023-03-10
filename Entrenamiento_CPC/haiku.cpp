#include <iostream>
#include <vector>
#include <string>

using namespace std;

int nvs(string s) {
    int n = 0;
    for (auto l: s) {
        l = tolower(l);
        if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u') {
            n++;
        }
    }
    return n;
}

int main() {
    string f1, f2, f3;
    getline(cin, f1);
    getline(cin, f2);
    getline(cin, f3);

    if (nvs(f1) == 5 && nvs(f2) == 7 && nvs(f3) == 5) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}