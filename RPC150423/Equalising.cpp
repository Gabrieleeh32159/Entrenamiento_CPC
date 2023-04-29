// time-limit: 3000
#include "bits/stdc++.h"
#define sz(a) ((int)((a).size()))
#define char unsigned char
#define fo(i,a,b) for(int i = a; i < b; i++)
#define Fo(i,a,b) for(int i = a; i >= b; i--)
#define vt vector
#define fi first
#define se second
#define bg begin()
#define end end()
#define ald(x) x.bg,x.end
#define zero(x) memset(x,0,sizeof(x))
#define one(x) memset(x,-1,sizeof(x))
#define pb push_back
#define eb emplace_back
#define mod 1000000007
#define deb(x) cout << #x << ": " << x << '\n';

using namespace std;

mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());

void yes(bool val){cout << (val ? "YES" : "NO") << '\n';}

typedef long long ll;
typedef long double ld;

int slv() {
	ld n, x, sum = 0; cin >> n >> x;
	vt<ld> v;
	fo(i,0,n) {
		ld a; cin >> a;
		sum += a * a;
		v.pb(a);
	}

	ld f = 0;
	cout << n * x << ' ' << f * f * sum << '\n';
	for (ld k = (x * n >= sum ? 1000.0 : 1.0); n * x - f * f * sum <= 0.000001; k /= 2)
		while ((f + k) * (f + k) * sum <= n * x) {
			f += k;
			if (n * x - f * f * sum <= 0.000001) break;
		}
	
	cout << f << '\n';
	for (ld el : v) cout << f * el << ' ';
	cout << '\n';
	return 0;
}

signed main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int t = 1;
	while(t--) slv();
	return 0;
}2