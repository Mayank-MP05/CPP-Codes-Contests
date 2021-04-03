#include<bits/stdc++.h>
using namespace std;

void print(int a[],int n){
    for(int i = 0 ; i < n ; i++ ){
        cout<<a[i]<<"   ";   
        a[i]++;
    }
    cout<<endl;
}

int main(){
    int a[] = {1,2,5,6,9,8,7,4};
    print(a,8);
    print(a,8);
    print(a,8);
    print(a,8);
    return 0;
}