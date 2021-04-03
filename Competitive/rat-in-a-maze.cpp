#include<bits/stdc++.h>
#define line cout<<"_______________________________________________________\n";
#define N 4
using namespace std;

//Printing the Array
void print(int arr[N][N],int n = N){
	line;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++ ){
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl<<endl;
	}
	line;
}

bool isSafe(int arr[N][N],int x,int y){
	if(x >= 0 && x <= N && y >= 0 && y <= N && arr[x][y] == 1)
		return true;
	return false;
}

 
/* A recursive utility function 
to solve Maze problem */
bool solveMazeUtil( 
    int maze[N][N], int x, 
    int y, int sol[N][N]) 
{ 
    // if (x, y is goal) return true 
    if ( 
        x == N - 1 && y == N - 1 
        && maze[x][y] == 1) { 
        sol[x][y] = 1; 
        return true; 
    } 
 
    // Check if maze[x][y] is valid 
    if (isSafe(maze, x, y) == true) { 
        // mark x, y as part of solution path 
        sol[x][y] = 1; 
 
        /* Move forward in x direction */
        if (solveMazeUtil( 
                maze, x + 1, y, sol) 
            == true) {			
            print(sol);
            return true; 
}
        /* If moving in x direction 
        doesn't give solution then 
        Move down in y direction */
        if (solveMazeUtil( 
                maze, x, y + 1, sol) 
            == true) {
            print(sol);
            return true; 
}
        /* If none of the above movements 
        work then BACKTRACK: unmark 
        x, y as part of solution path */
        sol[x][y] = 0; 
        return false; 
    } 
 
    return false; 
} 
 

bool solveMaze(int maze[N][N]) 
{ 
    int sol[N][N] = { { 0, 0, 0, 0 }, 
                    { 0, 0, 0, 0 }, 
                    { 0, 0, 0, 0 }, 
                    { 0, 0, 0, 0 } }; 
 
    if (solveMazeUtil( 
            maze, 0, 0, sol) 
        == false) { 
        printf("Solution doesn't exist"); 
        return false; 
    } 
 
    print(sol,N); 
    return true; 
} 

int main(){
	int maze[N][N] = {
		{1, 0, 0, 0},
		{1, 1, 0, 1},
		{0, 1, 0, 0},
		{1, 1, 1, 1}
	};
	solveMaze(maze);
	return 0;
}
