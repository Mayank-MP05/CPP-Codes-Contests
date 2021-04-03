// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

void print(int arr[],int n){
	for(int i = 0 ; i < n ;i++ ){
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
}

// Function to find the two repeated element
// arr: input array
// N: denoting that the size of array is N + 2 and range of elements is [1, N]
pair<int,int> twoRepeated (int arr[], int N)
{
    int x,y;
    x = -1;
    y = -1;
    bool isSecond = false;
    for(int i = 0 ; i < N+2 ; i++){
    	cout<<"i = "<<i<<endl;
    	print(arr,N+2);
   		int temp = abs(arr[i]);

        if(arr[temp] > 0){
            arr[temp] = -arr[temp];
        }else{
            if(isSecond){
                y = abs(arr[temp]);
            }else{
                x = abs(arr[temp]);
                isSecond = true;
                cout<<x<<endl;
            }
        }
    }
        if(x == y){
        if(arr[0] == arr[N+1]){
            pair<int, int> p;
            p.first = x;
            p.second = arr[0];
            return p;
        }
    }
    if(x != -1 && y != -1){
        pair<int, int> p;
        p.first = x;
        p.second = y;
        return p;
    }

    pair<int, int> p;
    p.first = x;
    p.second = y;
    return p;
}

// { Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        pair<int , int>res;
        res = twoRepeated(a, n);
        cout<<res.first<<" "<<res.second<<endl;
    }
    return 0;
}
  // } Driver Code Ends
