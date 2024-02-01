// Memoization = Dp
// TC = O(N*N)
// SC = O(N*N)

/*
#include <bits/stdc++.h> 

 int minpath(int i, int j, int n, int m, vector<vector<int>>&grid, vector<vector<int>>& dp){


    if(i==n-1){
        return grid[i][j];
    }
        
    if(dp[i][j]!=-1){
        return dp[i][j];
    }

    int down = grid[i][j]+ minpath(i+1, j, n, m, grid,dp);
    int dia = grid[i][j]+ minpath(i+1, j+1, n, m, grid,dp);
    dp[i][j]=min(down, dia);
    return dp[i][j];
}

int minimumPathSum(vector<vector<int>>& triangle, int n){
	// Write your code here.
        int m = n;//columns = rows
        int i = 0;
        int j = 0;
        vector<vector<int>>dp(n, vector<int>(m, -1));
        int ans = minpath(i, j, n, m, triangle, dp);
        return ans;
}
*/





//02. Tabulation = Dp
// TC = O(N*N)
// SC = O(N*N)


/*class Solution {
public:
    
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();//rows
        int m = n;//columns = rows
        vector<vector<int>>dp(n, vector<int>(m, 0));
        
        for(int j= 0; j<n; j++)
        {
            dp[n-1][j]=triangle[n-1][j];
            
            for(int i= n-2; i>=0; i--)
            {
               for(int j=i; j>=0; j--)
               {
                   int down = triangle[i][j]+dp[i+1][j];
                   int dia  = triangle[i][j]+dp[i+1][j+1];       
                   dp[i][j] = min(down, dia);
               }
            }
        }
        
        return dp[0][0];
       
    }
};*/





