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

typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

#define SHOW true

void solve() {
	ll i, j, n, m, g1, g2, c, diff;
	cin >> n;
	vl ip(n);
	bool ans = true;
	fo(i, n) {
		cin >> ip[i];
		if (ip[i] < 0) {
			ans = false;
		}
	}
	if (!ans) {
		cout << "-1" << endl;
		return;
	}
	bool problematic;
	//Onyl One element
	if (n == 1) {
		cout << 0 << endl;
		return;
	} else {
		//Gap calculation
		g1 = llabs(ip[1] - ip[0]);
		bool onlyG1 = true;
		//Calculate if it possible to have m and c
		for (i = 1 ; i < n - 1; i++) {
			g2 = llabs(ip[i + 1] - ip[i]);
			if (g2 != g1) {
				m = g1 + g2;
				c = min(g1, g2);
				onlyG1 = false;
				break;
			}
		}
		if (onlyG1) {
			//If it is increasing then m is infinite
			bool isMInfy = false, isIncreasing = true;
			for (i = 1; i < n; i++) {
				if (ip[i] < ip[i - 1]) {
					isIncreasing = false;
					break;
				}
			}
			if (g1 == 0) {
				cout << 0 << endl;
				return;
			}
			if (isIncreasing) {
				cout << 0 << endl;
				return;
			} else {
				cout << 2 * g1 << " " << g1 << endl;
				return;
			}
		}
		ll expected;
		problematic = false;
		//Check if it possible to have m and c
		ip[0] = ip[0] % m;
		for (i = 1 ; i < n ; i++) {
			expected = (ip[i - 1] + c) >= m ? ip[i - 1] + c - m : ip[i - 1] + c;
			if (ip[i] != expected) {
				problematic = true;
				break;
			}
		}
		if (ip[0] >= m) {
			problematic = true;
		}
	}
	if (!problematic) {
		cout << m << " " << c << endl;
	} else {
		cout << -1 << endl;
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
	}

	return 0;
}
