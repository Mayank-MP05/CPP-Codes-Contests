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

#define SHOW false

bool isSafe(vector<string> op, ll x, ll y) {
	ll n = op.size();
	ll m = op[0].size();
	if (x >= 0 and x < n and y >= 0 and y < m) return true;
	return false;
}

ll DFS(vector<string> ip, vector<string>& op, ll x, ll y) {
	if (isSafe(op, x, y)) {
		if (op[x][y] == 'F') {
			op[x][y] = 'T';
			if (ip[x][y] == '.') {
				ll maxP = 1 + DFS(ip, op, x + 1, y) + DFS(ip, op, x - 1, y) + DFS(ip, op, x, y + 1) + DFS(ip, op, x, y - 1);
				return maxP;
			}
		}
	}
	return 0;
}

void solve() {
	ll i, j, n, m;
	cin >> n >> m;
	vector<string> ip(n), op(n, string(m, 'F'));
	fo(i, n) {
		cin >> ip[i];
	}
	ll area;
	vl areas;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (ip[i][j] == '#') {
				op[i][j] = 'T';
			}
			if (op[i][j] == 'F') {
				area = DFS(ip, op, i, j);
				areas.push_back(area);
			}
		}
	}
	// debArr(op, n);
	// debArr(areas, areas.size());
	cout << areas.size() << "\n";
	fo(i, areas.size()) {
		cout << areas[i] << " ";
	}
	cout << "\n";
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
