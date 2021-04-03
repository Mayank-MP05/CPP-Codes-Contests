#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int arr[t][t];
	for(int i = 0 ; i < t ; i++ ){
		for(int j = 0 ; j < t ; j++ ){
			cin>>arr[i][j];
		}
	}
	for(int i = 0 ; i < t ; i++ ){
		for(int j = 0 ; j < t ; j++ ){
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
			cout<<endl;		cout<<endl;
	int n = t;
	for(int i = 0 ; i < t/2 ; i++ ){
		for(int j = i ; j < n-i-1 ; j++ ){
			int p = arr[i][j];
			int q = arr[j][n-i-1];
			int r = arr[n-i-1][n-j-1];
			int s = arr[n-j-1][i];
			cout<<p<<" "<<q<<" "<<r<<" "<<s<<endl;
			/*
			arr[i][j] = arr[j][n-i-1];
			arr[j][n-i-1] = arr[n-i-1][n-i-j-1];
			arr[n-i-1][n-i-j-1]  = arr[i][n-i-j-1];
			arr[i][n-i-j-1] = p; 
			*/
			//cout<<p<<" ";
		}
	}
			cout<<endl;		cout<<endl;
	for(int i = 0 ; i < t ; i++ ){
		for(int j = 0 ; j < t ; j++ ){
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
	return 0;
}

/*

4
1       2       3       4
5       6       7       8
9       10      11      12
13      14      15      16

*/
