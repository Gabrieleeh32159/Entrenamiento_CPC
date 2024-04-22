// time-limit: 1000
// problem-url: https://codeforces.com/contest/1873/problem/C
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long l;
 
template<typename T>
void print(vector<T> &vec){
    for(auto &x:vec) cout<<x<<' ';
    cout<<'\n';
}
template<typename T>
void print(vector<pair<T,T>> &vec){
    for(auto &x:vec) cout<<x.first<<' '<<x.second<<'\n';
}
void barra(){ cout<<"----------------------"<<'\n'; }
 

int get_points(int i, int j) {
    if (i == 0 || j == 0 || i == 9 || j == 9) {
        return 1;
    } else if (i == 1 || i == 8 || j == 1 || j == 8) {
        return 2;
    } else if (i == 2 || i == 7 || j == 2 || j == 7) {
        return 3;
    } else if (i == 3 || i == 6 || j == 3 || j == 6) {
        return 4;
    } else {
        return 5;
    }
}

 
void solve(){
    vector<string> tablero(10);

    for (int i = 0; i < 10; i++) {
        cin >> tablero[i];
    }

    long int acumulated = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (tablero[i][j] == 'X') {
                acumulated += get_points(i, j);
            }
        }
    }
    cout << acumulated << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve(); 
}