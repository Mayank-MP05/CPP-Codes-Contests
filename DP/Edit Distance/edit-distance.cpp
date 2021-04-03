#include<bits/stdc++.h>
#define N 4
#define line cout<<"________________________";
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

int ED(string s1,string s2,int i){
	int p = s1.size(),q = s2.size();
	if(s1 == s2){
		return 0;
	}
	if(s1[i] == s2[i]){
		return ED(s1,s2,i+1);
	}
	if(p < q){
		string left = s1.substr(0,i+1);
		string right = s1.substr(i+1,p-i-1);
		string s1 = left + s2[i] + right;
		return 1 + ED(s1,s2,i-1);
	}else if(p > q){
		string left = s1.substr(0,i);
		string right = s1.substr(i+1,p-i-1);
		string s1 = left + right;
		return 1 + ED(s1,s2,i+1);
	}else{
		s1[i] = s2[i];
		return 1 + ED(s1,s2,i+1);
	}

}
int main(){
	string s1 = "cssat",s2 = "cut";
	cout<<ED(s1,s2,0);
    return 0;
}
