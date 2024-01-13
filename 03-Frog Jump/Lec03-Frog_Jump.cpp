//01.Memoization = Dp 
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







//02.Tabulation = DP 
// TC = O(N)
// SC = O(N)+O(N)
#include <bits/stdc++.h> 
using namespace std;

int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int>dp(n,0);
    dp[0] = 0;

    for(int i=1; i<n; i++)
    {
        int fs = dp[i-1] + abs(heights[i]-heights[i-1]);
        int ss = INT_MAX;
        if(i>1)
        {
            ss = dp[i-2] + abs(heights[i]-heights[i-2]);
        }
        dp[i] = min(fs, ss);
    }

    return dp[n-1];
}








//03.SPACE OPTIMIZATION = DP
// TC = O(N)
// SC = O(1)

#include <bits/stdc++.h> 
using namespace std;

int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
   
    int pre1 = 0;
    int pre2 = 0;

    for(int i=1; i<n; i++)
    {
        int fs = pre1 + abs(heights[i]-heights[i-1]);
        int ss = INT_MAX;
        if(i>1)
        {
            ss = pre2 + abs(heights[i]-heights[i-2]);
        }

       
        int curri = min(fs, ss);
        pre2 = pre1;
        pre1 = curri;
    }

    return  pre1;
}