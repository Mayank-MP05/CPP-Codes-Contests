#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define deb(x)  if(SHOW)  cout << #x << "=" << x << "\n"
#define deb2(x, y) if(SHOW)   cout << #x << "=" << x << "," << #y << "=" << y << "\n"
#define debArr(a,n) for(int z=0;z<n;z++){ cout<<a[z]<<" "; } cout<<"\n";
#define deb2DArr(a,m,n) for(int z=0;z<m;z++){for(int y=0;y<n;y++){ cout<<a[z][y]<<" "; } cout<<"\n";}

#define deb3(x, y, z)  if(SHOW)        cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" |\
"<<#z<<": "<<z<<"\n"
#define deb4(a, b, c, d)        if(SHOW)  cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" |\
"<<#c<<": "<<c<<" | "<<#d<<": "<<d<<"\n"
#define deb5(a, b, c, d, e)     if(SHOW)  cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" |\
"<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<"\n"
#define deb6(a, b, c, d, e, f)  if(SHOW)  cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<< c<<" |\
"<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<"\n"

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
	string mover;
	ll LC, RC, DC, UC;
	ll x1, x2, y1, y2, q;
	cin >> mover;

	LC = RC = DC = UC = 0;
	for (i = 0 ; mover[i] != '\0' ; i++ ) {
		if (mover[i] == 'L') {
			LC++;
		} else if (mover[i] == 'R') {
			RC++;
		} else if (mover[i] == 'D') {
			DC++;
		} else {
			UC++;
		}
	}
	cin >> x1 >> y1;
	cin >> q;
	deb4(mover, x1, y1, q);
	fo(i, q) {
		cin >> x2 >> y2;
		if (x2 > x1 and y2 > y1) {
			//First Quadrant
			if (x2 - x1 <= RC and y2 - y1 <= UC) {
				cout << "YES " << (x2 - x1 + y2 - y1) << "\n";
				continue;
			}
		} else if (x2 < x1 and y2 > y1) {
			//Second Quadrant
			if (x1 - x2 <= LC and y2 - y1 <= UC) {
				cout << "YES " << (x1 - x2 + y2 - y1) << "\n";
				continue;
			}
		} else if (x2 < x1 and y2 < y1) {
			//Third Quadrant
			if (x1 - x2 <= LC and y1 - y2 <= DC) {
				cout << "YES " << (x1 - x2 - y2 + y1) << "\n";
				continue;
			}
		} else if (x2 > x1 and y2 < y1) {
			//Fourth Quadrant
			if (x2 - x1 <= RC and y1 - y2 <= DC) {
				cout << "YES " << (x2 - x1 - y2 + y1) << "\n";
				continue;
			}
		} else if (x2 == x1 and y2 == y1) {
			//Same point Condition
			cout << "YES 0" << "\n";
			continue;
		} else if (x2 == x1) {
			//X Axis Condition
			if (y1 > y2 ) {
				if (y1 - y2 <= DC) {
					cout << "YES " << (y1 - y2) << "\n";
					continue;
				}
			} else {
				if (y2 - y1 <= UC) {
					cout << "YES " << (y2 - y1) << "\n";
					continue;
				}
			}
		} else if (y1 == y2) {
			//Y Axis Condition
			if (x1 > x2 ) {
				if (x1 - x2 <= LC) {
					cout << "YES " << (x1 - x2) << "\n";
					continue;
				}
			} else {
				if (x2 - x1 <= RC) {
					cout << "YES " << (x2 - x1) << "\n";
					continue;
				}
			}
		}
		cout << "NO" << "\n";
	}
}

int main() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t = 1;
	cin >> t;

	while (t--) {
		solve();
		line;
	}

	return 0;
}
