#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long


void solve() {
 	ll n,el,k,i,j;

	cin>>n>>k;
	vector<ll> arr(n,-1);
	vector<ll> ip;
	
	fo(i,n){
		cin>>el;
		ip.push_back(el);
	  	if(el%k==0){
	  		arr[i] = el;
		}
	}
	bool check = false;
	fo(i,n){
		//cout<<"[OUT] i = "<<i<<" j =  "<<j<<endl;
		if(arr[i]==-1){
			check = false;
			for(j=0;j<n;j++){
				//cout<<"sum = "<<ip[i] + ip[j]<<endl;
				if((ip[i] + ip[j])%k == 0){
					arr[i] = i;
					arr[j] = j;
					check = true;
					break;
				}
			}
			//cout<<"[IN] i = "<<i<<" j =  "<<j<<endl;
			if(j == n  && check == false){
				cout<<"NO"<<endl;
				return;
			}
		}
	}
	cout<<"YES"<<endl;
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


