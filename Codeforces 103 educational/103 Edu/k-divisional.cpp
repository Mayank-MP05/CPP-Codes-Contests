#include<bits/stdc++.h>
#define ll long long

using namespace std;

int KDivN(int k,int n){
	//cout<<"n = "<<n<<" k = "<<k<<" ans = "<<ceil(n/k)<<endl;
	//cout<<n/k<<endl;
	if(n <= k){
		return ceil((double)k/(double)n);
	}else{
		k = ceil((double)n/(double)k) * k;
		return ceil((double)k/(double)n);
	}
}

int main(){
	int t;
	int k,n;
	vector<int> op;
	cin>>t;
	for(int i = 0 ; i < t ;i++ ){
		cin>>n>>k;
		op.push_back(KDivN(k,n));	
	}
	for(int i = 0 ; i < t ;i++ ){
		cout<<op[i]<<endl;
	}
	return 0;
}
/*

4
1 5
4 3
8 8
8 17
*/
