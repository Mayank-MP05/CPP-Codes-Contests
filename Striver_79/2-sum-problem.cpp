#include<bits/stdc++.h>
using namespace std;

void print(int *arr,int n){
	for(int i = 0 ; i < n ; i++){
		cout<<arr[i]<<"	";
	}
	cout<<endl;
}

void printSumPairs(int *arr,int n,int t){
	sort(arr,arr+n);
	print(arr,n);
	int l = 0, h = n-1,sum;
	while(l < h){
		sum = arr[l] + arr[h];
		if(sum < t){
			l++;
		}else if(sum > t){
			h--;		
		}else{
			cout<<"Lowerr = "<<arr[l]<<" Higher = "<<arr[h]<<endl;
			l++;
			h--;
		}
	}	
}

int main(){
	int arr[] = { 12,3,4,1,6,9 };
	print(arr,6);
	printSumPairs(arr,6,13);
	return 0;
}
