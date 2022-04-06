#include <iostream>

using namespace std;

bool is_lucky(int n){
    do{
        if (n%10 != 4 && n%10 != 7){
            return false;
        }
        n /= 10;
    }while(n > 0);
    return true;
}

bool is_almost_lucky(int n){
    for(int i = 1; i*i <= n; i++){
        if (n%i == 0){
            if (is_lucky(i) or is_lucky(n/i)){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    if (is_almost_lucky(n)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}