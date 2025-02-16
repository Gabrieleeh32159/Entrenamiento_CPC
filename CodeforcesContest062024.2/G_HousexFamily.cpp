// time-limit: 1000
// problem-url: https://codeforces.com/gym/553593/problem/G
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
    int n, k; cin >> n >> k;

    vector<int> casas(n);

    for (int i = 0; i < n; i++) cin >> casas[i];

    int max_res = 0;
    int temp = 1;
    for (int i = 0; i < n; i++) {
        if (casas[i] != casas[i + 1]) {
            temp++;
        } else {
            max_res = max(temp, max_res);
            temp = 1;
        }
    }
    cout << max_res << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}