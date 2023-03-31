#include <iostream>
#include <vector>
#include <string>
#include <set>
#define LL long long

using namespace std;

string set2string(set<char> result) {
    string r = "";
    for (auto l: result) {
        r += l;
    }
    return r;
}

int main() {
    int n, len; cin >> n;
    string word, w2;
    while (n--) {
        w2 = "";
        cin >> len >> word;
        for (auto l: word) {
            l = tolower(l);
            if (w2 == "") {
                if (l != 'm') {
                    break;
                } else {
                    w2 = "m";
                }
            } else if (w2 == "m") {
                if (l != 'e') {
                    if (l != 'm') {
                        break;
                    }
                } else {
                    w2 = "me";
                }
            } else if (w2 == "me") {
                if (l != 'o') {
                    if (l != 'e') {
                        break;
                    }
                } else {
                    w2 = "meo";
                }
            } else if (w2 == "meo") {
                if (l != 'w') {
                    if (l != 'o') {
                        break;
                    }
                } else {
                    w2 = "meow";
                }
            } else if (w2 == "meow") {
                if (l != 'w') {
                    w2 = "break";
                }
            }
        }
        if (w2 != "meow") {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}