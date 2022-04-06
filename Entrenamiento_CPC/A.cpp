#include <iostream>
#include <string>
#include <math.h>
#define LL long long
#define N6 1000006

using namespace std;

int primes[ N6 ];
void criba(int *prime, int Nmax){
    for(int i = 0; i < Nmax; i++) prime[ i ] = -1;
    for(int i = 4; i < Nmax; i+=2) prime[ i ] = 2;
    for(LL i = 3; i*i < Nmax; i+=2)
        if( prime[ i ] == -1 )
            for(LL j = i*i; j < Nmax; j += 2*i)
                if( prime[ j ] == -1 )
                    prime[ j ] = i;
}

int main(){
    criba(primes, N6);
    int t;
    cin >> t;
    while (t--){
        LL n;
        cin >> n;
        LL a = sqrt(n);
        if (n == 1){
            cout << "NO" << endl;
        }
        else if (a*a == n && primes[a] == -1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}