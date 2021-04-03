#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    int i,totChar,spaces = 0;
	totChar=0;
    getline(cin,str);
    for(int i=0; str[i] != '\0'; i++){
        if(str[i]!=' '){
            totChar++;
        }else{
        	spaces++;
        	totChar++;
		}
    }
    if(spaces != 0){
    	spaces++;
	}
    cout<<totChar<<endl<<spaces;
    return 0;
}
