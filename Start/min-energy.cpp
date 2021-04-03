#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,m,el;
	vector<int> op;
	cin>>t;
	for(int i = 0 ; i < t ; i++ ){
		cin>>m;
		int arr[m];
		for(int j = 0 ; j < m ; j++){
			cin>>arr[j];
		}
		int min = arr[0],index = 0;
		//Get the minimum
		for(int j = 0 ; j < m ; j++){
			if(arr[j] < min){
				min = arr[j];
				index = j;
			}
		}
		//cout<<"Min : "<<min<<endl;
		//Sum to min-index
		int sum = 0;
		for(int k = 0 ; k <= index ; k++ ){
			sum += arr[k];
		}
		//cout<<"Sum : "<<sum<<endl;
		if(sum < 0){
			sum-=1;
			op.push_back(-sum);
		}else{
			op.push_back(1);
		}
	}
	//Output 
	for(int i = 0 ; i < t ; i++ ){
		cout<<op[i]<<endl;
	}
	return 0;
}
