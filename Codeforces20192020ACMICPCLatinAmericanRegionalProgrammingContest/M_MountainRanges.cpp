// time-limit: 1000
// problem-url: https://codeforces.com/gym/102428/problem/M
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
    int n, x;
    cin >> n >> x;
    int a1, a2; cin >> a1;
    int mr = 1, temp = 1;
    for (int i = 1; i < n; i++) {
        cin >> a2;
        if (a2 - a1 <= x) {
            temp++;
        } else {
            if (temp > mr) {
                mr = temp;
                temp = 1;
            }
        }
        a1 = a2;
    }
    if (temp > mr) {
        mr = temp;
        temp = 1;
    }

    cout << mr << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}