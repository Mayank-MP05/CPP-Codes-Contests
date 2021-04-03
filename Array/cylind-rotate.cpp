#include<bits/stdc++.h>
using namespace std;

void cylindra_rotate(vector<int> arr , int n){
    int last = arr[n-1];
    for(int i = n-2 ; i > 0 ; i-- ){
        arr[i+1] = arr[i];
    }
    arr[0] = last;
}
int main(){
	int t,m,el;
	cin>>t;
	vector<vector<int> > op;
	for(int i = 0 ; i < t ; i++ ){
	    cin>>m;
	    for(int j = 0 ; j < m ; j++ ){
	        cin>>el;
			op[i].push_back(el);
	    }
	    //cylindra_rotate(op[i],m);
	}
	for(int i = 0 ; i < t ; i++ ){
	    int m = op[i].size();
	    for(int j = 0 ; j < m ; j++ ){
	        cout<<op[i][j]<<" ";
	    }
        cout<<endl;
	}
	return 0;
}
