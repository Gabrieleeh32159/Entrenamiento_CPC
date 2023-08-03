// time-limit: 1000
// problem-url: https://codeforces.com/group/hzSLIARNBN/contest/464699/problem/C
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
 
 
bool check_square(vector<string> picture, int i, int j) {
    set<char> correct = {'f', 'a', 'c', 'e'};
    set<char> given = {picture[i][j], picture[i][j+1], picture[i+1][j], picture[i+1][j+1]};
    return correct == given;
}

void solve(){
    int n, m;
    cin >> n >> m;

    if (n < 2 || m < 2) {
        cout << 0 << "\n";
        return;
    }

    vector<string> picture(n);

    for (int i = 0; i < n; i++) {
        cin >> picture[i];
    }

    int result = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m - 1; j++) {
            result += check_square(picture, i, j);
        }
    }
    cout << result << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}
