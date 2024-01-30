
//MEMOIZATION = DP
//TC = O(N*M)
//SC = O(N*M)+O(Path length = (N-1)+(M-1))
// Right and Down

/*
#include <bits/stdc++.h> 

 int minpath(vector<vector<int>>&mat, int i, int j, int n, int m,  vector<vector<int>>&dp)
    {
         if(i>n-1 || j>m-1)
         {
             return 1e9;
         }
        
        if(i==n-1 && j==m-1)
        {
            return mat[i][j];
        }
        
        
        if(dp[i][j]!= -1)
        {
            return dp[i][j];
        }
        
        
        int right =  mat[i][j]+minpath(mat, i, j+1, n, m, dp);
        int down =  mat[i][j]+minpath(mat, i+1, j, n, m, dp);
        int ans = min(right, down);
        dp[i][j] = ans;
        
        return dp[i][j];
        
            
    }
int minSumPath(vector<vector<int>> &grid) {
    // Write your code here.
        int n = grid.size();
        int m = grid[0].size();
        int i =0;
        int j =0;
        
        vector<vector<int>>dp(n, vector<int>(m, -1));
        int ans = minpath(grid, i, j, n, m, dp);
        return ans;
        
}*/









//Tabulation = DP
//TC = O(N*M)
//SC = O(N*M)

// UP AND LEFT

/*
#include <bits/stdc++.h> 
int minSumPath(vector<vector<int>> &grid) {
    // Write your code here.
     int n = grid.size();
     int m = grid[0].size();

     vector<vector<int>> dp(n, vector<int>(m, 0));

     for(int i=0; i<n; i++)
     {
         for(int j=0; j<m; j++)
         {
             //   Base case  
             if(i==0 && j==0)
             {
                 dp[i][j] = grid[i][j];
             }

             else 
             {
                  int Up = grid[i][j];
                  if(i>0)
                  {
                      Up += dp[i-1][j];
                  }
                  else 
                  {
                      Up += 1e9;
                  }


                  int left = grid[i][j];
                  if(j>0)
                  {
                      left += dp[i][j-1];
                  }
                  else 
                  {
                      left += 1e9;
                  }

                dp[i][j] = min(Up, left);

             }
         }
     }

     return dp[n-1][m-1];
}*/