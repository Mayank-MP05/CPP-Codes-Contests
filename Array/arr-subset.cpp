#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr1[5] = {12,13,14,15,16};
	int arr2[2] = {15,16};
	cout<<"Array 2 is subset of Array 1 - "<<isSubset(arr1,arr2,5,2);
	return 0;
}
