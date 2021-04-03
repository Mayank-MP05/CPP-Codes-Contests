#include<bits/stdc++.h>
using namespace std;

void inc(int* a){
    (*a)++;
}

int main(){
    int a = 104;
    int* p = &a;
    cout<<a<<endl;
    inc(p);
    cout<<a<<endl;
    return 0;
}