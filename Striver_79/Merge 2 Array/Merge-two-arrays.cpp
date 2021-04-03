#include<bits/stdc++.h>
using namespace std;

void printArr(int a1[],int a2[],int p,int q){
	cout<<"A1 = ";
	for(int i = 0 ; i < p ; i++ ){
		cout<<a1[i]<<" ";
	}
	cout<<endl;
	cout<<"A2 = ";
	for(int i = 0 ; i < q ; i++ ){
		cout<<a2[i]<<" ";
	}
	cout<<endl;
}

void mergeArr(int* a1,int *a2,int p,int q){
	for(int i = 0 ; i <= p-1 ;){
		cout<<"i = "<<i<<endl;
		printArr(a1,a2,p,q);
		if(a1[i] < a2[0]){
			i++;
		}
		else{
			int t = a1[i];
			a1[i] = a2[0];
			int j;
			int isLast = true;
			for(j = 0 ; j <= q-2 ; j++ ){
				if(a2[j+1] < t){
					a2[j] = a2[j+1];
				}else{
					a2[j] = t;
					isLast = false;
					break;
				}

			}
			if(isLast){
				a2[q - 1] = t;
			}
			i++;
		}
	}
}

int main(){
	int a1[] = {1,5,9,10,15,20};
	int a2[] = {2,3,8,13};
	printArr(a1,a2,6,4);
	mergeArr(a1,a2,6,4);
	printArr(a1,a2,6,4);
	
	int a3[] = {10};
	int a4[] = {2,3};
	printArr(a3,a4,1,2);
	mergeArr(a3,a4,1,2);
	printArr(a3,a4,1,2);
	return 0;
}
