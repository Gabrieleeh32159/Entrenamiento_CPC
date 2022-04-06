#include <iostream>
#include <string>
#include <math.h>
#define LL long long

using namespace std;

int main(){
    int t = 1;
    //cin >> t;
    while(t--){
        int n;
        long sum = 0;
        cin >> n;
        for (int i = 2; i < n; i++){
            sum += i*(i+1);
        }
        cout << sum;
    }
    return 0;
}