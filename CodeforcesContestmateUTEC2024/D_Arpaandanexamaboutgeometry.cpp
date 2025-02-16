// time-limit: 2000
// problem-url: https://codeforces.com/gym/564917/problem/D
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
 
struct Point {
    l x, y;

    Point(l _x, l _y) : x(_x), y(_y) {};
};



void solve(){
    l ax, ay, bx, by, cx, cy; cin >> ax >> ay >> bx >> by >> cx >> cy;

    ll crossp = (ax - bx) * (cy - by) - (ay - by) * (cx - bx);

    if (crossp != 0) {
        cout << "Yes" << endl;
    } else { cout << "No" << endl;}
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}