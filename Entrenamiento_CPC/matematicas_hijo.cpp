#include <iostream>
#include <vector>
#include <string>
#define LL long long

using namespace std;

int suma_cifras(int n) {
    int r = 0;
    while (n) {
        r += n - (n/10)*10;
        n = n/10;
    }
    return r;
}

int main() {
    int n, menor = 1; cin >> n;
    for (int i = 1; i < n/2 + 1; i++) {
        if (suma_cifras(i) + suma_cifras(n - i) < suma_cifras(menor) + suma_cifras(n - menor)) {
            menor = i;
        }
    }
    cout << suma_cifras(menor) + suma_cifras(n - menor) << endl;
    return 0;
}