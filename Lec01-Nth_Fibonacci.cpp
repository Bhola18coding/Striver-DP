#include<bits/stdc++.h>
using namespace std;


int fib (int n, vector<int>&dp)
{
   if(n==1 || n==2)
   {
           return 1;
   }

   if(dp[n]!= -1)
   {
       return dp[n];    
   }
    
    int f1 = fib(n-1, dp);
    int f2 = fib(n-2, dp);

    int ans = f1+f2;

    dp[n] = ans;

    return dp[n];

}

int main()
{
       int n;
       cin>>n;  
       vector<int>dp(n+1, -1);
       cout<<fib(n, dp);
       return 0;
}