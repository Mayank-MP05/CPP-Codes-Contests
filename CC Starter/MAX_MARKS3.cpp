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

class chapter {
public:
	ll time, marks;
	double marksPerTime;
	chapter(ll t_time, ll t_marks) {
		time = t_time;
		marks = t_marks;
		marksPerTime = (double)t_marks / (double)t_time;
	}
};

bool cmp(chapter c1, chapter c2) {
	if (c1.marksPerTime == c2.marksPerTime) {
		return c1.time < c2.time;
	}
	return c1.marksPerTime > c2.marksPerTime;
}

void solve() {
	ll i, j, n, m, k, r, o, cl, fl;
	cin >> n >> k;
	vl M(n), T(n);
	ll tMin = INT_MAX, minIndex = -1;
	fo(i, n) {
		cin >> M[i] >> T[i];
	}
	vector<chapter> arr;
	fo(i, n) {
		chapter temp(T[i], M[i]);
		arr.push_back(temp);
	}
	sort(all(arr), cmp);
	// k -= arr[n - 1].time;
	ll ans = 0;
	bool first = false;
	ll last = 0;
	ll minMarks = INT_MAX;
	for (i = 0 ; i < n ; i++ ) {
		if (k - arr[i].time >= 0) {
			ans += arr[i].marks;
			k -=  arr[i].time;
			if (arr[i].marks < minMarks) {
				minMarks = arr[i].marks;
			}
			deb2(ans, k);
		}
		if (k == 0) {
			break;
		}
		first = true;
	}
	if (ans != 0)
		ans -= minMarks;
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
	}

	return 0;
}
