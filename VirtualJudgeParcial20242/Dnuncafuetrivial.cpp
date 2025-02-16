// time-limit: 250
// problem-url: https://vjudge.net/contest/662761#problem/D
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
    int n;
    string s;
    cin >> n;
    cin >> s;

    int countA = 0;
    int i = 0;

    while (i < n) {
        int j = i;

        while (j < n && s[j] == s[i]) {
            j++;
        }

        if (j - i > 1 && s[i] == 'a') {
            countA += j - i;
        }

        i = j;
    }
    cout << countA << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}