#include <bits/stdc++.h>
#define N 4 
#define line cout<<"---------------------------\n";
using namespace std;
void printSoln(int s[N][N]){
	for(int i = 0 ; i < N ; i++){
		for(int j = 0 ; j < N ; j++){
			cout<<s[i][j]<<"	";
		}
		cout<<endl;
	}
	line;
}

bool inRow(int s[N][N],int x,int y,int num){
	for(int i = 0;i < N;i++){
		if(s[x][i] == num)
			return false;
	}
	return true;
}
bool inCol(int s[N][N],int x,int y,int num){
	for(int i = 0;i < N;i++){
		if(s[i][y] == num)
			return false;
	}
	return true;
}
bool inBox(int s[N][N],int x,int y,int num){
	/*int i=x,j=y;
	if(x&1){
		i = x-1;
	}
	if(y&1){
		j = y-1;
	}
	int c = x - x % 2,d = y - y % 2;
	int p = c+2 , q = d+2;
	for(; c < p ; c++ ){
		for( ; d < q ; d++ ){
			cout<<c<<"	"<<d<<endl;
			if(s[d][c] == num)
				return false;
		}
	}
	*/
	int startRow = x - x % 2, 
            startCol = y - y % 2;
   
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++){
			if (s[i + startRow][j + startCol] == num)
            	return false;
		}

 	return true;
}

bool isSafe(int s[N][N],int x,int y,int num){
	/*cout<<inRow(s,x,y,num)<<endl;	
	cout<<inCol(s,x,y,num)<<endl;	
	cout<<inBox(s,x,y,num)<<endl;*/
	return inRow(s,x,y,num) && inCol(s,x,y,num) && inBox(s,x,y,num) && s[x][y] == 0;
}

bool solveSudokuUtil(int s[N][N],int ans[N][N],int x,int y){
	if(x == N-1 && y == N-1){
		return true;
	}
	printSoln(ans);
	if(s[x][y] != 0){
		ans[x][y] = s[x][y];
		if(x == N-1){
			solveSudokuUtil(s,ans,0,y+1);
		}else{
			solveSudokuUtil(s,ans,x+1,y);
		}
		return true;
	}
	for(int i = 1 ; i < 5 ; i++){
		if(isSafe(s,x,y,i)){
			ans[x][y] = i;
			if(x == N-1){
				if(solveSudokuUtil(s,ans,0,y+1))
					return true;
			}else{
				if(solveSudokuUtil(s,ans,x+1,y))
					return true;
			}

		}
		ans[x][y] = 0;
	}
	return false;
}

int main(){
	int s[4][4] = {
		{3,0,0,0},
		{1,0,1,0},
		{2,0,0,3},
		{4,0,0,2},
	};
	int ans[4][4] = {
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0},
	};
	cout<<isSafe(s,3,2,3);
	cout<<solveSudokuUtil(s,ans,0,0);
	//printSoln(s);
	return 0;
}
