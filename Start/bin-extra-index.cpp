// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int findExtra(int a[], int b[], int n);
int recursiveCall(int a[],int b[],int l,int r);
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        cout << findExtra(a, b, n) << endl;
    }
}// } Driver Code Ends


/*Complete the function below*/
int findExtra(int a[], int b[], int n) {
    return recursiveCall(a,b,0,n-1);
}

int recursiveCall(int a[],int b[],int l,int r){
    while (l <= r) { 
        int m = l + (r - l) / 2; 

        if (a[m] == b[m]){
        	l = m+1;
		} else{
			r = m - 1; 
		}
		if(a[m] < b[m]){
			return --m;
		}
    }
  
    return -1;
}

/*
2
7
2       4       6       8       9       10      12
2       4       6       8       10      12
6
3 		5		7		9		11		13
3 		5		7		11		13

*/
