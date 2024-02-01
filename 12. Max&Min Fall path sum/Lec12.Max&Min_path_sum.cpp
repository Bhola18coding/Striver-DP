

// 01. MAXIMUM PATH SUM  = CODING NINJA , VAR START, VAR END 

// MEMOIZATION = DP
// TC = O(N*M)
// SC = O(N*M)

/*#include <bits/stdc++.h>

int getsum(int i, int j, int n, int m, vector<vector<int>> &grid, vector<vector<int>>&dp){

// Edge case
    if(j<0||j>=m){
        return -1e9;
    }

  // Base case
    if(i==n-1){
        return grid[i][j];
    }

    if(dp[i][j]!=-1){
        return dp[i][j];
    }

    int down = grid[i][j]+ getsum(i+1, j, n, m, grid, dp);
    int downLeft = grid[i][j]+ getsum(i+1, j-1, n, m, grid, dp);
    int downRight = grid[i][j]+ getsum(i+1, j+1, n, m, grid, dp);
    return dp[i][j] = max(down, max(downLeft, downRight));
}

int getMaxPathSum(vector<vector<int>> &matrix)
{
    //  Write your code here.
    int n = matrix.size();//rows
    int m = matrix[0].size();//columns
    int i = 0;
    vector<vector<int>>dp(n, vector<int>(m, -1));
    int mini = -1e9;
    for(int k = 0; k<matrix[0].size(); k++){
        mini = max(mini, getsum(i, k, n, m, matrix, dp));
    }
    return mini;
}*/



// Tabulation = Dp  = 0 to N-1 in Recursion = N-1 to 0
// TC = O(N*M)
// SC = O(N*M)
// We have done  Opposite Up, Left Diagonal, Right Diagonal and traverse from 0 to n-1



/*
#include <bits/stdc++.h>


int getMaxPathSum(vector<vector<int>> &matrix)
{
   int n = matrix.size(); // Number of rows in the matrix
    int m = matrix[0].size(); // Number of columns in the matrix

    // Create a 2D DP (dynamic programming) array to store maximum path sums
    vector<vector<int>> dp(n, vector<int>(m, 0));

    // Initialize the first row of dp with values from the matrix (base condition)
    for (int j = 0; j < m; j++) {
        dp[0][j] = matrix[0][j];
    }

    // Iterate through the matrix rows starting from the second row
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // Calculate the maximum path sum for the current cell considering three possible directions: up, left diagonal, and right diagonal

            // Up direction
            int up = matrix[i][j] + dp[i - 1][j];

            // Left diagonal direction (if it's a valid move)
            int leftDiagonal = matrix[i][j];
            if (j - 1 >= 0) {
                leftDiagonal += dp[i - 1][j - 1];
            } else {
                leftDiagonal += -1e9; // A very large negative value to represent an invalid path
            }

            // Right diagonal direction (if it's a valid move)
            int rightDiagonal = matrix[i][j];
            if (j + 1 < m) {
                rightDiagonal += dp[i - 1][j + 1];
            } else {
                rightDiagonal += -1e9; // A very large negative value to represent an invalid path
            }

            // Store the maximum of the three paths in dp
            dp[i][j] = max(up, max(leftDiagonal, rightDiagonal));
        }
    }

    // Find the maximum value in the last row of dp, which represents the maximum path sums ending at each cell
    int maxi = INT_MIN;
    for (int j = 0; j < m; j++) {
        maxi = max(maxi, dp[n - 1][j]);
    }

    // The maximum path sum is the maximum value in the last row
    return maxi;
}*/










//02. MINIMUM FALLING PATH SUM = VAR START , VAR END

// MEMOIZATION = DP
// TC = O(N*M)
// SC = O(N*M)


/*class Solution {
public:
    
    int minof(int i, int j, int n, int m, vector<vector<int>>&mat, vector<vector<int>>&dp)
    {
        
        //edge case 
        if(j<0 || j>=m)
        {
            return 1e9;
        }
        
        //Base Case
        if(i==n-1)
        {
            return mat[i][j];
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
         int dl = mat[i][j]+minof(i+1, j-1, n, m, mat, dp);
         int dia=mat[i][j]+minof(i+1, j+1, n, m, mat, dp);
         int down=mat[i][j]+minof(i+1, j, n,m, mat, dp);
        
        int ans = min(dl, min(dia, down));
        
        dp[i][j] = ans;
        return dp[i][j];
    }
    
    
    int minFallingPathSum(vector<vector<int>>& mat) {
        
         //  Write your code here.
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<int>>dp(n, vector<int>(m, -1));
        int i=0;
        int ms =1e9;
        for(int j =0; j<m; j++){
            
            int ans = minof( i,  j,  n,  m, mat, dp);
            ms = min(ms, ans); 
        }
        
        return ms;
    }
};*/




// Tabulation = Dp  = 0 to N-1 in Recursion = N-1 to 0
// TC = O(N*M)
// SC = O(N*M)
// We have done  Opposite Up, Left Diagonal, Right Diagonal and traverse from 0 to n-1

/*
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
    int n = matrix.size(); // Number of rows in the matrix
    int m = matrix[0].size(); // Number of columns in the matrix

    // Create a 2D DP (dynamic programming) array to store maximum path sums
    vector<vector<int>> dp(n, vector<int>(m, 0));

    // Initialize the first row of dp with values from the matrix (base condition)
    for (int j = 0; j < m; j++) {
        dp[0][j] = matrix[0][j];
    }

    // Iterate through the matrix rows starting from the second row
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // Calculate the maximum path sum for the current cell considering three possible directions: up, left diagonal, and right diagonal

            // Up direction
            int up = matrix[i][j] + dp[i - 1][j];

            // Left diagonal direction (if it's a valid move)
            int leftDiagonal = matrix[i][j];
            if (j - 1 >= 0) {
                leftDiagonal += dp[i - 1][j - 1];
            } else {
                leftDiagonal += 1e9; // A very large negative value to represent an invalid path
            }

            // Right diagonal direction (if it's a valid move)
            int rightDiagonal = matrix[i][j];
            if (j + 1 < m) {
                rightDiagonal += dp[i - 1][j + 1];
            } else {
                rightDiagonal += 1e9; // A very large negative value to represent an invalid path
            }

            // Store the maximum of the three paths in dp
            dp[i][j] = min(up, min(leftDiagonal, rightDiagonal));
        }
    }

    // Find the maximum value in the last row of dp, which represents the maximum path sums ending at each cell
    int mini = 1e9;
    for (int j = 0; j < m; j++) {
        mini = min(mini, dp[n - 1][j]);
    }

    // The maximum path sum is the maximum value in the last row
    return mini;
    }
};
*/