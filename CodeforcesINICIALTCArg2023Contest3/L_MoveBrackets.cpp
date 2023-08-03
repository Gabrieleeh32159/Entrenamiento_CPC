// time-limit: 1000
// problem-url: https://codeforces.com/group/hzSLIARNBN/contest/465345/problem/L
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
    string brackets, balanced = "";
    int n;
    cin >> n;
    cin >> brackets;

    int balance = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        if (brackets[i] == ')' && balance == 0) {
            ans++;
        } else if (brackets[i] == ')' && balance != 0) {
            balance--;
        } else if (brackets[i] == '(') {
            balance++;
        }
    }
    cout << (ans + balance)/2 << "\n";
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve(); 
}