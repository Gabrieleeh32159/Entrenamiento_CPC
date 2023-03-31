#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

int sqrtdistance(int x, int y, int x1, int y2) {
    return sqrt(x1 - x) + sqrt(y2 - y);
}

int main() {
    int n, x, y; cin >> n;
    vector<pair<int, int>*>  points;
    while (n--) {
        cin >> x >> y;
        points.push_back(new pair<int, int>(x, y));
    }


    return 0;
}