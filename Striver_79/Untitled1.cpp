#include<bits/stdc++.h>
using namespace std;

int binSearch(int arr[],int k,int l,int h,int n){
	if(l <= h){
		int mid = ( l + h ) / 2;
		cout<<"l = "<<l<<"mid= "<<mid<<"h = "<<h<<endl;
		if(arr[mid] < k)
			if(mid == n-1 or arr[mid+1] > k)
				return arr[mid+1];
		
		if(arr[mid] > k){
			return binSearch(arr,k,l,mid-1,n);
		}else{
			return binSearch(arr,k,mid+1,h,n);
		}
		return -1;
	}
}

int justLarger(int arr[],int n,int k){
	return binSearch(arr,k,0,n-1,n);
}

int main(){
	int arr[] = { 1 , 4,7,9,20};
	cout<<"Just Larger than 8 is "<<justLarger(arr,5,8)<<endl;
	cout<<"Just Larger than 22 is "<<justLarger(arr,5,22)<<endl;
	/*
	cout<<"Just Larger than 2 is "<<justLarger(arr,5,2)<<endl;
	cout<<"Just Larger than 0 is "<<justLarger(arr,5,0)<<endl;
	cout<<"Just Larger than 10 is "<<justLarger(arr,5,10)<<endl;
	cout<<"Just Larger than 5 is "<<justLarger(arr,5,5)<<endl;
	*/
	return 0;
}
