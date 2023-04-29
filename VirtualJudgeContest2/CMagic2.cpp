// time-limit: 2000
// problem-url: https://vjudge.net/contest/553531#problem/C
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
 
int number(int x, int& k) {
    int times = 0;
    while (k <= x) {
        k *= 2;
        times++;
    }
    return times;
}


void solve(){
    int a, b, c, k;
    cin >> a >> b >> c;
    cin >> k;
    int total_times = number(a, b);
    total_times += number(b, c);
    if (total_times > k) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}