#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int arr[t];
	for(int i = 0 ; i < t ; i++ ){
		cin>>arr[i];
	}
	int l,m,h;
	l = m = 0;
	h = t -1;
	while(l <= h){
		if(arr[l] < 0){
			l++;
		}else{
			if(arr[h] > 0){
				h--;
			}else{
				swap(arr[l],arr[h]);
			}
		} 
	}
	for(int i = 0 ; i < t ; i++ ){
		cout<<arr[i]<<' ';
	}
	return 0;
}
