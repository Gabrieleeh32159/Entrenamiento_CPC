// time-limit: 2000
// problem-url: https://vjudge.net/contest/656886#problem/B
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long l;

const int MOD = 1000000007;
 
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
    int n;
    cin >> n;

    long long dp[4] = {0, 0, 0, 1};
    
    for (int step = 0; step < n; ++step) {
        long long next_dp[4];
        
        next_dp[0] = (dp[1] + dp[2] + dp[3]) % MOD;
        next_dp[1] = (dp[0] + dp[2] + dp[3]) % MOD;
        next_dp[2] = (dp[0] + dp[1] + dp[3]) % MOD;
        next_dp[3] = (dp[0] + dp[1] + dp[2]) % MOD;
        
        dp[0] = next_dp[0];
        dp[1] = next_dp[1];
        dp[2] = next_dp[2];
        dp[3] = next_dp[3];
    }

    cout << dp[3] << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}
