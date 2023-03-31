#include <iostream>
#include <vector>
#include <string>
#define LL long long

using namespace std;

int main() {
    string word;
    int n; cin >> n;
    while (n--) {
        cin >> word;
        if (word.size() > 10) {
            cout << word[0] + to_string(word.size() - 2) + word[word.size()-1] << endl;
        } else {
            cout << word << endl;
        }
    }
    return 0;
}