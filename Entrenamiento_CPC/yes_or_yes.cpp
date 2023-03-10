#include <iostream>
#include <vector>
#include <string>
#define LL long long

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s; cin >> s;
        string f =  "";
        for (auto l: s){
            f+= tolower(l);
        }
        if (f == "yes") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}