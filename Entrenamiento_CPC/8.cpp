#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, inicio = 0;
        string str;
        cin >> n;
        cin >> str;
        for(int i = 0; i < n - 1; i++){
            if (str[i] != str[i+1]){
                inicio = i + 1;
                break;
            }
        }
        if (inicio){
            cout << inicio << " " << inicio +1 << endl;
        }
        else{
            cout << -1 << " " << -1 << endl;
        }
    }
    return 0;
}