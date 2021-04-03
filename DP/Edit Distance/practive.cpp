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

int main(){
	string s = "gk",s2="maha";
	s = s + s2[0];
	cout<<s<<endl;
	cout<<s.substr(0,1);
	cout<<s.substr(0,5);
    return 0;
}
