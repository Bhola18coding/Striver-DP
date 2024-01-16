// MEMOIZATION = DP 
// MINIMAL COST  = CN
// TC = O(N)
// SC = O(N) + O(N)

#include<bits/stdc++.h>
using namespace std;




///MEMOIZATION = DP
// TC = O(N)
// SC = O(N) + O(N)
int mincost(int n, int i, int k, vector<int>&arr, vector<int>&dp)
{

   if(i>=arr.size())
   {
       return 1e9;
   }


   if(i==arr.size()-1)
   {
       return 0;
   }

   if(dp[i]!=-1)
   {
       return dp[i];
   }

   int mini = 1e9;
   int r=0;
   for(int t=1; t<=k ;  t++)
   {
        
        if(i+t<n)
        {
          r =  mincost(n,  i+t,  k, arr,dp) + abs(arr[i]-arr[i+t]);

        }

         mini = min(mini, r);
       
   }

   return dp[i]=mini;


}

int minimizeCost(int n, int k, vector<int> &heights){
   
   vector<int>dp(n, -1);
   int i=0;
   int ans =  mincost( n,  i,  k, heights, dp);
   return ans;


   
}