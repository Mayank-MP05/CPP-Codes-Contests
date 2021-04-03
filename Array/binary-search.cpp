#include <bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
	for(int i = 0 ; i < n ; i++ ){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int partition(int arr[] , int l ,int r){
	int pivot = arr[r];
	for(int i = l ; i < r ; i++ ){
		if (arr[j] <= x) { 
            swap(&arr[i], &arr[j]); 
            i++; 
        } 
	}
	 swap(&arr[i], &arr[r]); 
}
void swap(int* a,int* b){
	int* tmp = a;
	a = b;
	b = tmp;
}

void quick_sort(int arr[],int l,int r){
	while(l <= r){
		int pi = partition(arr,l,r);
		quick_sort(arr,l,pi);
		quick_sort(arr,pi+1,r);
	}
}

int main(){
	int arr[4] = {78,95,45,32};
	print(arr,4);
	quick_sort(arr,arr+4);
	print(arr,4);
	return 0;
}
