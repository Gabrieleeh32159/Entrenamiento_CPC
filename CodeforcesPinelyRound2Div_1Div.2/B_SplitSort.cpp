// time-limit: 1000
// problem-url: https://codeforces.com/contest/1863/problem/B
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
    map<int, int> index;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        index[a] = i;
    }
    int ans = 0;
    for (int i = 2; i < n+1; i++) {
        if (index[i] < index[i-1]) ans++;
    }
    cout << ans << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve(); 
}