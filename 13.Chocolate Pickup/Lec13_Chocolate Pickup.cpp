///MEMOIZATION = DP 
// TC = O(N*M*M)+9(COMBO)
// SC = O(N*M*M)+O(N)

/*
#include <bits/stdc++.h> 

int f(int i, int j1, int j2, int r, int c,  vector<vector<int>> &a,  vector<vector<vector<int>>> &dp)
{
    //Edge Case 
    if(j1<0 || j2<0 || j1>=c || j2>=c)
    {
        return -1e9; // For max we have to comapre out of bound with negative 
    }

    // Base Case 
    if(i==r-1)
    {
        // If the cell is common = we have to take one
        if(j1==j2)
        {
            return a[i][j1];
        }
         // If the cell is not common = we have to take both a & b
        else 
        {
           return a[i][j1]+a[i][j2];
        }
    }

    // If Dp is filled the directly return  
    if(dp[i][j1][j2]!=-1)
    {
        return dp[i][j1][j2];
    }


    //Explore all paths of alice and Bob Together
    int maxi = -1e9;
    for(int dj1 = -1; dj1<=1; dj1++) // Alice
    {
        for(int dj2 = -1; dj2<=1; dj2++) // Bob
        {
            int val =0;
           if(j1==j2) //same cell
           {
             val+=a[i][j1];
           }
           
           else 
           {
               val+= a[i][j1]+a[i][j2];
           }

           val += f(i+1, j1+dj1, j2+dj2, r, c, a, dp);
           maxi = max(maxi, val);

        }

       
    }
    dp[i][j1][j2]=maxi;
     return  dp[i][j1][j2];
}



int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
    // Write your code here.
    vector<vector<vector<int>>>dp(r, vector<vector<int>>(c, vector<int>(c, -1)));
    int ans = f(0, 0, c-1, r, c, grid, dp);
    return ans;
}*/