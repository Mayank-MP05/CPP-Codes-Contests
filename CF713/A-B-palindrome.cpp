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
	ll i, j, n, m, a, b, c;
	cin >> a >> b;
	string str;
	cin >> str;
	n = str.size();
	ll qPairs = 0;
	vl qPairsVector;
	for (i = 0 ; i < n / 2 ; i++) {
		if (str[i] == '?' and str[n - 1 - i] == '?') {
			//Both question mark
			qPairs++;
			qPairsVector.push_back(i);
		} else if (str[i] == '?') {
			if (str[n - 1 - i] == '0') {
				a -= 2;
				str[i] = '0';
			} else {
				b -= 2;
				str[i] = '1';
			}
		} else if (str[n - 1 - i] == '?') {
			if (str[i] == '0') {
				a -= 2;
				str[n - 1 - i] = '0';
			} else {
				b -= 2;
				str[n - 1 - i] = '1';
			}
		} else {
			//Both are Numbers
			if (str[i] == '0' and str[n - 1 - i] == '0') {
				a = a - 2;
			} else if ((str[i] == '1' and str[n - 1 - i] == '1')) {
				b = b - 2;
			} else {
				cout << "-1" << "\n";
				return;
			}
		}
	}

	deb2(a, b);

	//if N is ODD
	bool freeOne = false;
	if (n & 1) {
		if (str[n / 2] == '0') {
			a--;
		} else if (str[n / 2] == '1') {
			b--;
		} else {
			freeOne = true;
		}
	}

	ll qvSize = qPairsVector.size();
	//Dividing QPairs for a
	ll needed = a / 2;
	// a = a - (needed * 2);
	// deb(needed);
	// if (a >= 0) {
	// 	for (i = 0 , j = 0; i < qvSize; i++, j++ ) {
	// 		if (j < needed) {
	// 			str[qPairsVector[i]] = '0';
	// 			str[n - 1 - qPairsVector[i]] = '0';
	// 			deb2(i, j);
	// 		}
	// 	}
	// }
	i = 0;
	j = 0;
	while (i < qvSize and j < needed) {
		str[qPairsVector[i]] = '0';
		str[n - 1 - qPairsVector[i]] = '0';
		i++;
		j++;
		a -= 2;
	}

	//Dividing QPairs for b
	needed = b / 2;
	// b = b - (needed * 2);
	deb(needed);
	// for (j = 0; i < qvSize; i++, j++ ) {
	// 	if (j < needed) {
	// 		str[qPairsVector[i]] = '1';
	// 		str[n - 1 - qPairsVector[i]] = '1';
	// 		deb2(i, j);
	// 	}
	// }

	j = 0;
	while (i < qvSize and j < needed) {
		str[qPairsVector[i]] = '1';
		str[n - 1 - qPairsVector[i]] = '1';
		i++;
		j++;
		b -= 2;
	}

	//One free pair present
	if (freeOne) {
		if (a == 1) {
			str[n / 2] = '0';
			a--;
		} else if (b == 1) {
			str[n / 2] = '1';
			b--;
		}
	}
	if (a == 0 and b == 0) {
		cout << str << "\n";
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
	}

	return 0;
}
