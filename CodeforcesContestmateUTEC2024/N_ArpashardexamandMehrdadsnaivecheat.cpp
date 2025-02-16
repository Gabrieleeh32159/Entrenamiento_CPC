// time-limit: 1000
// problem-url: https://codeforces.com/gym/564917/problem/N
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
 
 
void solve(){
    l n; cin >> n;

    if (n == 0) {
        cout << 1 << endl;
        return;
    }

    int res;
    switch (n%4) {
        case 1:
            res = 8;
            break;
        case 2:
            res = 4;
            break;
        case 3:
            res = 2;
            break;
        case 0:
            res = 6;
            break;
    }
    cout << res << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}