#include <iostream>
#include <vector>
#include <string>
#include <set>
#define LL long long

using namespace std;

string replace(string word, char l, int n) {
    string result = "";
    for (auto a: word) {
        if (a == l) {
            result += to_string(n);
        } else {
            result += a;
        }
    }
    return result;
}

int main() {
    int t, n; cin >> t;
    string word;
    bool condition;
    while (t--) {
        condition = true;
        cin >> n;
        cin >> word;
        for (int i = 0; i < n; i++) {
            if (word[i] != char(i%2)) {
                if (string(1, word[i]) == to_string((i+1)%2)) {
                    condition = false;
                    break;
                } else {
                    word = replace(word, word[i], i%2);
                }
            }
        }
        if (condition) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }   
    return 0;
}