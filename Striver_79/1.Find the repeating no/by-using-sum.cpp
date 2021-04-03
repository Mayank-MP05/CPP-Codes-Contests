#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {1,2,3,4,4,3};
	int sum = 0,prod=1;
	int ls = 0,lp = 1;
	for(int i = 0 ; i < 6 ;i++ ){
		sum += arr[i];
		prod *= arr[i];
		if(i < 4){
			ls += (i+1);
			lp *= (i+1);
		}
	}
	int xplusy = sum - ls;
	int xintoy = prod / lp;
	
	int bothSq = xplusy * xplusy - 2 * xintoy;
	int xminusy = sqrt(bothSq - 2*xintoy);
	int x = (xplusy + xminusy)/2;
	int y = xplusy - x;
	cout<<x<<"\t"<<y;
	return 0;
}
