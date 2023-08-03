// time-limit: 1000
// problem-url: https://codeforces.com/group/hzSLIARNBN/contest/465345/problem/M
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
    vector<int> nums(3);
    cin >> nums[0] >> nums[1] >> nums[2];
    cout << *max_element(nums.begin(), nums.end()) - *min_element(nums.begin(), nums.end())<< "\n";
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}