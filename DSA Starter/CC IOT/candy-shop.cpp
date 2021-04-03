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

bool candySum(vl ip,ll sum,ll i,ll n){
    if(i == n){
        if(sum == 0){
            return true;
        }else{
            return false;
        }
    }
    //deb2(sum,i);
    if(sum == 0){
        return true;
    }
    if(sum < 0){
        return false;
    }
    return candySum(ip,sum - ip[i],i+1,n) or candySum(ip,sum,i+1,n);
}

void solve() {
  ll i, j, n, m,el;
  vl ip;
  ll sum = 0;
  cin>>n;
  fo(i,n){
      cin>>el;
      ip.push_back(el);
        sum+=el;
  }
  if(sum&1){
      cout<<"Not Impressed"<<endl;
      return;
  }else{
      if(candySum(ip,sum/2,0,n)){
          cout<<"Impressed"<<endl;
      }else{
          cout<<"Not Impressed"<<endl;
      }
  }

}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    solve();
    

    return 0;
}
