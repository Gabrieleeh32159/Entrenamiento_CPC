// time-limit: 500
// problem-url: https://codeforces.com/gym/103640/problem/K
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

    map<char, bool> initials;
    vector<string> words(n);
    for (int i = 0; i < n; i++){
        cin >> words[i];
        initials[words[i][0]] = true;
    }

    bool valid;
    for (const auto& word : words) {
        valid = true;
        for (const auto& c : word) {
            if (!initials[c]) {
                valid = false;
                break;
            }
        }
        if (valid) {
            cout << "Y" << endl;
            return;
        }
    }
    cout << "N" << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}