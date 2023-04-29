// time-limit: 2000
// problem-url: https://vjudge.net/contest/554861#problem/A
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
  int n, m; cin >> n >> m;
  vector<l> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  l b;
  for (int i = 0; i < m; i++) {
    cin >> b;
    cout << upper_bound(a.begin(), a.end(), b) - a.begin() << " ";
  }
  
    cout << endl;


}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}
