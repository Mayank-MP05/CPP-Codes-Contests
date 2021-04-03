#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {1,2,3,4,3};
	int z = 0;
	
	for(int i = 0 ; i < 50 ;i++ ){

		z = i ^ z;
		cout<<"i = "<<i<<"\t z = ";
		cout<<z<<endl;
	}
	return 0;
}
