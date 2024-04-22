// time-limit: 1000
// problem-url: https://codeforces.com/contest/1957/problem/A
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
    int n, a; cin >> n;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (mp[a]) mp[a]++;
        else mp[a] = 1;
    }

    int res = 0, div;
    for (const auto& dt : mp) {
        div = dt.second / 3;
        res += div;
    }
    cout << res << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve(); 
}