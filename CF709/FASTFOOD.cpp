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
	cin >> n;
	vl A(n), B(n);
	fo(i, n) {
		cin >> A[i];
	}
	fo(i, n) {
		cin >> B[i];
	}
	vl prefixA, prefixB;
	prefixA.push_back(0);
	prefixB.push_back(0);
	ll sumA = 0, sumB = 0;
	for (i = 0 ; i < n ; i++) {
		sumA += A[i];
		sumB += B[i];
		prefixA.push_back(sumA);
		prefixB.push_back(sumB);
	}
	prefixA.push_back(prefixA[n]);
	prefixB.push_back(prefixB[n]);
	// debArr(prefixA, n + 2);
	// debArr(prefixB, n + 2);
	ll localSum = 0, maxSum = INT_MIN;
	for (i = 0 ; i < n + 2 ; i++) {
		localSum = (prefixA[i] - prefixA[0]) + (prefixB[n + 1] - prefixB[i]);
		deb2(prefixA[i], prefixB[i - 1]);
		if (localSum > maxSum) {
			deb(i);
			maxSum = localSum;
		}

	}
	cout << maxSum << "\n";
}

int main() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t = 1;
	cin >> t;
	while (t--) {
		solve();
		line;
	}

	return 0;
}
