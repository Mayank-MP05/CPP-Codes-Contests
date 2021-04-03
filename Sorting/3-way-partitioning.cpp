#include <bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
	for(int i = 0 ; i < n ; i++ ){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

// A utility function to swap two elements  
void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  

int partition (int arr[], int low, int high)  
{  
    int pivot = arr[high]; // pivot  
    int i = (low - 1); // Index of smaller element  
  
    for (int j = low; j <= high - 1; j++)  
    {  
        // If current element is smaller than the pivot  
        if (arr[j] < pivot)  
        {  
            i++; // increment index of smaller element  
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}  

void quickSort(int arr[], int low, int high)  
{  
    if (low < high)  
    {  
        /* pi is partitioning index, arr[p] is now  
        at right place */
        int pi = partition(arr, low, high);  
  
        // Separately sort elements before  
        // partition and after partition  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}  
 
void Threeway(int arr[]){
	
}

int main(){
	int arr[13] = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
	print(arr,13);
	cout<<"After 3 way partitioning : ";
	Threeway(arr,0,12);
	print(arr,13);
	return 0;
}
