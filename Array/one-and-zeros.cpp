#include <bits/stdc++.h>
using namespace std;
/*
void swap(int* a,int* b){
	int* t = a;
	a = b;
	b = t;
}
*/
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
	while(m <= h){
		switch(arr[m]){
			case 0:
			swap(arr[l],arr[m]);
			l++;
			m++;
			break;
			
			case 1:
			m++;
			break;
			
			case 2:
			swap(arr[h],arr[m]);
			h--;
			break;	
		}
	}
	for(int i = 0 ; i < t ; i++ ){
		cout<<arr[i]<<' ';
	}
	return 0;
}
