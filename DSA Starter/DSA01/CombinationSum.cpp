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

bool printOneCombination(vector<ll> ip,ll Curr,ll Target,ll n,vector<vector<ll>> op){
    if(Curr == Target){
        return true;
    }
    if(Curr > Target){
        return false;
    }
    deb(Curr);
    vector<ll> arr;
    for(int i= 0 ; i < n ; i++ ){
        arr.push_back(ip[i]);
        if(printOneCombination(ip,Curr + ip[i],Target,n,op)){
            return true;
        }
        arr.pop_back();
    }
}

void solve() {
  int el,i, j, n, m;
  vector<ll> ip;
  vector<vector<ll>> op;
  cin>>n;
  fo(i,n){
      cin>>el;
      ip.push_back(el);
  }
    cout<<printOneCombination(ip,0,7,n,op) ? "YES" : "NO";
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
