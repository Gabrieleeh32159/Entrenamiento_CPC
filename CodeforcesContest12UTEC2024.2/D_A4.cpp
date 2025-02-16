// time-limit: 1000
// problem-url: https://codeforces.com/gym/570427/problem/D
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
    int x, y;

    Point(int _x, int _y): x(_x), y(_y){};
};

struct Rectangle {
    Point lower, upper;

    Rectangle(Point _lower, Point _upper): lower(_lower), upper(_upper){};

    bool contains(Point p) {
        return (p.x >= lower.x && p.x <= upper.x && p.y >= lower.y && p.y <= upper.y);
    }
};

bool intercept(int x1, int x2, int x3, int x4) {
    cout << 
}

void solve(){
    int x1, x2, x3, x4, x5, x6, y1, y2, y3, y4, y5, y6;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    cin >> x5 >> y5 >> x6 >> y6;

    Rectangle white(Point(x1, y1), Point(x2, y2)), black1(Point(x3, y3), Point(x4, y4)), black2(Point(x5, y5), Point(x6, y6));

    if ( 
        (!black1.contains(white.lower) && !black2.contains(white.lower)) ||
        (!black1.contains(white.upper) && !black2.contains(white.upper)) ||
        (!black1.contains(Point(white.lower.x, white.upper.y)) && !black2.contains(Point(white.lower.x, white.upper.y))) ||
        (!black1.contains(Point(white.upper.x, white.lower.y)) && !black2.contains(Point(white.upper.x, white.lower.y)))
        ) {
        cout << "YES" << endl;
    } else if () {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}