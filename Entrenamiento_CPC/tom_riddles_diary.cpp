#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool wordinvector(vector<string> v, string p) {
    for(auto w:v){
        if (w == p) {
            return true;
        }
    }
    return false;
}

int main() {
    int n; cin >> n;
    vector<string> palabras;
    string palabra;
    for (int i =0 ; i < n; i++) {
        cin >> palabra;
        if (wordinvector(palabras, palabra)) {
            cout << "YES" << endl;

        } else {
            cout << "NO" << endl;
            palabras.push_back(palabra);
        }
    }
    return 0;
}