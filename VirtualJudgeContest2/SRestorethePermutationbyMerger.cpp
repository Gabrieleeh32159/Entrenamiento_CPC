// time-limit: 1000
// problem-url: https://vjudge.net/contest/553531#problem/S
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
    int n, k; cin >> n; k = n*2;
    vector<bool> in(n+1);
    for (int i = 1; i < n+1; i++) {
        in[i] == false;
    }

    int num;
    vector<int> nums;

    while (k--) {
        cin >> num;
        if (!in[num]) {
            nums.push_back(num);
            in[num] = true;
        }
    }
    print(nums);
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve(); 
}