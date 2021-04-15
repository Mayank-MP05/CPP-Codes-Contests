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


void solve(vl primesArr, ll size) {
	ll i, j, n, a, b, c, l, r;
	cin >> l >> r;
	bool LIncluded = false;
	bool RIncluded = false;
	ll Lindex, Rindex;
	Lindex = Rindex = -1;

	//Search for L begins
	for (i = 0 ; i < size - 1 ; i++ ) {
		if (primesArr[i] == l) {
			LIncluded = true;
			Lindex = i;
		} else if (primesArr[i] < l and primesArr[i + 1] > l) {
			Lindex = i;
			LIncluded = false;
		}
		if (i == size - 2 and Lindex == -1) {
			Lindex = size - 1;
			LIncluded = false;
		}
	}
	deb2(Lindex, LIncluded);
	//Search for R begins
	ll itStart;
	if (Lindex == 0) {
		itStart = 1;
	} else {
		itStart = Lindex;
	}
	if (r == 2) {
		Rindex = 1;
		RIncluded = true;
	} else {
		for (i = itStart ; i < size ; i++ ) {
			if (primesArr[i] == r) {
				RIncluded = true;
				Rindex = i;
			} else if (primesArr[i] > r and primesArr[i - 1] < r) {
				Rindex = i;
				RIncluded = false;
			}
		}
	}
	deb2(Rindex, RIncluded);

	//Print the Final Results
	ll ans = -1;
	if (LIncluded and RIncluded and Rindex == Lindex) {
		ans = 0;
	} else if (LIncluded and RIncluded and Rindex != Lindex) {
		ans = primesArr[Rindex] - primesArr[Lindex];
	} else if (!LIncluded and RIncluded) {
		ans = primesArr[Rindex] - primesArr[Lindex + 1];
	} else if (LIncluded and !RIncluded) {
		ans = primesArr[Rindex - 1] - primesArr[Lindex];
	} else if (!LIncluded and !RIncluded) {
		ans = primesArr[Rindex - 1] - primesArr[Lindex + 1];
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

	// Create and Print the Prime Seive
	vector<bool> ip(1000001, true);
	for (int i = 2 ; i < sqrt(1000001) ; i++ ) {
		for (int j = i * i ; j < 1000001 ; j += i) {
			ip[j] = false;
		}
	}
	vl primesArr;
	for (int i = 2 ; i <= 1000000 ; i++ ) {
		if (ip[i]) {
			// deb(i);
			primesArr.push_back(i);
		}
	}
	// for (int i = 2 ; i <= 100 ; i++ ) {
	// 	if (ip[i]) {
	// 		deb(i);
	// 		// primesArr.push_back(i);
	// 	}
	// }
	ll size = primesArr.size();
	cin >> t;
	while (t--) {
		solve(primesArr, size);
	}

	return 0;
}
