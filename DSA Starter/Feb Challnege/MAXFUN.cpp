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

void solve() {
  int i, j, n, m,el,diff;
  int Mn=INT_MAX,Mx=INT_MIN,MnIndex,MxIndex,d3=0,res = INT_MAX;
  cin>>n;
  vi ip;
  fo(i,n){
    cin>>el;
    ip.pb(el);
    if(el < Mn){
        Mn = el;
        MnIndex = i;
    }
    if(el > Mx){
        Mx = el;
        MxIndex = i;
    }
  }
    d3 = Mx - Mn;
    fo(i,n){
        if(i!=MnIndex or i!=MxIndex){
            diff = abs(ip[i] - ip[MnIndex]) + abs(ip[i] - ip[MxIndex]) + d3;
            if(diff < res){
                res = diff;
            }
        }
    }
    cout<<res<<endl;
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
