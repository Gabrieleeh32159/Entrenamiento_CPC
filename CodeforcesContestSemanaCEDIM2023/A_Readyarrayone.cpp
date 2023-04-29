// time-limit: 1000
// problem-url: https://codeforces.com/group/Wr3hh4fy7t/contest/440894/problem/A
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
    vector<int> numbers(n);
    int ones = 0;
    for (int i =0; i < n; i++) {
        cin >> numbers[i];
        ones += numbers[i];
    }
    int sum = 0;
    int i = n - 1;
    int co = ones;
    while (co--) {
        sum += numbers[i];
        i--;
    }
    cout << ones - sum << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve(); 
}