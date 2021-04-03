#include <bits/stdc++.h>
using namespace std;

int kadane_max(int arr[],int n){
	int max_global = 0 , max_local = 0;
	for(int i = 0 ; i < n ; i++ ){
		
		if(arr[i] >= arr[i-1] && i != 0)
			max_local += arr[i];
		else
		 	max_local = 0;
		 	
		if(max_local > max_global){
			max_global = max_local;
		}
		if(max_local < 0){
			max_local = 0;
		}
	} 
	return max_global;
}

int main(){
	int arr[6] = {2, 1, 4, 7, 3, 6};
	cout<<"Max sum of contigous subarray is : "<<kadane_max(arr,6)<<endl;
	return 0;
}
