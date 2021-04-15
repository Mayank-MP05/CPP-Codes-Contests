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


void solve(vector<bool> primesArr, ll size) {
	ll i, j, n, a, b, c, l, r;
	cin >> l >> r;
	int ans = -1;
	ll first;
	for (i = l ; i <= r ; i++) {
		if (primesArr[i]) {
			if (ans == -1) {
				first = i;
				ans = 0;
			} else {
				ans = i - first;
			}
		}
	}
	cout << ans << "\n";
}

int main() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t = 1;

	// Create and Print the Prime Seive
	vector<bool> ip(1000001, true);
	for (int i = 2 ; i < sqrt(1000001) ; i++ ) {
		for (int j = i * i ; j < 1000001 ; j += i) {
			ip[j] = false;
		}
	}
	vl primesArr;
	for (int i = 2 ; i <= 1000000 ; i++ ) {
		if (ip[i]) {
			// deb(i);
			primesArr.push_back(i);
		}
	}
	// for (int i = 2 ; i <= 100 ; i++ ) {
	// 	if (ip[i]) {
	// 		deb(i);
	// 		// primesArr.push_back(i);
	// 	}
	// }
	ll size = primesArr.size();
	cin >> t;
	while (t--) {
		solve(ip, size);
	}

	return 0;
}
