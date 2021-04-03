#include <bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
	for(int i = 0 ; i < n ; i++ ){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void binary_search_min(int arr[],int n,int key){
	sort(arr,arr+n);
	int l = 0,r = n-1,mid;
	while(l <= r){
		mid = l + (r-l)/2;
		if(arr[mid] == key){
			found = true;
			cout<<mid;
			break;
		}
		
		if(arr[mid] < key){
			l = mid + 1;
		}else{
			r = mid - 1;			
		}
		
	}
}
int main(){
	int arr[4] = {78,95,32,45};
	print(arr,4);
	binary_search_min(arr,4);
	return 0;
}
