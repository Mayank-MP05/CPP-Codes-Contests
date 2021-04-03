#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long


void solve() {
  ll n,el,i,eC,oC;
  eC = 0;
  oC = 0;
  cin>>n;
  fo(i,n){
  	cin>>el;
  	if(el&1){
  		oC++;
	}else{
		eC++;
	}
  }
  	if(oC&1){
  		cout<<"2"<<endl;
	  }else{
	  	cout<<"1"<<endl;
	  }
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

