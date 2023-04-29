#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main() {
    long int n, k;
 
    cin >> n >> k;
 
    //para nayeon
    int nay = 1;
    while(nay*k < n*2) {
        nay++;
    }
 
    //para Chaeyoung
    int cha = 1;
    while(cha*k < n*5) {
        cha++;
    }
 
    //para Momo
    int momo = 1;
    while(momo*k < n*8) {
        momo++;
    }
 
    cout << momo + cha + nay << endl;
 
    return 0;
}