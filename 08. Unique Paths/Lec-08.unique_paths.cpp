//Memoization 
// TC = O(N*M)
// SC = O(N*M)

#include <bits/stdc++.h>
using namespace std;

int paths(int i, int j, int m, int n, vector<vector<int>>&dp)
{
	//edge case
	if(i>=n || j>=m)
	{
		return 0;
	}

	if(i==n-1 && j==m-1)
	{
		return 1;
	}


    if(dp[i][j] != -1)
	{
		return dp[i][j];
	}
	

	int right = paths(i, j+1, m, n, dp);
	int down = paths(i+1, j, m, n, dp);
	dp[i][j] = right+down;
	return dp[i][j];
}



int uniquePaths(int m, int n) {
	// Write your code here.
	int i = 0;
	int j = 0;
	vector<vector<int>>dp(n, vector<int>(m, -1));
	int ans = paths(i, j, m, n, dp);
	return ans;
}





// TABULATION
#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.

	int dp[m][n];
	for(int i=0; i<=m-1; i++)
	{
		for(int j=0; j<=n-1; j++)
		{
			if(i==0 && j==0)
			{
				dp[0][0] = 1;
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