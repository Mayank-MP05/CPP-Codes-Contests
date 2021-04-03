#include <bits/stdc++.h>
using namespace std;

void print(int arr[][3],int t){
	for(int i = 0 ; i < t ; i++){
		for(int j = 0 ; j < t ; j++ ){
			cout<<arr[i][j]<<"	";
		}
		cout<<endl;
	}
	cout<<endl;
}

void rotateBy90(int arr[][3],int t){
	for(int i = 0 ; i < t ; i++){
		for(int j = 0 ; j < i+1 ; j++ ){
			swap(arr[i][j],arr[j][i]);
		}
	}
}

int main(){
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	print(arr,3);
	rotateBy90(arr,3);
	print(arr,3);
	return 0;
}
