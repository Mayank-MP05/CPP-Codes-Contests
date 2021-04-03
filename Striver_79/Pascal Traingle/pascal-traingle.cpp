#include<bits/stdc++.h>
using namespace std;
/*
void printSoln(int *a,int n){
	for(int i = 0 ; i < n; i++ ){
		for(int j = 0 ; j < n ; j++ ){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

*/
void pascalize(int *a,int n){

}

int main(){
	int n;
	cin>>n;
	int arr[n][n];
	memset(arr,0,sizeof(arr));
	int_32t
	//printSoln(&arr[0][0],n);
	for(int i = 0 ; i < n; i++ ){
		for(int j = 0 ; j < n ; j++ ){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	//Pascalize
	for(int i = 0 ; i < n ; i++ ){
		arr[i][0] = 1;
	}
	for(int i = 1 ; i < n ; i++ ){
		for(int j = 1 ; j < i+1 ; j++ ){
			arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
		}
	}
		//printSoln(&arr[0][0],n);
	for(int i = 0 ; i < n; i++ ){
		for(int j = 0 ; j < n ; j++ ){
			if(arr[i][j] != 0) 
				cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
