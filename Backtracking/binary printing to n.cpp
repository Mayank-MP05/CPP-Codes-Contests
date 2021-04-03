#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string str;
	cin>>n;
	while(n > 0){
		str += to_string(n%2);
		n=n/2;
	}
	sort(str.begin(),str.end());
	cout<<str;
	return 0;
}
