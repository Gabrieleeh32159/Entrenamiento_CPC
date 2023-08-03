// time-limit: 2000
// problem-url: https://codeforces.com/group/hzSLIARNBN/contest/465345/problem/A
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
    int xa, ya, xb, yb, xf, yf;
    cin >> xa >> ya;
    cin >> xb >> yb;
    cin >> xf >> yf;

    int result = abs(xa - xb) + abs(ya - yb);
    if ((xa == xb && xa == xf && ((yf > ya && yf < yb) || (yf > yb && yf < ya))) || (ya == yb && ya == yf && ((xf > xa && xf < xb) || (xf > xb && xf < xa)))) {
        result += 2;
    }

    cout << result << "\n";
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve(); 
}