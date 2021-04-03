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
    int t;
    cin>>t;
    for(int i = 0 ; i < t ; i++ ){}
    for(int i = 0 ; i < t ; i++ ){}
    return 0;
}