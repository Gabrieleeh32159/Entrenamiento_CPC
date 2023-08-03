// time-limit: 2000
// problem-url: https://codeforces.com/group/hzSLIARNBN/contest/465345/problem/G
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
    vector<long int> pref(n);
    for (int i = 0; i < n; i++) {
        cin >> pref[i];
    }

    long int number;
    vector<long int> pos, neg;
    long int zeros = 0;
    long int resta;
    for (int i = 0; i < n; i++) {
        cin >> number;
        resta = pref[i] - number;
        if ( resta > 0) {
            pos.push_back(resta);
        } else if (resta < 0) {
            neg.push_back(abs(resta));
        } else {
            zeros++;
        }
    }
    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end());

    //print(pos); print(neg); cout << zeros << "\n";
    long long int result = zeros*pos.size() + pos.size()*(pos.size()-1)/2;
    for (int i = 0; i < pos.size(); i++) {
        result += lower_bound(neg.begin(), neg.end(), pos[i]) - neg.begin();
    }

    cout << result << "\n";
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}