#include<bits/stdc++.h>
using namespace std;
long long reverseAndPrint(long long m){
    long long e = m;
    long long r = 0;
    int i = 0,max=0;
    while(e%10){
    	e/=10;
    	max++;
	}
	cout<<max;
    while(e%10){
        r += (e%10)*pow(10,max-i-1);
        e/=10;
        i++;
    }
    return r;
}
int main(){
    int t;
    long long m,r;
    vector<long long> v;
    cin>>t;
    for(int i = 0 ; i < t ;i++){
        cin>>m;
        r = reverseAndPrint(m);
        v.push_back(r);
    }
    for(int i = 0 ; i < t ;i++){
		cout<<v[i]<<endl;
    }
    return 0;
}
