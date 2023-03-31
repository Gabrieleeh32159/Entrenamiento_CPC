#include <iostream>
#include <vector>
#include <string>
#include <set>
#define LL long long

using namespace std;

bool rp(string word) {
    if (word.size()%2 == 0) {
        for (int i = 0; i < word.size()/2; i++) {
            if (word[i] != word[word.size()-i-1]) {
                return false;
            }
        }
    } else {
        for (int i = 0; i < (word.size() + 1)/2; i++) {
            if (word[i] != word[word.size()-i-1]) {
                return false;
            }
        }
    }
    return true;
}

bool palindrome(string word) {
    return word.substr(0, (word.size()-1)/2) == word.substr((word.size()+1)/2, (word.size()-1)/2);
}

int main() {
    string word; cin >> word;
    if (palindrome(word) && rp(word.substr(0, (word.size()-1)/2))) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}