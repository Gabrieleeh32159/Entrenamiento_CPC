// time-limit: 3000
// problem-url: https://codeforces.com/gym/553593/problem/E
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
    string s; cin >> s;

    vector<int> ls(n);
    vector<int> os(n);
    ls[0] = int(s[0] == 'L');
    os[0] = int(s[0] == 'O');
    for (int i = 1; i < n; i++) {
        ls[i] = ls[i - 1] + int(s[i] == 'L');
        os[i] = os[i - 1] + int(s[i] == 'O');
    }

    for (int i = 0; i < n - 1; i++) {
        if ((ls[i] != (ls[n - 1] - ls[i])) && (os[i] != (os[n - 1] - os[i]))) {
            cout << i + 1 << endl; 
            return;
        }
    }

    cout << -1 << endl;

}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}