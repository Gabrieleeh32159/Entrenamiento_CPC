// time-limit: 2000
// problem-url: https://codeforces.com/contest/1861/problem/B
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

bool solution(string a, string b) {
    for (int i = 0; i < a.size() - 1; i++) {
        if (a[i] == b[i] && a[i+1] == b[i + 1] && a[i] == '0' && a[i+1] == '1') {
            return true;
        }
    }
    return false;
}

void solve(){
    string a, b;
    cin >> a >> b;

    if (a == b) {
        cout << "YES" << endl;
        return;
    }

    if (solution(a, b)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve(); 
}