#include <iostream>
using namespace std;

bool verificar(string query){
    int len = query.size();
    for(int n=0; n < len/2; n++){
        if (query[n] != query[(len/2)+n]){
            return false;
        }
    }
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
        string query; cin >> query;
        int len = query.size();
        if (len%2 == 0){
            if (verificar(query)){
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}