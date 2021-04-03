#include<bits/stdc++.h>
using namespace std;
#define mod9 1000000009
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

ll gcd(ll a, ll b);
ll power(ll x, unsigned ll y, unsigned ll m);

ll modInverse(ll a, ll m)
{
    ll g = gcd(a, m);
    if (g != 1)
        return 0;
    else
    {
        return power(a, m - 2, m);
    }
}
 
ll power(ll x, unsigned ll y, unsigned ll m)
{
    if (y == 0)
        return 1;
    ll p = power(x, y / 2, m) % m;
    p = (p * p) % m;
 
    return (y % 2 == 0) ? p : (x * p) % m;
}
 
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
ll bill(ll n){
    if(n == 1){
        return 0;
    }
    if(n == 2 || n == 3){
        return 1;
    }
    /*
    queue<ll> q;
    ll res=-1,p1,p2,mx = INT_MIN;
    q.push(0);
    q.push(1);
    q.push(1);
    for(ll i = 4 ; i <= n ; i++ ){
        p1 = q.front();
        q.pop();
        p2 = q.front();
        mx = 1 + max(p1,p2);
        if(mx > res){
            res = mx;
        }
        q.push(res);
    }*/
    ll z = (n * modInverse(2,mod9)) % mod9;
    return z;
}

void solve() {
  ll i, j, n, m;
  cin>>n;
  cout<<bill(n)<<endl;
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
