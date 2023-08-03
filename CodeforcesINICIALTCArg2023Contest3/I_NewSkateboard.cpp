// time-limit: 1000
// problem-url: https://codeforces.com/group/hzSLIARNBN/contest/465345/problem/I
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
    string number;
    getline(cin, number);
    long long int ans = 0;
    for (int i = 0; i < number.size() - 1; i++) {
        if (number[i] - '0' % 4 == 0) {
            ans ++;
        }
        if ((number[i] - '0')*10 + (number[i+1] - '0')) {
            
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