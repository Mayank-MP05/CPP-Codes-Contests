#include <bits/stdc++.h>
using namespace std;

int getBox(int m,int n){
	int ans;
	if(!(m&1) && !(n&1)){
		ans = m*n/2;
	}else if((m&1) && !(n&1)){
		ans = (m-1)*(n)/2 + n/2;
	}else if(!(m&1) && (n&1)){
		ans = (n-1)*(m)/2 + m/2;
	}else{
		ans = (m-1)*(n-1)/2 + (n-1)/2 + (m-1)/2;
	}
	return ans;
}

int main(){
    int t,m,n;
    vector<int> op;
    cin>>t;
    for(int i = 0 ; i < t ; i++ ){
		cin>>m>>n;
		op.push_back(getBox(m,n));
	}
    for(int i = 0 ; i < t ; i++ ){
		cout<<op[i]<<endl;
	}
	return 0;
}
