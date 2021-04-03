#include<bits/stdc++.h>
using namespace std;

void print(int** ap,int m,int n){
    for(int i = 0 ; i < m ; i++ ){
        for(int j = 0 ; j < n ; j++ ){
            cout<<ap[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(){
    int a[4][2] = {{1,2},{9,8},{3,5},{7,4}};
    int (*ap)[2] = a; 
    int m = 4,n=2;
    for(int i = 0 ; i < m ; i++ ){
        for(int j = 0 ; j < n ; j++ ){
            cout<<ap[i][j]<<"  ";
        }
        cout<<endl;
    }
    print(ap,m,n);

    /*
    print(a,2,4);
    print(a,2,4);
    print(a,2,4);
    print(a,2,4);
    */
    return 0;
}