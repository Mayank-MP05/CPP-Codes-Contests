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

#define SHOW false


void solve() {
	ll i, j, n, m, el, k, l, r;
	ll a, b;
	cin >> n >> a >> b;

	ll ca = 0, cb = 0;
	ll temp = a, rmsb;
	while (temp != 0) {
		rmsb = temp & (-temp);
		temp -= rmsb;
		ca++;
	}

	temp = b;
	while (temp != 0) {
		rmsb = temp & (-temp);
		temp -= rmsb;
		cb++;
	}

	ll sum = ca + cb;
	ll ans = 0, mask;
	if (sum <= n) {
		j = 0;
		mask = 1;
		while (j < sum) {
			mask <<= 1;
			ans = ans | mask;
			j++;
		}
		if (n - sum > 0) {
			ans <<= (n - sum);
		}
	} else {
		j = 0;
		mask = 1;
		while (j < sum - n) {
			mask <<= 1;
			ans = ans | mask;
			j++;
		}
		if (sum - n > 0) {
			ans <<= (sum - n);
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
	cin >> t;
	while (t--) {
		solve();
		line;
	}

	return 0;
}
