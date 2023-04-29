#include <iostream>
#include <string>
using namespace std;

int main() {
    string s; cin >> s;
    bool ab = false, ba = false;
    for (auto i = 0; i < s.size() - 1; i++) {
        if(!ab && s[i] == 'A' && s[i+1] == 'B') {
            ab = true; i++;
        } else if(!ba && s[i] == 'B' && s[i+1] == 'A') {
            ba = true; i++;
        }
    }

    if (ab && ba) {
        cout << "YES" << endl;
        return 0;
    } else {
        ab = false, ba = false;
        for (auto i = 0; i < s.size() - 1; i++) {
            if(!ba && s[i] == 'B' && s[i+1] == 'A') {
                ba = true; i++;
            } else if(!ab && s[i] == 'A' && s[i+1] == 'B') {
                ab = true; i++;
            }
        }

        if (ab && ba) {
            cout << "YES" << endl;
            return 0;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}