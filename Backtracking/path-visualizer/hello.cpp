#include<bits/stdc++.h>
using namespace std;

int main(){
    int i = 0 , j = 6;
    string str = "xox.xox";
    while((str[i] == 'x' && str[j] == 'o' )||(str[i] == 'o' && str[i] == 'x')){
        i++;
        j--;
    }
    cout<<i<<"  "<<j;
    return 0;
}