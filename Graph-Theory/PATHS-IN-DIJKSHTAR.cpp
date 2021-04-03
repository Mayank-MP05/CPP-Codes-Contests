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

void printGraph(vector<vector<pair<ll, ll> > > G) {
	ll m = G.size(), n, i, j;
	fo(i, m) {
		n = G[i].size();
		cout << i + 1 << " -> ";
		fo(j, n) {
			cout << G[i][j].F + 1 << ": $" << G[i][j].S << " | ";
		}
		cout << "\n";
	}
}


ll minDistanceIndex(vector<ll> distance, vector<bool> visited) {
	ll minDistance = INT_MAX;
	ll index = 0;
	ll n = distance.size();
	for (int i = 0 ; i < n ; i++ ) {
		if (visited[i] == false and distance[i] < minDistance) {
			minDistance = distance[i];
			index = i;
		}
	}
	debArr(distance, n);
	deb(index + 1);
	return index;
}

void dijkshtra(vector<vector<pair<ll, ll> > > G, ll source) {
	ll n = G.size(), to, i, j, from, price;
	vector<bool> visited(n, false);
	vector<ll> distance(n, INT_MAX);

	// Starting Vertex Distance to 0
	distance[source] = 0;
	visited[source] = true;

	vl shortPath;

	// cout << minDistanceIndex(distance, visited);
	ll maxPrice = INT_MIN;
	for (int i = 0 ; i < n - 1; i++ ) {
		from = minDistanceIndex(distance, visited);
		shortPath.push_back(from);
		visited[from] = true;

		for (j = 0 ; j < G[i].size() ; j++ ) {
			to = G[from][j].F;
			price =  G[from][j].S;
			deb2(to, price);
			if (!visited[to] and distance[from] != INT_MAX and distance[from] + price < distance[to]) {
				maxPrice = max(maxPrice, price);
				distance[to] = distance[from] + price;
			}
		}
	}
	cout << distance[n - 1] - maxPrice << "\n";
}
void solve() {
	ll i, n, m;
	cin >> n >> m;
	ll from, to, wt;
	vector<vector<pair<ll, ll> > > G(n, vector<pair<ll, ll> > (0));
	fo(i, m) {
		cin >> from >> to >> wt;
		G[from - 1].push_back({to - 1, wt});
	}
	// printGraph(G);
	line;
	dijkshtra(G, 0);
}


int main() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	// int t = 1;
	// cin >> t;
	// while (t--) {
	solve();
	// }

	return 0;
}
