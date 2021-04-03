#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define debArr(a,n) for(int z=0;z<n;z++){ cout<<a[z]<<" "; } cout<<endl;
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

int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> LIS(n+1,0),mx(n+1,-1);
        LIS[0] = 0;
        mx[0] = INT_MIN;
        for(int i = 1;i<=n;i++){
            for(int j = 0 ; j < i ; j++ ){
                if(nums[i-1] > mx[j] and LIS[i] < LIS[j] + 1){
                    LIS[i] = LIS[j] + 1;
                    mx[i] = nums[i-1];
                }
            }
        }
        debArr(LIS,n+1);
        debArr(mx,n+1);
        return LIS[n];
    }

void solve() {
    int v[] = { 1,3,6,7,9,4,10,5,6 };
    vi vec(v,v+9);
    cout<<lengthOfLIS(vec);
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 0;
    //cin >> t;
   
      solve();
   

    return 0;
}

