#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long


void solve() {
	ll n,ZeroD = 0,OneD = 0,i,low,high,diffSeq;
	cin>>n;
	string str;
	cin>>str;
	ll ZeroArr[n],OneArr[n];
	fo(i,n){
		if(str[i] == '0'){
			OneD++;
		}else{
			ZeroD++;
		}
		ZeroArr[i] = ZeroD;
		OneArr[i] = OneD;
	}
	diffSeq = INT_MAX;
	for(i = 0 ; i <= n-1 ; i++ ){
		low = ZeroArr[i];
		high = OneD - OneArr[i];
		if(low + high < diffSeq)
			diffSeq = low + high;
	}
	ll m1 = min(OneD,ZeroD);
	ll m2 = min(m1,diffSeq);
	cout<<m2<<endl;
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


