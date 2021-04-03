#include<bits/stdc++.h>
#define N 4
#define M 400
#define line cout<<"________________________\n";
using namespace std;

void print1DArr(int arr[N]){
    line;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i < n ; i++ ){
        cout<<arr[i];
    }
    cout<<endl;
    line;
}

void print2DArr(int arr[N][N]){
    line;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i < n ;i++){
        for(int j = 0 ; j< n;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    line;
}

void largeFactorial(int n){
	int arr[M],k=0,o=n;
	memset(arr,-1,sizeof(arr));
	/*for(int i = 0 ; i < 10 ; i++ ){
		cout<<arr[i]<<endl;
	}*/
	while(n > 0){
		arr[k] = n%10;
		n = n/10;
		k++;
	}

	//for(int x = 2;x <= n;x++){ 
		int p=0,c=0;
		int x = o-1;
		while(x > 1){
			for(int i = 0 ; i < M ; i++){
				if(arr[i] == -1){
					p = c;
					if(k < i){
						k = i;
					}
				}else{
					p = c + arr[i]*x;
				}
				c = p/10;
				
				if(p >= 0)
					arr[i] = p%10;
				if(c <= 0 && p <= 0 && k <= i)
					break;
					/*
					for(int i = M-1 ; i >= 0 ; i-- ){
						if(arr[i] == -1)
							continue;
						cout<<arr[i]<<" ";
					}
					line;*/
			}
			/*cout<<"X = "<<x<<endl;*/
			x--;
		}
		
		
	//}
	
	bool first = true;
	for(int i = M-1 ; i >= 0 ; i-- ){
		if(first && arr[i] == 0){
			first = false;
			continue;
		}
		if(arr[i] == -1)
			continue;
		cout<<arr[i]<<"";
	}
}
void multiplyArr(int arr[M],int x){
	int p,c=0;
	for(int i = 0 ; i < M ; i++){
		p = c + arr[i]*x;
		c = c/10;
		arr[i] = p%10;
	}
}
int main(){
    int t;
    cin>>t;
    largeFactorial(t);
    return 0;
}
