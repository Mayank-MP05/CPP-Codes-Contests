#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,m,el;
	vector<int> op;
	cin>>t;
	for(int i = 0 ; i < t ; i++){
		cin>>m;
		int arr[m];
		for(int j = 0 ; j < m ; j++ ){
			cin>>arr[j];
		}
		sort(arr,arr+m);
		vector<int> n1,n2;
		for(int j = 0 ; j < m ; j++ ){
			if(j%2 == 0){
				n1.push_back(arr[j]);
			}else{
				n2.push_back(arr[j]);
			}
		}
		// Get the Number
		int n1no,n2no;
		n1no = n2no = 0;
		for(int j = n1.size()-1 ; j >= 0 ; j-- ){	
			n1no += n1[n1.size() - j - 1] * pow(10,j);
		}
		for(int j = n2.size()-1 ; j >= 0 ; j-- ){	
			n2no += n2[n2.size() - j - 1] * pow(10,j);
		}
		//cout<<n1no<<"	"<<n2no<<endl;
		//Sum of the numbers 
		op.push_back(n1no + n2no);
	}
	//Output Show
	for(int i = 0 ; i < t ; i++){
		cout<<op[i]<<endl;
	}
	return 0;
}

