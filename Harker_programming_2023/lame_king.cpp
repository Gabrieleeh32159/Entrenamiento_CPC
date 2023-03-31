#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
    int t, x, y; cin >> t;
    while(t--) {
        cin >> x >> y;
        if (abs(abs(x) - abs(y)) <= 1 )  {
            cout << abs(x) + abs(y) << endl;
        } else if (abs(x) - abs(y) > 1) {
            cout << abs(y) * 2 + abs(abs(x) - abs(y)) * 2 - 1  << endl;
        } else {
            cout << abs(x) * 2 + abs(abs(y) - abs(x)) * 2 - 1  << endl;
        }
    }
    
    return 0;
}