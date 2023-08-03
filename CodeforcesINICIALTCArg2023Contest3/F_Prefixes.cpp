// time-limit: 1000
// problem-url: https://codeforces.com/group/hzSLIARNBN/contest/465345/problem/F
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
    int n, ans = 0;
    string s, r;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n-1; i+=2) {
        if (s[i] == 'a') {
            r += "ab";
            if (s[i+1] == 'a') {
                ans++;
            }
        } else {
            r += "ba";
            if (s[i+1] == 'b') {
                ans++;
            }
        }
    }
    cout << ans << "\n";
    cout << r << "\n";
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}