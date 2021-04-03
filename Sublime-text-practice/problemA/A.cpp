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

/*
A - 65
a - 97
*/

void solve() {
	int i, j, n, m, c = 0, k;
	string s1, s2;
	cin >> s1 >> k;

	for (int i = 0 ; i < s1.size() ; i++ ) {
		if (s1[i] >= 'a' and s1[i] <= 'z') {
			//deb((int)s1[i]);
			//deb2((s1[i] + (k % 26))  % 26 , 'a' + ( (s1[i] + (k % 26))  % 26 ));
			if (s1[i] + k > 'z') {
				s1[i] = 'a' + ( (s1[i] + (k % 26) - 'a')  % 26 );
			} else {
				s1[i] = (s1[i] + k);
			}
		}
		if (s1[i] >= 'A' and s1[i] <= 'Z') {
			if (s1[i] + k > 'Z') {
				s1[i] = 'A' + (s1[i] + (k % 26) - 'A') % 26 ;
			} else {
				s1[i] = (s1[i] + k);
			}
		}
		if (s1[i] >= '0' and s1[i] <= '9') {
			if (s1[i] + k > '9') {
				s1[i] = '0' + (s1[i] + (k % 10) - '0') % 10 ;
			} else {
				s1[i] = (s1[i] + k);
			}
		}
	}
	cout << s1 << endl;
}
/*
Epp-gsrzsCw-3-fi:Epivx5.
*/
int main() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	solve();


	return 0;
}
