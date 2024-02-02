//MEMOIZATION = DP
// TC = O(N*TARGET)
// SC = O(N*TARGET)*O(N)(Aux Space)



/*#include <bits/stdc++.h> 

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
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    int i= n-1;
    //N+1, K+1 we are taking N because idx starting from 0
    vector<vector<int>> dp(n, vector<int>(k+1, -1));
    return f(i, k, arr, dp);
}*/