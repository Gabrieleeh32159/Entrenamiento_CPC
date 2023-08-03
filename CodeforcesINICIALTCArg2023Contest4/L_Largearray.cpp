// time-limit: 3000
// problem-url: https://codeforces.com/group/hzSLIARNBN/contest/465596/problem/L
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
    int m;
    long int n;
    long long int k;
    cin >> m >> n >> k;
    int sum = 0;
    
    vector<long int> numeros(m);

    for(int i = 0; i < m; i++) {
      cin >> numeros[i];
    }

    sort(numeros.begin(), numeros.end());

    cout << "Sorted numbers: "; print(numeros);

    int l, r;

    


}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve(); 
}
