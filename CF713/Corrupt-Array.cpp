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


void solve() {
	ll i, j, n, m, a, b, c;
	cin >> n;
	n += 2;
	vl ip(n);
	ll maxP1 = INT_MIN, maxIdxOne, maxP2 = INT_MIN, maxIdxTwo;
	fo(i, n) {
		cin >> ip[i];
		//Finding the First Max Element
		if (ip[i] >= maxP1) {
			maxP1 = ip[i];
			maxIdxOne = i;
		}
	}
	// findinf second Max Element
	fo(i, n) {
		if (ip[i] >= maxP2 and i != maxIdxOne) {
			maxP2 = ip[i];
			maxIdxTwo = i;
		}
	}
	// deb2(maxP1, maxP2);
	//Precompute Sums - Case Max1 is the Sum and
	vl ip_without_sum(n - 1);
	j = 0;
	//Array Formation
	fo(i, n) {
		if (i != maxIdxOne) {
			ip_without_sum[j] = ip[i];
			j++;
		}
	}
	//Precompute
	vl SumACaseOne(n - 1);
	j = 0;
	ll sum = 0;
	fo(i, n - 1) {
		sum += ip_without_sum[j];
		SumACaseOne[j] = sum;
		j++;
	}
	//Checking if Pattern Exist - Ingogre One
	fo(i, n - 1) {
		if (SumACaseOne[n - 2] - ip_without_sum[i] == maxP1) {
			fo(j, n - 1) {
				if (j != i) {
					cout << ip_without_sum[j] << " ";
				}
			}
			cout << "\n";
			return;
		}
	}

	//Precompute Sums - Case Max1 is the Sum and
	vl ip_without_sum2(n - 1);
	j = 0;
	//Array Formation
	fo(i, n) {

		if (i != maxIdxTwo) {
			ip_without_sum2[j] = ip[i];
			j++;
		}
	}
	//Precompute
	vl SumACaseTwo(n - 1);
	j = 0;
	sum = 0;
	fo(i, n - 1) {
		sum += ip_without_sum2[j];
		SumACaseTwo[j] = sum;
		j++;
	}
	//Checking if Pattern Exist - Ingogre One
	fo(i, n - 1) {
		if (SumACaseTwo[n - 2] - ip_without_sum2[i] == maxP2) {
			fo(j, n - 1) {
				if (j != i) {
					cout << ip_without_sum2[j] << " ";
				}
			}
			cout << "\n";
			return;
		}
	}
	cout << "-1" << endl;
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
