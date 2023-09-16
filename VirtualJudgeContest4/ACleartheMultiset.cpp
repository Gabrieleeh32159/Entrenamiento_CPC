// time-limit: 2000
// problem-url: https://vjudge.net/contest/580865#problem/A
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
    int n; cin >> n;
    vector<long int> bzero;
    long int min;
    for (int i = 0; i < n; i++) {
        long int a;
        cin >> a;
        if (a == 0) {
            
        } else {
            bzero.push_back(a);
        }
    }


}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}