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

typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

int prec(char c) {
	if (c == '^')
		return 3;
	if (c == '*' or c == '/')
		return 2;
	if (c == '+' or c == '-')
		return 1;
}

bool isOperator(char c) {
	if (c == '(' or c == ')' or c == '+' or c == '-' or c == '*' or c == '^' or c == '/')
		return true;
	return false;
}

void solve() {
	ll a, b, n, c, i, j, k, diff, no, start;
	cin >> n;
	while (n--)
		cout << n << endl;

}

int main() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while (t--)
		solve();


	return 0;
}
