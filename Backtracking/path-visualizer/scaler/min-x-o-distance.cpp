#include<bits/stdc++.h>
using namespace std;

int getMinDistance(string str){
    int n = str.size();
    int min = INT_MAX;
    for(int i = 0 ; i < n ; i++ ){
        if(str[i] != '.'){
            for(int j = i+1 ; j < n ; j++){
                if(str[i] == 'x' && str[j] == 'o')
                    if(min > j-i){
                        min = j - i;
                        break;
                    }
                if(str[i] == 'o' && str[j] == 'x'){
                    if(min> j-i){
                        min = j - i;
                        break;
                    }
                }
            }
        }
    }
    if(min == INT_MAX)
        return -1;
    return min;
}

int main(){
    cout<<getMinDistance("...xxoxo....")<<endl;
    cout<<getMinDistance("x.....xxxx.....ooooo....xxxx")<<endl;
    cout<<getMinDistance("...oooooo....")<<endl;
    cout<<getMinDistance("...xoooooxoo....")<<endl;
    cout<<getMinDistance("...xxoxo....")<<endl;
    cout<<getMinDistance("...xxxxxxxxxxxx....")<<endl;
    cout<<getMinDistance("...xx....o...xxx...o....")<<endl;
    return 0;
}

/*
const getMinDistance = (str) => {
  let n = str.length;
  let l = 0;
  h = n - 1;
  min = 9999999999;
  for (let i = 0; i < n; i++) {
    if (str[i] !== ".") {
      for (let j = i + 1; j < n; j++) {
        if (str[i] === "o" && str[j] === "x")
          if (min > j - i) {
            min = j - i;
            break;
          }
        if (str[i] === "x" && str[j] === "o")
          if (min > j - i) {
            min = j - i;
            break;
          }
      }
    }
  }
  if (min === 9999999999) return -1;
  return min - 1;
};

*/