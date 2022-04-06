#include <iostream>
#include <string>
#include <math.h>
#define LL long long

using namespace std;

string alfabeto = "abcdefghijklmnopqrstuvwxyz";

void last(string &str){
    str.resize(str.size() - 1);
}

void first(string &str){
    str = str.substr(1, str.size()-1);
}

bool alphabetical(string str){
    int n = str.size() - 1;
    while(!str.empty()){
        if (str[0] == alfabeto[n]){
            first(str);
        }
        else if (str[str.size() - 1] == alfabeto[n]){
            last(str);
        }
        else{
            return false;
        }
        n--;
    }
    return true;
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        if (alphabetical(str)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}