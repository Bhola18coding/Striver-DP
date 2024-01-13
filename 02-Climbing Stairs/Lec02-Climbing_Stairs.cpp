
//Memoization = Dp
// Tc = O(n)
// Sc = O(N)+O(N)

#include <bits/stdc++.h>
using namespace std;

int mod = 1e9+7;

int count(int n, vector<int>&dp)
{
    //Base case 
    if(n==0 || n==1)
    {
        return 1;
    }

    if(n<0)
    {
        return 0;
    }

    //If dp is fill 
    if(dp[n]!=-1)
    {
      return dp[n];
    }

    int first = count(n-1, dp);
    int second = count(n-2, dp);
    dp[n] =  (first)%mod+(second)%mod;

    return dp[n]%mod;

}


int countDistinctWays(int n) {
    //  Write your code here.
    //Dp array
    vector<int>dp(n+1, -1);
    int ans = count(n, dp);
    return ans;
}






//Tabulation Form 
// Tc = O(n)
// Sc = O(1)

// class Solution {
    
//     public int climbStairs(int n) {
        
//         int pre1 = 1;
//         int pre2 = 1;
        
//         for(int i=2; i<=n; i++)
//         {
            
//             int curri= pre1+pre2;
            
//             pre2 = pre1;
//             pre1 = curri;
//         }
        
//         return pre1;
//     }
// }