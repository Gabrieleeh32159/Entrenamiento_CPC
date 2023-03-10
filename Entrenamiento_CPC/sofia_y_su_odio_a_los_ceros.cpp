#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#define LL long long

using namespace std;

LL int remove_zeros(LL int a) {
    int count = 0;
    LL int result = 0;
    while(a) {
        short int ld = a - (a/10)*10;
        if (ld != 0) {
            result += ld * pow(10, count);
            count++;
        }
        a = a/10;
    }
    return result;
}

int main() {
    LL int a, b;
    cin >> a >> b;
    if (remove_zeros(a) + remove_zeros(b) == remove_zeros(a+b)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}