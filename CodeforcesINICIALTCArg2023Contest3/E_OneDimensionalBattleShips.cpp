// time-limit: 1000
// problem-url: https://codeforces.com/group/hzSLIARNBN/contest/465345/problem/E
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
 
int ships(int n, int a) {
    return (n+1)/(a+1);
} 

void solve(){
    int n, m, k, a;
    cin >> n >> k >> a;
    cin >> m;
    int move;
    set<int> moves;

    for (int i = 0; i < m; i++) {
        cin >> move;
        moves.insert(move);
    }

    
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}