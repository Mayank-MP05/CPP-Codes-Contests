#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll getCarVan(vector<ll> ip,int size){
	ll res = 1,minSoFar = ip[0];
	for(int i = 1 ; i < size ; i++){
		if(ip[i] < minSoFar){
			minSoFar = ip[i];
			res++;
		}
	}
	return res;
}

int main(){
	int t,n,el;
	vector<ll> ip,op;
	cin>>t;
	for(int i = 0 ; i < t ; i++ ){
		cin>>n;
		for(int j = 0 ; j < n;j++){
			cin>>el;
			ip.push_back(el);
		}
		op.push_back(getCarVan(ip,n));
		ip.clear();
	}
	for(int i = 0 ; i < t ; i++ ){
		cout<<op[i]<<endl;	
	}
	return 0;
}
/*
1
5
4	5	1	2	3	

*/
