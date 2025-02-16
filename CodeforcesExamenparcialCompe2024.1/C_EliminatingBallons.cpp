// time-limit: 1500
// problem-url: https://codeforces.com/gym/557506/problem/C
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
        cin >> n;

        vector<int> heights(n);
        vector<int> arrows(1e6 + 1, 0);

        for (int i = 0; i < n; ++i) {
            cin >> heights[i];
        }

        int shots = 0;

        for (int i = 0; i < n; ++i) {
            if (arrows[heights[i]] > 0) {
                arrows[heights[i]]--;
                arrows[heights[i] - 1]++;
            } else {
                shots++;
                arrows[heights[i] - 1]++;
            }
        }

        cout << shots << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve();
}
