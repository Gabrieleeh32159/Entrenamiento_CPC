// time-limit: 2000
// problem-url: https://atcoder.jp/contests/arc184/tasks/arc184_a
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



vector<int> valores(vector<int> pos, int M, int Q, vector<vector<int>> respuestas) {
    print(pos);
    vector<int> posibles;
    for (int i = 0; 2*i <= pos.size() && Q > 0; i++) {
        int j = i + pos.size()/2;
        int n1 = pos[i], n2 = pos[j];
        int res;
        if (respuestas[n1 - 1][n2 - 1] == -2) {
            cout << "? " << n1 << ' ' << n2 << endl;
            cin >> res;
            Q--;
            respuestas[n1 - 1][n2 - 1] = res;
        } else {
            res = respuestas[n1 - 1][n2 - 1];
        }

        if (res) {
            posibles.push_back(n1);
            posibles.push_back(n2);
        }
    }
    if (posibles.size() == M) {
        return posibles;
    } else {
        print(posibles);
        return valores(posibles, M, Q, respuestas);
    }
}

void solve(){
    int N, M, Q;
    cin >> N >> M >> Q;
    
    vector<int> posibles(N);
    for (int i = 0; i < N; i++) {
        posibles[i] = i + 1;
    }
    vector<vector<int>> respuestas(N, vector<int>(N, -2));

    vector<int> result = valores(posibles, M, Q, respuestas);

    cout << "! ";
    for (int i = 0; i < M; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}

