#include <iostream>
#include <set>
using namespace std;

int main(){
    int n, a, f; cin >> n; f = n;
    set<int> numbers;
    while (f--) {
        cin >> a;
        numbers.insert(a);
    }

    int i = 0;
    while (numbers.size() > i) {
        if (i != *next(begin(numbers), i)) {
            break;
        }
        i++;
    }

    cout << i << endl;
}