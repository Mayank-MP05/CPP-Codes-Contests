#include <bits/stdc++.h>
using namespace std;

int main(){
	int no;
	cin>>no;
	
	//Starts here
	int temp = no;
	int count = 0;
	while(temp /= 10){
		count++;
	}
	cout<<count+1;
	return 0;
}
