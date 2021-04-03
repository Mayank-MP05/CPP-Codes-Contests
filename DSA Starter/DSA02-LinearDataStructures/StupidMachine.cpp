#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
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

void solve() {
  ll i, j, n, m,el;
  vl ip;
  cin>>n;
  fo(i,n){
      cin>>el;
      ip.push_back(el);
  }

  ll end = n-1,ans = 0,oldMin = 0,index = -1,minEl;
  while(end >= 0){
        minEl = INT_MAX;
        for(ll j = 0 ; j <= end ; j++ ){
            if(ip[j] < minEl){
                minEl = ip[j];
                index = j;
            }
        }
        ans += ((end + 1) * (minEl - oldMin));

        end = index - 1;
        oldMin = minEl;
        //deb2(ans,end);
  }
  cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}

/*
Sample Test Case
3

6
5       7       2       3       9       10

7
2       9       8       5       4       6       3   

4
7   8   2   1   

*/