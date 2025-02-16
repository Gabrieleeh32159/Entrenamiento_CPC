#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const long long INF = numeric_limits<long long>::max(); 

struct Edge {
    int v;         
    long long w;   
};

int main() {
    int N, M;
    cin >> N >> M;


    vector<vector<Edge>> graph(N + 1);


    for (int i = 0; i < M; ++i) {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, -w}); 
    }


    vector<long long> values(N + 1, INF);


    for (int start = 1; start <= N; ++start) {
        if (values[start] == INF) { 
        
            queue<int> q;
            values[start] = 0; 
            q.push(start);

            while (!q.empty()) {
                int u = q.front();
                q.pop();

            
                for (const auto& edge : graph[u]) {
                    int v = edge.v;
                    long long w = edge.w;

                
                    if (values[v] == INF) {
                        values[v] = values[u] + w;
                        q.push(v);
                    }
                }
            }
        }
    }


    for (int i = 1; i <= N; ++i) {
        cout << values[i] << " ";
    }
    cout << endl;

    return 0;
}
