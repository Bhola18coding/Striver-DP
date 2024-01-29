//MEMOIZATION 
// TC = O(N*M)
// SC = O(N*M)


// class Solution {
// public:
    
//     int ratmaze(int i, int j, int n, int m, vector<vector<int>>&dp, vector< vector< int> > &mat)
// {
//     //Edge case
//      if(i>n-1 || j>m-1 || mat[i][j]==1)
//      {
//          return 0;
//      }
     
//      //Base Case
//      if(i==n-1 && j==m-1)
//      {
//          return 1;
//      }
     
//      if(dp[i][j]!=-1)
//      {
//          return dp[i][j];
//      }
     
     
//      int right = ratmaze(i, j+1, n, m, dp, mat);
//      int down = ratmaze(i+1, j, n, m, dp, mat);
     
     
//      int ans = (right + down) ;
//      dp[i][j] = ans;
     
//      return dp[i][j];
// }

    
    
//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
//     int i=0;
//     int j =0;
//     int n =  obstacleGrid.size();
//     int m =  obstacleGrid[0].size();
//     vector<vector<int>>dp(n, vector<int>(m,-1));
        
//      int ans = ratmaze(i, j, n, m, dp, obstacleGrid);
//      return ans;
//     }
// };








//TABULATION = DP 
// TC = O(N*M)
// SC = O(N*M)
/*
class Solution {
public:
    
    
    //  Here we are doing Tabulation Form = by up and left 
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        int dp[m][n];
        
        for(int i=0; i<=m-1; i++)
        {
            for(int j=0; j<=n-1; j++)
            {
                if(obstacleGrid[i][j]==1)
                {
                    dp[i][j] = 0;
                }
                
               else if(i==0 && j==0)
                {
                    dp[i][j] = 1;
                }
                else 
                {
                    int up=0, left=0;
                    if(i>0)
                    {
                        up = dp[i-1][j];
                    }
                    if(j>0)
                    {
                        left = dp[i][j-1];
                    }

                    dp[i][j]=up+left;
                }


            }
        }

        return dp[m-1][n-1];
    }
};
*/