#include<bits/stdc++.h>
using namespace std;

vector<int> formatArray(vector<int> a,int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		vector<int>  b;
		b=formatArray(a,n);
		int flag=1;
		if(b.size()==n){
			for(int i=1;i<n;i+=2)
				if(b[i]<b[i-1])
					flag=0;
			if(flag==0)
				cout<<"0\n";
			else{
				sort(a.begin(),a.end());
				sort(b.begin(),b.end());
				for(int i=0;i<n;i++){
					if(a[i]!=b[i])
						flag=0;
				}
				cout<<flag<<endl;
			}
		}
		else
			cout<<"0\n";
	}
	return 0;
}// } Driver Code Ends


/*Complete the function below*/
vector<int> formatArray(vector<int> a,int n)
{
    vector<int>::iterator it;
    vector<int> op;
    int i = 0;
    for(it = a.begin();it!=a.end();*it++){
    	if(i%2 == 1){
    		vector<int>::iterator prev = it-1;
    		cout<<"Compare it = "<<*prev<<" to "<<*it<<endl;
    		if(*prev < *it){
    			op.push_back(*prev);
    			op.push_back(*it);
			}else{
				op.push_back(*it);
    			op.push_back(*prev);
			}
		}	
		cout<<*(a.end());
    	//cout<<*it<<endl;
    	i++;
	}
	return op;
}
