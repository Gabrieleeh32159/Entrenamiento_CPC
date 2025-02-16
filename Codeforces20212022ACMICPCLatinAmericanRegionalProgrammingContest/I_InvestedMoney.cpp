// time-limit: 350
// problem-url: https://codeforces.com/gym/103640/problem/I
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
 
unordered_map<string, int> days = { {"Mon", 0}, {"Tue", 1}, {"Wed", 2}, {"Thu", 3}, {"Fri", 4}, {"Sat", 5}, {"Sun", 6} }; 

void solve(){
    string day; cin >> day;
    int n; cin >> n;
    int today = days[day];
    int x;
    int minz = 10000;
    for (int i = 0; i < n; i ++) {
        cin >> x;
        int z = 30 - x % 30;
        if ((today + z ) % 7 > 4) {
            z += 30;
        }

        if (z < minz) {
            minz = z;
        }
    }
    cout << minz << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}