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

class TimeBlock
{
    public:
    int hr,mn;
    bool isAM;
    TimeBlock(){
        hr = 0;
        mn = 0;
        isAM = true;
    }
    TimeBlock(int h,int m,int am){
        hr = h;
        mn = m;
        isAM = am;
    }
    void print(){
        cout<<"Hr : "<<hr<<" ";
        cout<<"Mn : "<<mn<<" ";
        cout<<"IsAM : "<<isAM<<endl;
    }
};

TimeBlock parser(string s1,string s2){
    bool isAM;
    string hr = s1.substr(0,2);
    string mn = s1.substr(3,5);
    if(s2 == "AM"){
        isAM = true;
    }else{
        isAM = false;
    }
    TimeBlock t1(stoi(hr),stoi(mn),isAM);
    return t1;
}

bool comparator(TimeBlock t1,TimeBlock t2){
    if(t1.isAM == false and t2.isAM == true){
        return false;
    }else if(t1.isAM == t2.isAM){
        if(t1.hr == t2.hr){
            if(t1.mn <= t2.mn){
                return true;
            }
        }else if(t1.hr < t2.hr){
            return true;
        }else{
            return false;
        }
    }else{
        return true;
    }
}

void solve() {
  int i, j, n, m;
  string s1,s2,res;
  res = "";
  cin>>s1>>s2;
  TimeBlock t2 = parser(s1,s2);
  //t2.print();  
  cin>>m;
  fo(i,m){
        cin>>s1>>s2;
        TimeBlock t1 = parser(s1,s2);
        //t1.print();
        t2.print();
        cin>>s1>>s2;
        TimeBlock t3 = parser(s1,s2);
        //t3.print();
        deb2(comparator(t1,t2), comparator(t2,t3));
        if(comparator(t1,t2) and comparator(t2,t3)){
            res += '1';
        }else{
            res += '0';
        }
        line;
  }
  cout<<res<<endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin>>t;
    while(t--){
      solve();
    }

    return 0;
}
