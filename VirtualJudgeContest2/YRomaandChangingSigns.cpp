// time-limit: 2000
// problem-url: https://vjudge.net/contest/553531#problem/Y
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
    int n, k;
    cin >> n >> k;
    ll sum = 0;
    int a;
    while (n--) {
        cin >> a;
        if (k != 0) {
            sum -= a;
            k--;
        } else {
            sum += a;
        }
    }
    cout << sum << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}