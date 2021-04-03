#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long


void solve() {
  ll a,b,c;
  cin>>a>>b>>c;
  bool f = false;
  if(a == b+c || b == a+c || c == a+b){ 
    cout<<"YES"<<endl;
    return;
  }
  cout<<"NO"<<endl;
  return;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
