// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc374/tasks/abc374_d
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
 
struct p2d {
    int x, y;

    p2d(){};
    p2d(int _x,int _y): x(_x), y(_y){};

    long double distance(p2d p) {
        return sqrt(pow(p.x - this->x, 2) + pow(p.y - this->y, 2));
    }

    void print() {
        cout << '(' << this->x << ", " << this->y << ')' << endl;
    }
};


void solve(){
    int n, s, t; cin >> n >> s >> t;

    vector<vector<p2d>> segments(n, vector<p2d>(2, p2d()));

    for (int i = 0; i < n; i++) {
        cin >> segments[i][0].x >> segments[i][0].y >> segments[i][1].x >> segments[i][1].y;
    }

    long double time = 0;

    p2d curr(0, 0);
    for (int i = 0; i < n; i++) {
        int min_dis = INFINITY;
        int segment_index = -1;
        int point_index = -1;
        curr.print();
        for (int i = 0; i < segments.size(); i++) {
            if (curr.distance(segments[i][0]) < min_dis) {
                min_dis = curr.distance(segments[i][0]);
                segment_index = i;
                point_index = 0;
            }
            if (curr.distance(segments[i][1]) < min_dis) {
                min_dis = curr.distance(segments[i][1]);
                segment_index = i;
                point_index = 1;
            }
        }
        cout << segment_index << ' ' << point_index << ' ' << min_dis << endl;
        time += curr.distance(segments[segment_index][point_index]) / s;
        int another_point = point_index ? 0 : 1;
        time += segments[segment_index][point_index].distance(segments[segment_index][another_point]) / t;
        curr = segments[segment_index][another_point];
        segments.erase(segments.begin() + segment_index);
    }
    cout << time << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve(); 
}