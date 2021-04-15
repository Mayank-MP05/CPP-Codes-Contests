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

int findLastOpener(string str, int n) {
	int opener = -1;
	// for (int i = 0 ; i < n ; i++ ) {
	// 	if (str[i] == '/') {
	// 		opener = i;
	// 	}
	// }
	size_t found = str.find_last_of('/');
	if (found != string::npos) {
		return found;
	}
	return opener;
}
int findFirstCloser(string str, int n, int start) {
	// for (int i = 0 ; i < n ; i++ ) {
	// 	if (str[i] == '\\') {
	// 		return i;
	// 	}
	// }
	size_t found = str.find('\\');
	if (found != string::npos) {
		return found;
	}
	return -1;
}
string breakInnerShelf(string str, int n) {
	string ans = str;
	int start = findLastOpener(str, n);
	if (start == -1) {
		return str;
	}
	int end = findFirstCloser(str, n, start);
	deb2(start, end);

	string rev = str.substr(start + 1, end - start - 1);
	deb(str.substr(start + 1, end));
	reverse(rev.begin(), rev.end());
	deb(rev);
	deb(str.substr(0, start));
	deb(str.substr(end + 1, n));
	ans = str.substr(0, start) + rev + str.substr(end + 1, n - end);
	return ans;
}
void solve() {
	ll i, j, n, m, a, b, c;
	string str;
	cin >> str;
	n = str.size();
	c = 0;
	for (i = 0 ; i < n ; i++ ) {
		if (str[i] == '/' or str[i] == '\\') {
			c++;
		}
	}
	while (findFirstCloser(str, n, 0) != -1) {
		str = breakInnerShelf(str, n);
	}
	cout << str << "\n";
}

int main() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}
