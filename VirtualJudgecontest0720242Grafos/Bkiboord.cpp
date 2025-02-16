// time-limit: 2000
// problem-url: https://vjudge.net/contest/666865#problem/B
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
 
const int MAXN = 2010;
char mapa[MAXN][MAXN];

vector<vector<int>> moves = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}}, add = {{0, 0}, {0, 0}, {1, 0}, {0, 1}};

void solve(){
    int n, m, yi, xi, l, r;
    cin >> n >> m;
    cin >> yi >> xi;
    cin >> l >> r;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> mapa[i][j];
        }
    }

    queue<pair<pair<int, int>, pair<int, int>>> P1, P2;
    P1.push({{yi, xi}, {0, 0}});
    int tot = 1;
    mapa[yi][xi] = 'F';
    int y, x, ll, rr, i, j, l2, r2;
    while (P1.size() + P2.size())
    {
        if (!P1.empty())
        {
            y = P1.front().first.first;
            x = P1.front().first.second;
            ll = P1.front().second.first;
            rr = P1.front().second.second;
            P1.pop();
        }
        else
        {
            y = P2.front().first.first;
            x = P2.front().first.second;
            ll = P2.front().second.first;
            rr = P2.front().second.second;
            P2.pop();
        }

        for (int k = 0; k < 4; k++)
        {
            i = y + moves[k][0];
            j = x + moves[k][1];
            l2 = ll + add[k][0];
            r2 = rr + add[k][1];
            if (mapa[i][j] == '.' && l2 <= l && r2 <= r)
            {
                tot++;
                mapa[i][j] = 'F';
                if (k < 2)
                {
                    P1.push({{i, j}, {l2, r2}});
                }
                else
                {
                    P2.push({{i, j}, {l2, r2}});
                }
            }
        }
    }

    cout << tot << "\n";
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve(); 
}