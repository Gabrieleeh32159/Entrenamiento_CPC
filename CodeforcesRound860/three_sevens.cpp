#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#define LL long long

using namespace std;

int main() {
    int t, m, n; cin >> t;
    vector<vector<int>*>* lottery;
    vector<int>* participants;
    while (t--) {
        lottery = nullptr;
        cin >> m;
        lottery = new vector<vector<int>*>(m+1);
        for(int j = 1; j < m+1; j++) {
            participants = nullptr;
            cin >> n;
            participants = new vector<int>(n+1);
            for (int i = 1; i < n+1; i++) {
                cin >> participants->at(i);
            }
            lottery->at(j) = participants;
        }

        for (int i = 1; i < m+1; i++) {
            
        }
    }
    return 0;
}