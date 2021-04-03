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


int maximizeTheCuts(int n, int x, int y, int z)
{
    int dp[n+1];
    memset(dp,0,sizeof(dp));
    
    int x1,x2;
    
    for(int i = 1 ; i <= n ; i++ ){
        x1 = max(dp[i-x < 0 ? 0 :i-x],dp[i-y < 0 ? 0 :i-y]);
        x2 = max(x1,dp[i-z < 0 ? 0 : i-z]);
        dp[i] = x2+1;
    }
    debArr(dp,n+1);
    return dp[n]-1;
}

void solve() {
  int i, j, n, m;
  cout<<maximizeTheCuts(4,2,1,1);
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;

      solve();
    

    return 0;
}
