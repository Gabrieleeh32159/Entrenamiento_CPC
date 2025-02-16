// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc373/tasks/abc373_c
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
    int n; cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int maxa = a[0]; int maxb = b[0];

    for (int i = 0; i < n - 1; i++) {
        maxa = max(maxa, a[i]);
        maxb = max(maxb, b[i]);
    }

    cout << maxa << endl;
    cout << maxb << endl;
    cout << maxa + maxb << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}