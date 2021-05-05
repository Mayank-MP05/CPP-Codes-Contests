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

class building {
public:
	ll ht;
	ll index;
	ll heapIndex;

	building(ll ht, ll index) {
		this->ht = ht;
		this->index = index;
	}
};
bool cmp(const building& b1, const building& b2) {
	return b1.ht < b2.ht;
}
bool cmpByIndex(const building& b1, const building& b2) {
	return b1.index < b2.index;
}
class block {
public:
	ll sum;
	ll index;
	block(ll index = 0) {
		this->sum = 0;
		this->index = index;
	}
};

bool operator<(const block& p1, const block& p2)
{
	return p1.sum > p2.sum;
}

void solve() {
	ll x, i, j, n, m, el;
	cin >> n >> m >> x;
	vector<building> ip;
	fo(i, n) {
		cin >> el;
		ip.push_back(building(el, i));
	}
	// if (SHOW) {
	// 	fo(i, n) {
	// 		cout << ip[i].ht << " " << ip[i].index << endl ;
	// 	}
	// }
	sort(all(ip), cmp);
	if (SHOW) {
		cout << "After Sort : \n";
		fo(i, n) {
			cout << ip[i].ht << " " << ip[i].index << endl ;
		}
	}

	//Creating Heap with min sum giver
	priority_queue<block> op;
	for (i = 0 ; i < m ; i++) {
		op.push(block(i));
	}

	// Traverse over sorted buildings and push to pq
	block temp;
	for (i = 0 ; i < n ; i++) {
		temp = op.top();
		op.pop();

		temp.sum += ip[i].ht;
		// op.top().indices.push_back(ip[i].index);
		ip[i].heapIndex = temp.index;
		op.push(temp);
	}

	//Priority Queue to Array conversion
	vector<block> arr;
	while (!op.empty()) {
		arr.push_back(op.top());
		op.pop();
	}

	if (SHOW) {
		cout << "priority_queue : \n";
		fo(i, m) {
			cout << arr[i].sum << " " << arr[i].index << endl ;
		}
	}
	ll indexSize;

	// if (m == 1 or n == 1) {
	// 	fo(i, m) {
	// 		indexSize = arr[i].indices.size();
	// 		cout << "YES\n";
	// 		fo(j, indexSize) {
	// 			cout << arr[i].indices[j] + 1 << " ";
	// 		}
	// 		cout << "\n";
	// 	}
	// 	return;
	// }

	sort(all(ip), cmpByIndex);

	if ((abs(arr[0].sum - arr[m - 1].sum) <= x) or (m == 1 or n == 1)) {
		cout << "YES\n";
		fo(i, n) {
			// indexSize = arr[i].indices.size();

			// fo(j, indexSize) {
			// 	cout << arr[j].index + 1 << " ";
			// }
			cout << ip[i].heapIndex + 1 << " ";
		}
		cout << "\n";
		return;
	} else {
		cout << "NO\n";
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
