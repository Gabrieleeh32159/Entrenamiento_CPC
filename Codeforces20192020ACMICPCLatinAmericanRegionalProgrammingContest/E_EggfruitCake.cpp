// time-limit: 1000
// problem-url: https://codeforces.com/gym/102428/problem/E
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
    string b; cin >> b;
    int s; cin >> s;

    string fnl = b.substr(b.size() - s + 1, s - 1) + b[0];
    vector<int> dp(b.size());
    reverse(fnl.begin(), fnl.end());
    int initial = 0;
    for (int i = 0; i < fnl.size(); i++) {
        if (fnl[i] == 'E') {
            initial = fnl.size() - i;
            break;
        }
    }
    dp[0] = initial;
    for (int i = 1; i < b.size(); i++) {
        if (b[i] == 'E') {
            dp[i] = dp[i - 1] + s;
        } else {
            dp[i] = dp[i - 1] + 1;
        }
    }
    print(dp);
    cout << dp[b.size() - 1] << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}