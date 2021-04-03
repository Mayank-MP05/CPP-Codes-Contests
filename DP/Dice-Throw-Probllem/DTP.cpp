#include<bits/stdc++.h>
using namespace std;
int DTP(int n,int m,int sum,int nptr=0,int mptr=1){
	if(sum == 0){
		return 1;
	}

	int ways = 0;
	for(int i = 0 ; i < n ; i++ ){
		for(int j = 1 ; j <= min(m,sum); j++ ){
			ways += DTP(n,m,sum - j,i,j);
		}
	}
	return ways;
}

int main(){
	cout<<DTP(2,6,2);
	return 0;
}
