
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

int hammingWeight(uint32_t n) {
    int i = 0;
    while(n >>= 1){
        if(n&1){
            i++;
        }
    }
    return i;
}


void solve() {
    cout<<hammingWeight(10011000000000000000000000000000)<<endl;
    cout<<hammingWeight(11111111111111111111111111111101)<<endl;
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

10
<<<>>>
<><><<>>>
><><<>>>>
<<><>>
><><<><
<>><<>>
><><<><><
<<>>
><
<>>>


()(())()(()())(()())
*/