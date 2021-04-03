#include<bits/stdc++.h>
using namespace std;

int MP(int n,int prod=1,int *dp=NULL){
	if(dp[n] != -1)
		return dp[n];
	if(n == 1)
		return 1;
	if(n == 0)
		return prod;
	int ans = INT_MIN;
	for(int i = 1 ; i < n ; i++ ){
		//ans = max(ans,MP(n-i,INT_MIN,prod*i));
		int k = MP(n-i,prod*i,dp);
		if(ans < k*i){
			ans = k*i;
		}
	}
	dp[n] = ans;
	return dp[n];
} 

int MPutil(int n){
	n++;
	int dp[n+1];
	memset(dp,-1,sizeof(dp));
	dp[0] = 0;
	dp[1] = 1;
	return MP(n,1,dp);
}

int main(){
	cout<<MPutil(2)<<endl;
	cout<<MPutil(3)<<endl;
	cout<<MPutil(5)<<endl;
	cout<<MPutil(10)<<endl;
	cout<<MPutil(1005)<<endl;
	return 0;
}
