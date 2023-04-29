// time-limit: 1000
// problem-url: https://codeforces.com/group/Wr3hh4fy7t/contest/440894/problem/E
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
    vector<string> walls(n); 
    int k;
    cin >> k; 
    for (int i = 0; i < n; i++) {
        cin >> walls[i];
    }
    for (auto it : walls) {
        cout << it << endl;
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}