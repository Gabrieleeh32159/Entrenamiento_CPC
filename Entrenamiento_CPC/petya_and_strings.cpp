#include <iostream>
#include <string>

using namespace std;

string lowercase(string s) {
    string re = "";

    for (auto l: s) {
        re += tolower(l);
    }
    return re;
}

int main() {
    string a, b;
    cin >> a >> b;
    a = lowercase(a);
    b = lowercase(b);
    if (a < b) {
        cout << -1 << endl; 
    } else if (b == a) {
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
    }
    return 0;
}