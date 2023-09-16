// time-limit: 2000
// problem-url: https://codeforces.com/contest/1861/problem/A
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
 
bool is_prime(int num) {
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void solve(){
    string num; cin >> num;

    for (int i = 0; i < 8; i++) {
        for (int j = i+1; j < 9 ; j++) {
            int number = int(num[i] - '0')*10 + int(num[j] - '0') ;
            if (is_prime(number)) {
                cout << number << endl;
                return;
            }
        }
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve(); 
}