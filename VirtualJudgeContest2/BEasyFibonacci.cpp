// time-limit: 1000
// problem-url: https://vjudge.net/contest/553531#problem/B
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
 
int fibomodn(int n) {
    int periodo = 0;
    pair<int, int> numbers = {0, 1};
    int sum;
    while (numbers.first != 1 || numbers.second  != 0) {
        sum = (numbers.first + numbers.second)%n;
        numbers = {numbers.second, sum};
        periodo++;
        //cout << "periodo: " << periodo << " " << numbers.first << " " << numbers.second << endl;
    }
    
    return periodo+1;
}
 
void solve(vector<int> fibomod10, int periodo){
    ll n; cin >> n;
    ll last_value = 1;
    while (last_value*2 <= n){
        last_value*=2;
    }
    //cout << last_value << endl;
    cout << fibomod10[last_value%periodo-1] << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int periodo = fibomodn(10);
    vector<int> fibomod10(periodo);
    fibomod10[0] = 0;
    fibomod10[1] = 1;
    for (int i = 2; i < periodo; i++) {
        fibomod10[i] = (fibomod10[i-1] + fibomod10[i-2])%10;
    }
    //print(fibomod10);
    int t=1;
    cin>>t;
    while(t--) solve(fibomod10, periodo); 
}