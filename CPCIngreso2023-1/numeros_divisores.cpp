#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
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
    ll n, k;
    cin >> n >> k;
    set<ll> divisores = {1, n};
    for (ll i =2; i <= sqrt(n); i++) {
        if (n%i == 0) {
            divisores.insert(i);
            divisores.insert(n/i);
        }
    }

    if (divisores.size() < k) {
        cout << -1 << endl;
    } else {
        cout << *next(begin(divisores), k-1) << endl;
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}