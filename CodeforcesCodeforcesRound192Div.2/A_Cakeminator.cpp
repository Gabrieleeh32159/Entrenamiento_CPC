// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/330/A
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
    int r, c, a1, a2; cin >> r >> c;
    a1 = r; a2 = c;
    unordered_map<int, bool> mpr, mpc;
    char s;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++) {
            cin >> s;
            if (s == 'S') {
                mpr[i] = true;
                mpc[j] = true;
            }
        }
    }

    int result = (r - mpr.size()) * c + (c - mpc.size()) * r - (r - mpr.size()) * (c - mpc.size());
    cout << result << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}