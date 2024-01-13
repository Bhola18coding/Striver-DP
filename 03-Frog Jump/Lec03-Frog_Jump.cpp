// Memoization = Dp 
// Tc = O(n)
// Sc = O(n)+ O(n)

#include <bits/stdc++.h> 
 using namespace std;

// FROG JUMP - DP
int fnc (int n, int i, vector<int>arr, vector<int>&dp)
{

    //Base case
    if(i==0)
    {
        return 0;
    }

    if(i<0)
    {
        return 1e9;
    }
    

    if(dp[i]!=-1)
    {
        return dp[i];
    }
    int one = abs(arr[i]-arr[i-1])+fnc(n, i-1, arr, dp);
    int two = abs(arr[i]-arr[i-2])+fnc(n, i-2, arr,dp);
    int ans = min(one, two);
    dp[i] = ans;
    return dp[i];
}


int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    int i = n-1;
    vector<int>dp(n, -1);
    int answer = fnc(n, i, heights, dp);
    return answer;

}
