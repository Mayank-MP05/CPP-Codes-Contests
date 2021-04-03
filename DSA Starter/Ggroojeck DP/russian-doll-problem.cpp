#include <bits/stdc++.h>
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


bool cmpr(vector<int> v1,vector<int> v2){
    if(v1[0] < v2[0]) return true;
    if(v1[0] == v2[0] and v1[1] < v2[1]) return true;
    return false;
}

int maxEnvelopes(vector<vector<int> >& envelopes) {
    vector<vector<int> > e = envelopes; 
    int i;
    int n = e.size();
    //Part A - Sorting Logic
    sort(e.begin(),e.end(),cmpr);
    
    for(int i = 0 ; i < n ; i++ ){
        cout<<"{ "<<e[i][0]<<" "<<e[i][1]<<" },"<<endl;
    }


    //Part B - DP Logic
    int LIS[n+1];
     vi zeros{ INT_MIN,INT_MIN };
    vector<vector<int> > mx(n+1,zeros);
    fo(i,n+1){
        LIS[i] = 1;
    }
    LIS[0] = 0;
  
    debArr(LIS,n+1);


    for(int i = 1 ; i <= n ; i++ ){
        for(int j = 0 ; j < i ; j++ ){
            deb2(i,j);
            vi v1 = e[i-1],localMx = mx[j];
            deb2(v1[0],localMx[0]);
            deb2(v1[1],localMx[1]);
            if(v1[0] > localMx[0] and v1[1] > localMx[1] ){
                if(LIS[i] < LIS[j] + 1){
                    LIS[i] = LIS[j] + 1;
                }
                mx[i] = v1;
                deb2(mx[i][0],mx[i][1]);
            }
            line;
        }
            line;
            line;
            line;
    }
    debArr(LIS,n+1);
    return *max_element(LIS,LIS+n+1);
}

void solve() {
  int i, j, n=3, m;
  int arr[][2] = {{5,4},{6,4},{6,7},{2,3}};
  vector<vector<int> > v;

  
  for(int i = 0 ; i < n ; i++ ){
    vector<int> vxx(2);
      vxx[0] = arr[i][0];
      vxx[1] = arr[i][1];

      v.push_back(vxx);
  }
  /*
for(int i = 0 ; i < n ; i++ ){
    cout<<"{ "<<arr[i][0]<<" "<<arr[i][1]<<" },"<<endl;
}*/
    cout<<maxEnvelopes(v);
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;

      solve();


    return 0;
}

