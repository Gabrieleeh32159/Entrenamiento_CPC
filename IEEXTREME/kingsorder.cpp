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
    int n, m;
    cin >> n >> m;

    vector<int> ids(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> ids[i];
    }

    vector<vector<int>> adj(n + 1);
    vector<int> indegree(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        indegree[b]++;
    }

    auto cmp = [&](int a, int b) {
        if (ids[a] == ids[b]) return a > b;
        return ids[a] > ids[b];
    };
    
    priority_queue<int, vector<int>, decltype(cmp)> pq(cmp);

    for (int i = 1; i <= n; ++i) {
        if (indegree[i] == 0) {
            pq.push(i);
        }
    }

    vector<int> ans;
    while (!pq.empty()) {
        int current = pq.top();
        pq.pop();
        ans.push_back(current);

        for (auto vecino : adj[current]) {
            indegree[vecino]--;
            if (indegree[vecino] == 0) {
                pq.push(vecino);
            }
        }
    }

    if (ans.size() != n) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < ans.size(); ++i) {
            cout << ans[i] << (i == ans.size() - 1 ? "\n" : " ");
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