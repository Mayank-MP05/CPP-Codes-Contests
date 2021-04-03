#include <bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
	for(int i = 0 ; i < n ; i++ ){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int fixed_point(int arr[],int n){
	int l = 0,r = n-1,mid;
	while(l <= r){
		mid = l + (r-l)/2;
		if(arr[mid] == mid){
			return arr[mid];
		}
		
		if(arr[mid] < mid){
			l = mid + 1;
		}else{
			r = mid - 1;			
		}
	}
	return -1;
}
int main(){
	int arr[6] = {-10, -5, 3, 4, 7, 9};
	print(arr,6);
	cout<<"\nFixed point is at index "<<fixed_point(arr,6)<<endl;
	return 0;
}
