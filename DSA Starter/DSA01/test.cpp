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
    ll k,d0,d1,i,digit;
    cin>>k>>d0>>d1;
    ll sum = d0 + d1;
    for(i = 2 ; i < k ; i++ ){
        digit = sum%10;
        if(digit == 0){
            break;
        }
        if(digit%2 == 0){
            if((k-i)/4 == 0){
                sum+=digit;
            }else{
                sum += ((k-i)/4) * 20;
                i = i+((k-i)/4) * 4;
            }
        }else{
            sum+=digit;
        }

        deb2(digit,sum);
    }
    if(sum%3 == 0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    ll sum = sum=3801996921112;
    cout<<sum%3<<endl;
    return 0;
}
