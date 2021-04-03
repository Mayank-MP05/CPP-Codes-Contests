#include <bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
	for(int i = 0 ; i < n ; i++ ){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void merge(int arr[],int l , int m ,int r){
	int n1 = m - l + 1;
    int n2 = r - m;
 
    // Create temp arrays 
    int L[n1], R[n2];
 
    // Copy data to temp arrays L[] and R[] 
    for(int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    // Merge the temp arrays back into arr[l..r]
     
    // Initial index of first subarray
    int i = 0; 
     
    // Initial index of second subarray
    int j = 0; 
     
    // Initial index of merged subarray
    int k = l;
     
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j]) 
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    // Copy the remaining elements of
    // L[], if there are any 
    while (i < n1) 
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    // Copy the remaining elements of
    // R[], if there are any 
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[],int l,int r){
	int m;
	if(l < r){
		m = l + (r-l)/2;
		merge_sort(arr,l,m);
		merge_sort(arr,m+1,r);
		merge(arr, l, m, r);
	}
}
int main(){
	int arr[6] = {-10, -5, 7,9,5, 9};
	print(arr,6);
	cout<<"After Sorting : ";
	merge_sort(arr,0,5);
	print(arr,6);
	return 0;
}
