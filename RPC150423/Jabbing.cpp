#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n, e, r; cin >> n >> e;
    
    long long int suma = 0;

    for (int i = 0; i < n; i++) {
        cin >> r;
        suma += floor(2*M_PI*r/e);
    }

    cout << suma << endl;

    return 0;
}