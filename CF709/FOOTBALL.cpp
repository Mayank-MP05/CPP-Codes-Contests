#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define deb(x)  if(SHOW)  cout << #x << "=" << x << endl
#define deb2(x, y) if(SHOW)   cout << #x << "=" << x << "," << #y << "=" << y << endl
#define debArr(a,n) for(int z=0;z<n;z++){ cout<<a[z]<<" "; } cout<<endl;
#define deb2DArr(a,m,n) for(int z=0;z<m;z++){for(int y=0;y<n;y++){ cout<<a[z][y]<<" "; } cout<<endl;}

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

#define BIG 10000009
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

#define SHOW false

void solve() {
	ll i, j, n, m, k;
	cin >> n ;
	vl SURE(n, 0), X(n, 0), Y(n, 0);
	fo(i, n) {
		cin >> SURE[i] >> X[i] >> Y[i];
	}
	ll x1, x2, y1, y2;
	if (SURE[0] == 1) {
		cout << "YES" << endl;
	} else {
		if (X[0] == Y[0]) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	for (i = 1; i < n; i++)
	{
		if (X[i] == Y[i]) {
			cout << "YES" << endl;
			continue;
		}
		if (SURE[i] == 1) {
			cout << "YES" << endl;
		} else {
			//Check the Overlap here;
			x1 = min(X[i - 1], Y[i - 1]);
			x2 = max(X[i - 1], Y[i - 1]);
			y1 = min(X[i], Y[i]);
			y2 = max(X[i], Y[i]);
			if (y1 >= x2) {
				cout << "NO" << endl;
			} else {
				cout << "YES" << endl;
			}
		}
	}

}

int main() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t = 1;
	string str;
	cin >> t;
	while (t--) {
		solve();
		line;
	}

	return 0;
}
