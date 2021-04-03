#include <bits/stdc++.h>
using namespace std;

int arr_reverse(int arr[],int n){
	int l = 0 , r = n -1;
	while(l <= r){
		int temp = arr[l];
		arr[l] = arr[r];
		arr[r] = temp;
		l++;
		r--; 
	}
}

int main(){
	int arr[5] = {12,13,14,15,16};
	arr_reverse(arr,5);
	int t = 4;
	for(int i = 0 ; i < 5
	 ; i++ ){
		cout<<arr[i]<<" ";
	}
	return 0;
}
