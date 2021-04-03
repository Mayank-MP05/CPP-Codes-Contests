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

struct frog
{
  int wt,cap;
};

bool cmpFrog(frog f1,frog f2){
  return f1.wt < f2.wt;
}

void solve() {
  int i, j, n, m,el,jumps=0,fi,si;
  int dp[50] = {0};
  //debArr(dp,50);
  vi wts,cap;
  cin>>n;
  fo(i,n){
      cin>>el;
      wts.pb(el);
      dp[i] = el;
  }
  fo(i,n){
      cin>>el;
      cap.pb(el);
  }
  frog arr[n],itr;
  fo(i,n){
    itr.wt = wts[i];
    itr.cap = cap[i];
    arr[i] = itr;
  }
  sort(arr,arr+n,cmpFrog);
  for(int j = 0 ; j < n-1 ; j++ ){
    for(int k = 0 ; k < 50 ; k++ ){
      if(dp[k] == arr[j].wt){
        fi = k;
      }
      if(dp[k] == arr[j+1].wt){
        si = k;
      }
    }
  // deb2(arr[j].wt,arr[j+1].wt);
    //deb2(fi,si);
    if(si > fi){
      continue;
    }else{
      while(fi >= si){
        jumps++;
        si += arr[j+1].cap;
       // deb(si);
      }
      //deb2(fi,si);
      dp[si] = arr[j+1].wt;
    }
  }
  //debArr(dp,50);
  cout<<jumps<<endl;
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
