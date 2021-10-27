#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


 // } Driver Code Ends

class Solution
{
    public:
    //This function searches the grid to find an entry that is still unassigned.
    //If found, the reference parameters row, col will be set the location  
    //that is unassigned, and true is returned.  
    //If no unassigned entries remain, false is returned. 
    bool FindUnassignedLocation(int grid[N][N],int &row, int &col)  
    {  
        for (row = 0; row < N; row++)  
            for (col = 0; col < N; col++)  
                if (grid[row][col] == UNASSIGNED)  
                    return true;  
        return false;  
    }  
    
    //Function to print grids of the Sudoku.
    void printGrid(int grid[N][N])  
    {  
        for (int row = 0; row < N; row++)  
            for (int col = 0; col < N; col++)  
                cout << grid[row][col] << " ";  
    } 
    
    //Function to return a boolean which indicates whether an assigned  
    //entry in the specified row matches the given number. 
    bool UsedInRow(int grid[N][N], int row, int num)  
    {  
        for (int col = 0; col < N; col++)  
            if (grid[row][col] == num)  
                return true;  
        return false;  
    }  
      
    //Function to return a boolean which indicates whether an assigned  
    //entry in the specified column matches the given number. 
    bool UsedInCol(int grid[N][N], int col, int num)  
    {  
        for (int row = 0; row < N; row++)  
            if (grid[row][col] == num)  
                return true;  
        return false;  
    }  
      
    //Function to return a boolean which indicates whether an assigned
    //entry within the specified 3x3 box matches the given number.
    bool UsedInBox(int grid[N][N], int boxStartRow,int boxStartCol, int num)  
    {  
        for (int row = 0; row < 3; row++)  
            for (int col = 0; col < 3; col++)  
                if (grid[row + boxStartRow] 
                        [col + boxStartCol] == num)  
                    return true;  
        return false;  
    }
      
    
    //Function to return a boolean which indicates whether it will be 
    //legal to assign num to the given row, column location. 
    bool isSafe(int grid[N][N], int row, int col, int num)  
    {  
        //checking if 'num' is not already placed in  
        //current row, current column and current 3x3 box.
        return !UsedInRow(grid, row, num) &&  
               !UsedInCol(grid, col, num) &&  
               !UsedInBox(grid, row - row % 3 ,  
                          col - col % 3, num) &&  
                grid[row][col] == UNASSIGNED;  
    } 
    
    //Function to find a solved Sudoku. 
    bool SolveSudoku(int grid[N][N])  
    {  
        int row, col;  
      
        //if there is no unassigned location, we are done.
        if (!FindUnassignedLocation(grid, row, col))  
        return true;
      
        //considering digits from 1 to 9  
        for (int num = 1; num <= 9; num++)  
        {   
            if (isSafe(grid, row, col, num))  
            {  
                //making tentative assignment  
                grid[row][col] = num;  
      
                //if success, return true  
                if (SolveSudoku(grid))  
                    return true;  
      
                //failure, unmake & try again  
                grid[row][col] = UNASSIGNED;  
            }  
        }  
        // this triggers backtracking 
        return false;  
    }  
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}  // } Driver Code Ends
