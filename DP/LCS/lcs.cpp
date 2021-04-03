#include<bits/stdc++.h>
#define N 4
#define line cout<<"________________________";
using namespace std;
void print2DArr(int *arr[],int a,int b){
    line;
    for(int i = 0 ; i < a ;i++){
        for(int j = 0 ; j< b;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    line;
}

int lcs(string s1,string s2,int m,int n){
	if(m <= 0 || n <= 0)
		return 0;
	if(s1[m-1] == s2[n-1])
		return 1 + lcs(s1,s2,m-1,n-1);
	return max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1)); 	
}

int solveByDPUtil(string s1,string s2,int m,int n,int table[][n]){
	if(m <= 0 || n <= 0)
		if(table[m][n] == -1)
			table[m][n] = 0;
		return 0;
		
	if(s1[m-1] == s2[n-1]){
		if(table[m-1][n-1] != -1){
			return table[m-1][n-1];
		}
		table[m-1][n-1] = 1 + lcs(s1,s2,m-1,n-1);
		return table[m-1][n-1];	
	}
		

	return max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1)); 	
}

int solveByDP(string s1,string s2,int m,int n){
	int table[m+1][n+1];
	memset(table,-1,sizeof(table));
	cout<<solveByDPUtil( s1, s2, m, n, *table)<<endl;
	print2DArr(table,m,n);
}


int main(){
	string s1,s2;
	int a,b;
	//cin>>s1>>s2;
	//cin>>a>>b;
	s1 = "abdefa";
	s2 = "adefa";
	a = s1.size();
	b = s2.size();
	cout<<lcs(s1,s2,a,b);
    return 0;
}
