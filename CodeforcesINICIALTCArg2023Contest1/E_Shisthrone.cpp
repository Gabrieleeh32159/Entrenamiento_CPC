// time-limit: 2000
// problem-url: https://codeforces.com/group/hzSLIARNBN/contest/464699/problem/E
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
    int n, m;
    cin >> n >> m;
    vector<long long int> suciedad(n);
    long long int s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        suciedad[i] = s; 
    }
    sort(suciedad.begin(), suciedad.end());
    cout << suciedad[m-1] << "\n";
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}