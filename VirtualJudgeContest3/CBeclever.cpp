// time-limit: 1000
// problem-url: https://vjudge.net/contest/554861#problem/C
#include <algorithm>
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
  int n, q; cin >> n >> q;
  vector<l> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  
  for (int i = 1; i < n; i ++) {
    a[i] += a[i-1];
  }
  
  //print(a);

  ll x;
  while (q--) {
    cin >> x;
    cout << upper_bound(a.begin(), a.end(), x) - a.begin() << endl;
  }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}
