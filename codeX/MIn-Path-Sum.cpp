#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define deb(x)  if(SHOW)  cout << #x << "=" << x << endl
#define deb2(x, y) if(SHOW)   cout << #x << "=" << x << "," << #y << "=" << y << endl
#define debArr(a,n) if(SHOW) for(int z=0;z<n;z++){ cout<<a[z]<<" "; } cout<<endl;
#define deb2DArr(a,m,n) if(SHOW) for(int z=0;z<m;z++){for(int y=0;y<n;y++){ cout<<a[z][y]<<" "; } cout<<endl;}

#define deb3(x, y, z)  if(SHOW)        cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" |\
"<<#z<<": "<<z<<endl
#define deb4(a, b, c, d)        if(SHOW)  cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" |\
"<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define deb5(a, b, c, d, e)     if(SHOW)  cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" |\
"<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define deb6(a, b, c, d, e, f)  if(SHOW)  cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<< c<<" |\
"<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl

#define line if(SHOW) cout<<"\n__________________________________________\n";
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

#define SHOW true

int fun(int a, int b) {
	if (a > 0 and b > 0) {
		deb2(a, b);
		return fun(-7, 10) + fun(b - 2, a - 1);
	}
	return a + b;

}
void solve() {
	ll i, j, n, m, a, b, c, d, qry;
	cin >> n >> c >> d;
	// vl A(n), B(n);
	// fo(i, n) {
	// 	cin >> A[i];
	// }
	// fo(i, n) {
	// 	cin >> B[i];
	// }
	// vl dpA(n, INT_MAX), dpB(n, INT_MAX);
	// dpA[0] = A[0];
	// dpB[0] = B[0];
	// for (int i = 1; i < n; i++) {
	// 	for (j = (i - c < 0) ? 0 : (i - c) ; j < i ; j++) {
	// 		deb2(i, j);
	// 		debArr(dpA, n);
	// 		debArr(dpB, n);

	// 		dpA[i] = min(dpA[i], min(dpA[j], dpB[j] + d) + A[i]);
	// 		dpB[i] = min(dpB[i], min(dpA[j] + d, dpB[j]) + B[i]);
	// 	}
	// }
	// cout << min(dpA[n - 1], dpB[n - 1]) << endl;
	cout << fun(2, 3);
}

int main() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}
