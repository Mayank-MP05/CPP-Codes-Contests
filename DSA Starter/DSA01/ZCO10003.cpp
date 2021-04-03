#include<bits/stdc++.h>
using namespace std;

long long maxRevenue(vector<long long> ip,int size){
    int mx = -1,prod;
    sort(ip.begin(),ip.end());
    for(int i = 0 ; i < size ; i++ ){
        prod = ip[i] * (size-i);
        if(prod > mx){
            mx = prod;
        } 
    }
    return mx;
}

int main(){
    int t,el,n;
    vector<long long> ip;
    cin>>n;
    for(int j = 0 ; j < n ; j++ ){
        cin>>el;
        ip.push_back(el);
    }
   	cout<<maxRevenue(ip,n)<<endl;
}
