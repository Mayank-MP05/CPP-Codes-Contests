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

bool isSafe(vector<vector<ll>> matrix, map<ll, bool> used, ll i, ll j, ll no, ll n) {
	bool row = false, col = false;
	if (i != 0 and abs(no - matrix[j][i - 1]) != 1) {
		row = true;
	}
	if (i == 0) {
		row = true;
	}
	if (j != 0 and abs(no - matrix[j - 1][i]) != 1) {
		col = true;
	}
	if (j == 0) {
		col = true;
	}
	return col and row;
}

void printMatrix(vector<vector<ll>> matrix, ll n) {
	ll i, j;
	fo(i, n) {
		fo(j, n) {
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}
	line;
}

bool fillMatrix(vector<vector<ll>>& matrix, map<ll, bool> used, ll i, ll j, ll n) {
	if (i == n and j == n - 1) {
		printMatrix(matrix, n);
		return true;
	}
	// printMatrix(matrix, n);

	if (i == n) {
		j++;
		i = 0;
	}
	ll k = 1;
	// if (i != 0) {
	// 	k = matrix[j][i - 1];
	// }
	for ( ; k <= n * n ; k++ ) {
		if (!used[k] and isSafe(matrix, used, i, j, k, n)) {
			used[k] = true;
			matrix[j][i] = k;
			if (fillMatrix(matrix, used, i + 1, j, n)) {
				return true;
			} else {
				used[k] = false;
				matrix[j][i] = 0;
			}
		}
		// used[k] = false;
		// matrix[i][j] = 0;
	}
	return false;
}

void solve() {
	ll i, j, n, m, p, q, a, b, ans, el;
	cin >> n;
	vector<vector<ll>> matrix(n, vector<ll> (n, 0));
	map<ll, bool> used;
	if (fillMatrix(matrix, used, 0, 0, n)) {

	} else {
		cout << -1 << "\n";
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
