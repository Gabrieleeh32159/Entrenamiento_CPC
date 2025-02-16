#include <bits/stdc++.h>
using namespace std;

const int MAXN=100100;

double s[MAXN],v[MAXN];
int n;double t;
bool solve(double x){
    double sum=0;
    for(int i=0; i<n ;i++){
        if(v[i]+x<0)return true;
        sum+=(s[i]/(v[i]+x));
    }
    return sum>t;
}
int main(){
    while(cin>>n>>t){
        double l=-INT_MAX,r=INT_MAX,mid;
        for(int i=0;i<n;i++){
            cin>>s[i]>>v[i];
        }
        while(r-l>0.000000001){
            mid=(l+r)/2;
            if(solve(mid))l=mid;
            else r=mid;
        }
        printf("%.9lf\n",mid);
    }
}