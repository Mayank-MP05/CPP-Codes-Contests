#include<bits/stdc++.h>
using namespace std;

bool lapin(string str){
    int n = str.length(),s1,s2;
    if(n & 1){
        s1 = n/2 - 1;
        s2 = n/2 + 1;
    }else{
        s1 = n/2 - 1;
        s2 = n/2;
    }
    map<char,int> mp;
    map<char,int>::iterator j;
    for(int i = 0;i <= s1;i++){
        mp[str[i]]++;
    }
    for(int i = s2;i <= n-1;i++){
        mp[str[i]]--;
    }
    /*
        for(auto i : mp){
        cout << i.first << "   " << i.second << endl; 
    }
  */
    for(j = mp.begin() ; j != mp.end() ; j++ ){
        //cout << j->first << "   " << j->second << endl; 

        if(j->second != 0){
            return false;
        }
    }
    return true;
}

int main(){
	int t;
	cin>>t;
    string s;
    vector<bool> op;
	for(int i = 0 ; i < t;i++ ){
		cin>>s;
        op.push_back(lapin(s));
	}
	for(int i = 0 ; i < t;i++ ){
		cout<<(op[i] ? "YES" : "NO")<<endl;
	}
	return 0;
}
