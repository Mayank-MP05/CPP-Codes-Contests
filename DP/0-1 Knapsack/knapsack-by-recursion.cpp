#include<bits/stdc++.h>
using namespace std;

int KS(int wt[],int val[],int i,int n,int wtSum,int valSum,int cap){
	cout<<"[*] Call at i = "<<i<<" wtSum = "<<wtSum<<" valSum = "<<valSum<<endl;
	if(wtSum + wt[i] > cap)
		return KS(wt,val,i+1,n,wtSum,valSum,cap);
	if(i == n) return valSum;
	return max(KS(wt,val,i+1,n,wtSum,valSum,cap),KS(wt,val,i+1,n,wtSum+wt[i],valSum+val[i],cap));
}

int main(){
	int wt[] = {10,20,30},val[] = {60,100,120};
	cout<<KS(wt,val,0,3,0,0,50);
	return 0;
}
