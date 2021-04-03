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

typedef pair<int, int>  pii;
typedef pair<ll, ll>    pl;
typedef vector<int>     vi;
typedef vector<ll>      vl;
typedef vector<pii>     vpii;
typedef vector<pl>      vpl;
typedef vector<vi>      vvi;
typedef vector<vl>      vvl;

void solve() {
    ll k, d0, d1, i, digit;
    cin >> k >> d0 >> d1;
    ll sum = d0 + d1;
    for (i = 2 ; i < k ; i++ ) {
        digit = sum % 10;
        if (digit == 0) {
            sum = 0;
            break;
        }
        if (digit % 2 == 0 && !((k - i) / 4 == 0)) {

            sum += floor((k - i) / 4) * 20;
            i += floor((k - i) / 4) * 4;

        } else {
            sum += digit;
        }

        deb2(digit, sum);
    }
    /*
    sum+=digit;
    deb2(digit,sum);
    */
    if (sum % 3 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return;
}

int main() {
#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
