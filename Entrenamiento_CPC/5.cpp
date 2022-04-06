#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if (n%2 == 0){
            for(int i = 1; i <= n; i++){
                if(i%2 == 0){
                    cout << i - 1;
                }
                else{
                    cout << i + 1;
                }
                cout << " ";
            }
        }
        else{
            for(int i = 1; i <= n; i++){
                if(i == 1){
                    cout << i + 2;
                }
                else if (i == 2){
                    cout << i - 1;
                }
                else{
                    if(i%2 == 0){
                        cout << i + 1;
                    }
                    else{
                        cout << i - 1;
                    }
                }
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}