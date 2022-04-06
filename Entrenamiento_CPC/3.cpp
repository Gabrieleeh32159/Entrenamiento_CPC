#include <iostream>
#include <math.h>

using namespace std;

bool es_primo(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if (n%i == 0){
            return false;
        }
    }
    return true;
}

bool casi_primo(int n){
    int cantidad = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if (n%i == 0) {
            cantidad += (es_primo(i));
            if (i != n/i){
                cantidad += (es_primo(n/i));
            }
        }
    }
    if(cantidad == 2){
        return true;
    }
    else {
        return false;
    }
}

int main(){
    int n, cantidad = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(casi_primo(i)){
            cantidad++;
        }
    }
    cout << cantidad;
    return 0;
}