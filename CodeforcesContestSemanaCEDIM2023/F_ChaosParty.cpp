// time-limit: 1000
// problem-url: https://codeforces.com/group/Wr3hh4fy7t/contest/440894/problem/F
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
    ll Nmax; cin >> Nmax;
    vector<ll> criba(Nmax-1);
    //Marcar todos los elementos con -1
    for(ll i = 2; i < Nmax; i++){
        criba[i] = -1;
    }
    //marcar los múltiplos de 2 con 2
    for(ll i = 4; i < Nmax; i += 2){
        criba[i] = 2;
    }
    //Marcar el resto con sus respectivos máximos divisores primos
    for (ll i = 3; i*i < Nmax; i+=2){
        if(criba[i] == -1){
            for(ll j = i*i; j < Nmax; j += 2*i ){
                if(criba[j] == -1){
                    criba[j] = i;
                }
            }
        }
    }
    
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}