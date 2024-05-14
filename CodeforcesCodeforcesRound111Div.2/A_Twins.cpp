// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/160/A
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
    vector<int> nums(n);
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums.rbegin(), nums.rend());
    for (int i = 1; i < n; i++) {
        nums[i] += nums[i - 1];
    }
    int i;
    for (i = 0; i < n - 1; i++) {
        if (nums[i] > (nums[n - 1] - nums[i])) {
            break;
        }
    }
    cout << i + 1 << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}