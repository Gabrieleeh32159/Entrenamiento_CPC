#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> events;

    for (int i = 0; i < n; ++i) {
        int b, d;
        cin >> b >> d;
        events[b]++;
        events[d]--;
    }

    int maxAlive = 0, currentAlive = 0, bestYear = 0;

    for (const auto& event : events) {
        currentAlive += event.second;
        if (currentAlive > maxAlive) {
            maxAlive = currentAlive;
            bestYear = event.first;
        }
    }

    cout << bestYear << " " << maxAlive << endl;

    return 0;
}
