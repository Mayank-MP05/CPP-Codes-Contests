#include <bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
	for(int i = 0 ; i < n ; i++ ){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int kadane_algomax (int arr[], int n)  
{  
    
}  

int main(){
	int arr[8] = {-2, -3, 4, -1, -2, 1, 5, -3};
	print(arr,8);
	cout<<"Max sum in contigous sub-array : "<<kadane_algomax(arr,8);
	return 0;
}
