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

int maxValMemorisation(vl wts,vl val,ll i,ll n,ll cap,ll currVal,int** dp){
    deb2(i,cap);
    if(dp[i][cap] != -1){
        return dp[i][cap];
    }
    if(i == n && cap >= 0){
        dp[i][cap] = currVal;
        return currVal;
    }
    if(cap < 0 || i > n){
        //dp[i][cap] = 0;
        return 0;
    }
    return dp[i][cap] = max(maxValMemorisation(wts,val,i+1,n,cap,currVal,dp),maxValMemorisation(wts,val,i+1,n,cap-wts[i],currVal+val[i],dp));
}
int maxValTabulation(vl wts,vl val,ll i,ll n,ll cap){
    return 0;
}

void solve() {
  int i, j, n, m,el,cap;
  vector<ll> ip,t,values,weights;
  vector<vector<ll> > ans;
  cin>>n>>cap;
  fo(i,n){
    cin>>el;
    values.push_back(el);
  }
  fo(i,n){
    cin>>el;
    weights.push_back(el);
  }
  int** dp;//[n+1][cap+1];
    dp = new int*[n];
    for(int i = 0;i<n;i++){
        dp[i] = new int*[cap+1];
    }
  memset(dp,-1,sizeof(dp));
  cout<<"DP Table : \n";

    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=cap;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
    
  cout<<"Ans is "<<maxValMemorisation(weights,values,0,n,cap,0,dp)<<endl;
  cout<<maxValTabulation(weights,values,0,n,cap)<<endl;
/*
  cout<<"{ ";
  for(i = 0 ; i < ans.size() ; i++){
      cout<<"{ ";
    for(j = 0;j < ans[i].size() ; j++ ){
      cout<<ans[i][j]<<"  ";
    }
    cout<<" }";
    cout<<endl;
  }
  cout<<" }";
*/
}

/*
1
3       50
60      100     120
10      20      30
*/


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
sample output 
1
5
10      20      30      40      50
*/