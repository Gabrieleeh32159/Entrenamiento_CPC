#include <iostream>
#include <string>
#include <math.h>
#define LL long long

using namespace std;

void tominus(string &s){
    for (char & i : s){
        i = tolower(i);
    }
}

void tomayus(string &s){
    for (char & i : s){
        i = toupper(i);
    }
}

int main(){
    int t = 1;
    //cin >> t;
    while(t--){
        string s;
        int mayus = 0, minus = 0;
        cin >> s;
        for (char i : s){
            if (i >= 'a' && i <= 'z'){
                minus++;
            }
            else if (i >= 'A' && i <= 'Z'){
                mayus++;
            }
        }
        if (minus >= mayus){
            tominus(s);
        }
        else{
            tomayus(s);
        }
        cout << s << endl;
    }
    return 0;
}