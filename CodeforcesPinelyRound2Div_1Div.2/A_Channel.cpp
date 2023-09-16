// time-limit: 1000
// problem-url: https://codeforces.com/contest/1863/problem/A
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
    int n, a, q;
    cin >> n >> a >> q;

    string s;
    cin >> s;

    if (n == a) {
        cout << "YES" << endl;
        return;
    }

    int max = a, plus = 0, minus = 0, ia = a;

    for (int i = 0; i < q; i++) {
        if (s[i] == '+') {
            a++;
            plus++;
        } else {
            a--;
            minus--;
        }
        if (a > max) max = a;
    }

    if (max >= n) {
        cout << "YES" << endl;
    } else {
        if ( ia + plus >= n) {
            cout  << "MAYBE" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve(); 
}