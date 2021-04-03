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

void getAllComb(vl ip,ll i,ll n,vl temp,vector<vector<ll> >& ans,ll sum,ll target){
  if(i == n && sum == target){
    ans.push_back(temp);
    return;
  }
  if(i > n || sum > target){
      return;
  }
  deb(i);
  temp.push_back(ip[i]);
  getAllComb(ip,i+1,n,temp,ans,sum+ip[i],target);
  temp.pop_back();
  getAllComb(ip,i+1,n,temp,ans,sum,target);
}

void solve() {
  int i, j, n, m,el;
  vector<ll> ip,t;
  vector<vector<ll> > ans;
  cin>>n;
  fo(i,n){
    cin>>el;
    ip.push_back(el);
  }
  getAllComb(ip,0,n,t,ans,0,50);
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
sample output 
1
5
10      20      30      40      50
*/