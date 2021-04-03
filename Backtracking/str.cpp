#include<bits/stdc++.h>
using namespace std;

int main(){
    int i = 0 , j = 6;
    string str = "xox.xox";
    while((str[i] == 'x' && str[j] == 'o' )){
        i++;
        j--;
    }
    cout<<i<<"  "<<j;
    return 0;
}
