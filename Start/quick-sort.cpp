#include <bits/stdc++.h>
using namespace std;
void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  
  
int partition (int arr[], int low, int high)
{
    // pivot (Element to be placed at right position)
    int pivot = arr[high];  
 
    int i = (low - 1) ; // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);  
        }
    }
    swap(&arr[i+1], &arr[high]);  
    return (i + 1);
}

void quicksort(int arr[] , int l ,int r){
	if (l < r)
    {
        int pi = partition(arr, l, r);

        quicksort(arr, l, pi - 1);  // Before pi
        quicksort(arr, pi + 1, r); // After pi
    }
}

int main(){
	int t,n;
	cin>>t;
	int arr[t];
	for(int i = 0 ; i < t ;i++){
		cin>>arr[i];
	}
	cout<<endl;
	
	quicksort(arr,0,t-1);
	
	for(int i = 0 ; i < t ;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

