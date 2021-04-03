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

int _binHelp(vl ip,ll el,ll n,ll l,ll r,bool &found){
  deb2(l,r);
  /*
  if(l == r and ip[l] != el){
    return -1;
  }*/
  if(l <= r){
    //deb2(l,r);
    ll m = (l+r)/2;
    //deb(m);
    if(el == ip[m]){
      found = true;
      return m;
    }
    if(el < ip[m])
      return _binHelp(ip,el,n,l,m-1,found);
    
    return _binHelp(ip,el,n,m+1,r,found);
    
  }
    return -1;
}
int binSearch(vl ip,ll el,ll n){
  bool found = false;
  int res = _binHelp(ip,el,n,0,n-1,found);
 return res;
  
}

void solve() {
  ll i, j,k,p,n, m,el,x1,x2,tmp,itr;
  cin>>n>>k>>p;
  vl ip;
  fo(i,n){
    cin>>el;
    ip.push_back(el);
  }
  vl sortIp(ip);
  sort(sortIp.begin(),sortIp.end());
  fo(i,p){
    cin>>x1>>x2;
    //Check and swap for smaller
    if(x1 == x2){
      cout<<"Yes"<<endl;
      continue;
    }
    x1--;
    x2--;
    
    //deb2(ip[x1],ip[x2]);
    //Search for the starting index
    /*
    for( j = 0 ; j < n ; j++ ){
      if(sortIp[j] == ip[x1]){
        break;
      }
      if(sortIp[j] == ip[x2]){
        break;
      }
    }*/
    x1 = lower_bound(sortIp.begin(),sortIp.end(),ip[x1]) - sortIp.begin();
    x2 = lower_bound(sortIp.begin(),sortIp.end(),ip[x2]) - sortIp.begin();

    if(x2 < x1){
      tmp = x1;
      x1 = x2;
      x2 = tmp;
    }
    itr = x1;
    
    //deb2(itr,x2);
    while(itr < x2){
      if(sortIp[itr + 1] - sortIp[itr] > k){
        cout<<"No"<<endl;
        break;
      }
      itr++;
    }
    //deb(itr);
    if(itr == x2){
      cout<<"Yes"<<endl;
    }
    //cout<<binSearch(ip,el,n);
  }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;

    solve();
  

    return 0;
}
