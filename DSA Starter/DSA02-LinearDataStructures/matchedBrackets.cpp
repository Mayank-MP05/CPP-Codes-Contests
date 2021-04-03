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

void solve() {
    ll n,i,el,o = 0,depth=-1,start=0,b=0,len,mxLen = -1,d=0;
    cin>>n;
    fo(i,n){
        cin>>el;
        if(el == 1) o++;
        else o--;
        if(o > depth){ depth = o;b = i; }
        if(o == 0){
            len = i - start + 1;
            if(len > mxLen){
                mxLen = len;
                d = start;
            }
            start = i + 1;
        }
        //deb(start);
    }    
    cout<<depth<<" "<<b+1<<" "<<mxLen<<" "<<d+1<<endl;
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