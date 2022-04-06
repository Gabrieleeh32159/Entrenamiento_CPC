#include <iostream>
#include <string>
#include <math.h>
#define LL long long

using namespace std;

int main(){
    LL Nmax;
    cin >> Nmax;
    LL criba[Nmax-1];
    //Marcar todos los elementos con -1
    for(LL i = 2; i < Nmax; i++){
        criba[i] = -1;
    }
    //marcar los múltiplos de 2 con 2
    for(LL i = 4; i < Nmax; i += 2){
        criba[i] = 2;
    }
    //Marcar el resto con sus respectivos máximos divisores primos
    for (LL i = 3; i*i < Nmax; i+=2){
        if(criba[i] == -1){
            for(LL j = i*i; j < Nmax; j += 2*i ){
                if(criba[j] == -1){
                    criba[j] = i;
                }
            }
        }
    }
    int n;
    cin >> n;
    if (criba[n] == -1){
        cout << "Primo";
    }
    else{
        cout << criba[n];
    }
    return 0;
}
