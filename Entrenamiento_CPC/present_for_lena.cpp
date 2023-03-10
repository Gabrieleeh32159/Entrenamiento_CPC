#include <iostream>
#include <vector>
#include <string>
#define LL long long

using namespace std;

int main() {
    int n; cin >> n;
    int number = 0;
    for (int fila = 0; fila < 2*n + 1; fila++) {
        for (int col = 0; col < 2*n + 1; col++) {
            if (col < n - fila || fila > n + col) {
                cout << "  ";
            } else if(fila + col > 3*n ||  col > n + fila) {
                continue;
            }else {
                if (col < n) {
                    cout << number++ << ' ';
                } 
                else if (col == n) {
                    cout << number;
                    if (number != 0) {
                        cout <<' ';
                    }
                }
                 else {
                    cout << --number;
                    if (number != 0) {
                        cout << ' ';
                    };
                }
            }
        }
        cout << endl;
    }
    return 0;
}