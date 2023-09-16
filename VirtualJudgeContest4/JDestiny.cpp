// time-limit: 2500
// problem-url: https://vjudge.net/contest/580865#problem/J
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
 
int querie(vector<int> a, int n, int l, int r, int k) {
    
}

void solve(){
    int n, q; cin >> n >> q;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    while(q--) {
        int l, r, k;
        cin >> l >> r >> k;
        cout << querie(a, n, l, r, k) << endl;
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}