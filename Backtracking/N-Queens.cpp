#include<bits/stdc++.h>
#define N 4
using namespace std;

bool isSafe(int board[N][N],int x,int y){
	for(int row=0;row<x;row++){
		//cout<<"Row Issue"<<row<<y<<endl;
		if(board[row][y])
			return false;
	}
	
	for(int col=0;col<y;col++){
		//cout<<"Col Issue"<<x<<col<<endl;
		if(board[x][col])
			return false;
	}
	
	//diagonal checks - UPPER LEFT
	for(int i = x,j = y;i<N&&j>=0;i++,j--){
		//cout<<"Away - "<<i<<j<<endl;
		if(board[i][j])
			return false;
	}
	//diagonal checks - LOWER LEFT
	for(int i = x,j = y;i>=0&&j>=0;i--,j--){
		//cout<<"Towards - "<<i<<j<<endl;
		if(board[i][j])
			return false;
	}
	return true;
}

void printSoln(int arr[N][N],int n){
	for(int i = 0 ; i < n ; i++ ){
		for(int j = 0 ; j < n ; j++ ){
			cout<<arr[i][j]<<"	";
		}
		cout<<endl;
	}
}

bool placeNQueensUtil(int board[N][N],int col){
	if(col == N){
		return true;
	}
	for(int i = 0 ; i < N ; i++ ){
		if(isSafe(board,i,col)){
			board[i][col] = 1;
			if(placeNQueensUtil(board,col+1)){
				//board[i][col] = 1;
				return true;
			}
			board[i][col] = 0;

		}
	}
	return false;
}

bool placeNQueens(int board[N][N]){

	if(placeNQueensUtil(board,0))
		return true;
	
	return false;
}

int main(){
	int board[N][N] = {
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0},
	};
	cout<<placeNQueens(board);
	//cout<<isSafe(board,2,2)<<endl;
	//cout<<isSafe(board,2,3)<<endl;
	//cout<<isSafe(board,3,3)<<endl;
	printSoln(board,4);
	return 0;
}
