// time-limit: 1000
// problem-url: https://vjudge.net/contest/653845#problem/B
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
    vector<bool> numbers(n);
    for (int i = 0; i < n + 1; i++) {
        numbers[i] = false;
    }
    bool valid = true;
    int n1, n2;
    cin >> n1;
    for (int i = 1; i < n; i++) {
        cin >> n2;
        if (numbers[abs(n1 - n2)]) {
            valid = false;
        } else {
            numbers[abs(n1 - n2)] = true;
        }
        n1 = n2;
    }
    if (valid) {
        cout << "Jolly" << endl;
    } else {
        cout << "Not jolly" << endl;
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}