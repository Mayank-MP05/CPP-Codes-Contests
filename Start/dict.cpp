#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,el,index;
	cin>>t;
	vector<vector<int>> vc;
	vector<vector<int>> op;
	while(t--){
		cin>>n;
		int m = n;
		index = 0;
		int ar1[n],ar2[n],ans[n];

	    while(m--){
	    	cin>>el;
	    	vc[n-m].push(el);
	    	/*
	    	ar1[index] = el;
	    	ar2[index] = index+1;
	    	*/
			index++;
		}
		
		for(int j = 0;j < n;j++){
			ans[ar1[j] - 1] = j+1;
			vc[n-m][n-m]
		}
		
		for(int j = 0;j < n;j++){
			cout<<ans[j]<<" ";
		}
	}
	return 0;
}

