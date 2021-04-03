#include<bits/stdc++.h>
#define N 4
#define line cout<<"________________________";
using namespace std;

void print2DArr(int arr[N][N]){
    line;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i < n ;i++){
        for(int j = 0 ; j< n;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    line;
}

int knapSack(int W, int wt[], int val[], int n) 
{ 
  
    // Base Case 
    if (n == 0 || W == 0) 
        return 0; 
  
    // If weight of the nth item is more 
    // than Knapsack capacity W, then 
    // this item cannot be included 
    // in the optimal solution 
    if (wt[n - 1] > W) 
        return knapSack(W, wt, val, n - 1); 
  
    // Return the maximum of two cases: 
    // (1) nth item included 
    // (2) not included 
    else
        return max( 
            val[n - 1] 
                + knapSack(W - wt[n - 1],  
                           wt, val, n - 1), 
            knapSack(W, wt, val, n - 1)); 
} 

int main(){
    int t;
    cin>>t;
    for(int i = 0 ; i < t ; i++ ){}
    for(int i = 0 ; i < t ; i++ ){}
    return 0;
}