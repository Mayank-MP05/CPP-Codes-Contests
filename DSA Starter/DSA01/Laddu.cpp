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
    ll activities,rank,severity,perDayDrawn;
    string indian,contestWin,contributor,bugFound,contestHost,str;

    ll totalLaddus = 0;
    cin>>activities;
    cin>>indian;
    if(indian == "INDIAN")
        perDayDrawn = 200;
    else
        perDayDrawn = 400;
   // deb(activities);
    while(activities--){
        cin>>str;

        if(str == "CONTEST_WON"){
            totalLaddus += 300;
            cin>>rank;
            if(rank < 20){
                totalLaddus += (20 - rank);
            }   
        }else if(str == "TOP_CONTRIBUTOR"){
            totalLaddus += 300;
        }else if(str == "BUG_FOUND"){
            cin>>severity;
            totalLaddus += severity;
        }else if(str == "CONTEST_HOSTED"){
            totalLaddus += 50;
        }
        
      
    }
    
    cout<<floor(totalLaddus/perDayDrawn)<<endl;
    return;
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
