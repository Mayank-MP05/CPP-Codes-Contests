#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define debArr(a,n) for(int z=0;z<n;z++){ cout<<a[z]<<" "; } cout<<endl;
#define line cout<<"\n__________________________________________\n";
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define bigMod 1000000007

typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

void solve() {
	ll n, k, i, el, j;
	cin >> n >> k;
	vl ip;
	fo(i, n) {
		cin >> el;
		ip.push_back(el);
	}
	ll fear = 1;
	for (i = 0 ; i < n ; i++ ) {
		for (j = i + 1 ; j < n ; j++) {
			if (ip[j] < ip[i]) {
				fear = ((fear % bigMod) * (j - i + 1) % bigMod) % bigMod;
				break;
			}
		}
	}
	cout << fear << endl;
}

int main() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE

	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	// int t = 1;
	// cin >> t;
	// while (t--) {
	solve();
	// }

	return 0;
}
