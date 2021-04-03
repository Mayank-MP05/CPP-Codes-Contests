#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long


void solve() {
	  ll n,k,el,i,NS = 0;
	  bool rej = false,slow=false,bot=true,accept = false;
	  
	  cin>>n>>k;
	  fo(i,n){
	  	cin>>el;
	  	if(el == -1){
	  		NS++;
	  		if(NS > ceil(n/2)){
				rej = true;  
			}
			bot = false;
		}
		
		if(el > k){
			slow = true;
		}
		
		if(el != 0 && el != 1){
			bot = false;
		}
		
	  }
	if(rej){
		cout<<"REJECTED"<<endl;
	}else if(slow){
		cout<<"TOO SLOW"<<endl;
	}else if(bot){
		cout<<"BOT"<<endl;
	}else{
		cout<<"ACCEPTED"<<endl;
	}
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}

