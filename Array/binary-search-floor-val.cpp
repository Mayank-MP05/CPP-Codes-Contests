#include <bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
	for(int i = 0 ; i < n ; i++ ){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void binary_search_floor_val(int arr[],int n,int key){
	sort(arr,arr+n);
	int l = 0,r = n-1,mid;
	int diff,minDiff = arr[n-1] - arr[0] ,index;
	//cout<<minDiff<<endl;
	while(l <= r){
		mid = l + (r-l)/2;
		//Calculate diff of mid
		diff = key - arr[mid];
		//cout<<diff<<endl;
		if(diff < minDiff && diff >= 0){
			index = mid;
			minDiff = diff;
		}
		
		if(arr[mid] < key){
			l = mid + 1;
		}else{
			r = mid - 1;			
		}
	}
	cout<<index<<"	"<<arr[index]<<endl;
}
int main(){
	int arr[8] = {-1,2,3,5,6,8,9,10};
	sort(arr,arr+8);
	print(arr,8);
	binary_search_floor_val(arr,8,0);
	return 0;
}
