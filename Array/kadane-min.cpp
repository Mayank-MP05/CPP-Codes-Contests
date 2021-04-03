#include <bits/stdc++.h>
using namespace std;

int kadane_max(int arr[],int n){
	int max_global = 0 , max_local = 0;
	for(int i = 0 ; i < n ; i++ ){
		max_local += arr[i];
		if(max_local < max_global){
			max_global = max_local;
		}
		if(max_local > 0){
			max_local = 0;
		}
	} 
	return max_global;
}

int main(){
	int arr[5] = {12,13,-14,-15,16};
	cout<<"Max sum of contigous subarray is : "<<kadane_max(arr,5)<<endl;
	return 0;
}
