#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    for(int _ = 0; _ < x; _++){
        int p, a = 0, b = 0;
        bool terminar = false;
        cin >> p;
        for(int j = 3; j <= p; j++){
            for(int i = 2; i < j; i++){
                if(p%j == p%i){
                    a = i;
                    b = j;
                    terminar = true;
                    break;
                }
            }
            if(terminar){break;}
        }
        cout << a << " " << b << endl;
    }
    return 0;
}