
//MEMOIZATION = DP
// TC = O(N*TARGET)
// SC = O(N*TARGET)*O(N)(Aux Space)


/*#include<bits/stdc++.h>


bool f(int i, int tar, vector<int> &arr,  vector<vector<int>>&dp)
{
   //Base Case
    if(tar==0) return true;
    if(i==0) return (arr[0]==tar);

    // If dp is filled
    if(dp[i][tar]!=-1) return dp[i][tar];

    bool nt = f(i-1, tar, arr, dp);
    bool t = false;
    if(tar>=arr[i])
    {
        t = f(i-1, tar-arr[i], arr, dp);
    } 

    return dp[i][tar] = t||nt;


}

bool canPartition(vector<int> &arr, int n)
{
	  int totSum = 0;

    // Calculate the total sum of the array
    for (int i = 0; i < n; i++) {
        totSum += arr[i];
    }

    // If the total sum is odd, it cannot be partitioned into two equal subsets
    if (totSum % 2 == 1)
        return false;
    else {
        int k = totSum / 2;

        // Create a DP table with dimensions n x k+1 and initialize with -1
        vector<vector<int>> dp(n, vector<int>(k + 1, -1));

        // Call the subsetSumUtil function to check if it's possible to partition
        return f(n - 1, k, arr, dp);
	}
}*/
