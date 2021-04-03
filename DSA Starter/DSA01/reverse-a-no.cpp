#include<bits/stdc++.h>
using namespace std;

int ReverseNo(int no){
	int tmp = no,mod = 0;
	while(tmp > 0){
		mod = mod*10 + tmp%10;
		tmp = tmp/10;
	}
	return mod;
}

int main(){
	int t;
	int s,x;
	vector<int> op;
	cin>>t;
	for(int i = 0 ; i < t;i++ ){
		cin>>s;
		op.push_back(ReverseNo(s));
	}
	for(int i = 0 ; i < t;i++ ){
		cout<<op[i]<<endl;
	}
	return 0;
}
