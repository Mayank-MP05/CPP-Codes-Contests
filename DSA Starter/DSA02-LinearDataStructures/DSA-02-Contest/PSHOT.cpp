#include<bits/stdc++.h>
using namespace std;
#define line cout<<"\n__________________________________________\n";
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
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

void solve() {
	ll n, i, j, ans;
	string str;
	cin >> n;
	cin >> str;
	ll sumA = 0, sumB = 0, turnB = 0, turnA = 0;
	for (i = 0 ; i < 2 * n ; i++ ) {
		if (i & 1) {
			//Turn of player B
			if (str[i] == '1')
				sumB++;
			turnB++;

		} else {
			if (str[i] == '1')
				sumA++;
			turnA++;
		}

		if (sumB - sumA > n - turnA or sumA - sumB > n - turnB) {
			i++;
			cout << i << endl;
			return;
		}
		// deb(i);
		// deb2(sumA, sumB);

	}
	cout << 2 * n << endl;
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
		// line;
	}

	return 0;
}
