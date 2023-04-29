// time-limit: 2000
// problem-url: https://vjudge.net/contest/553531#problem/V
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
    map<int, bool> found;
    found.insert({2, true});
    found.insert({3, true});
    found.insert({4, true});
    found.insert({5, false});
    set<int> not_repeated;
    if (found[1] == false) {
        cout << "value is false" << endl;
    } else {
        cout << "value is null" << endl;
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}