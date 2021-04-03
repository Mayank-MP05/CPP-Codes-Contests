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
  ll i, j,el, n, m,sum =0;
    cin>>n;
    vl ip;
    fo(i,n){
        cin>>el;
        ip.push_back(el);
    }
    int dp[n];
    dp[0] = 1;
    for(int i = 0 ; i < n;i++){
        dp[i] = 1;
    }
    //debArr(dp,n);
    for(int i = 1; i < n;i++ ){
        for(j = 0;j < i;j++){
            if(ip[j] == ip[i] - 1 or ip[j] == ip[i]){
                dp[i]++;
            }
        }
    }
    //debArr(dp,n);
    for(int i = 0 ; i < n; i++ ){
        sum += dp[i];
    }
    cout<<sum<<endl;
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
