#include <bits/stdc++.h>
using namespace std;
void print(int arr[],int t){
	int i = 0;
	while(i < t){
		cout<<arr[i]<<" ";
		i++;
	}
	cout<<endl;
}

int partition(int arr[],int l, int h){
	int pivot = arr[l];
	int i = l , j = h-1;
	cout<<"Pivot : "<<pivot<<endl<<endl;
	while(i < j){
		while(arr[i] <= pivot){
			i++;
		}
		while(arr[j] >= pivot){
			j--;
		}
		if(i < j)
			swap(arr[i],arr[j]);
	}
	swap(arr[j],arr[l]);
	cout<<"Partion - "<<j<<endl;
	return j;
}

void quicksort(int arr[],int l,int h){
	if(l < h){
		cout<<"Array = ";
		print(arr,5);
	
		int j = partition(arr,l,h);
		
		quicksort(arr,l,j-1);
		quicksort(arr,j+1,h);
	}
}


int main(){
	int arr[5] = {15,12,45,26,98};
	quicksort(arr,0,4);
	print(arr,5);
	return 0;
}
