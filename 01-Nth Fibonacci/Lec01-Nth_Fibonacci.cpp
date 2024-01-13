//MEMOIZATION 
// TC =O(N)
// SC =O(N)- Recursive Stack Space , O(N) = Dp array

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





///Tabulation = Dp  
// TC =O(N), O(1)

#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n; 
   int pre2 = 0;
   int pre1 = 1;
   for(int i=2; i<=n; i++)
   {
     int curri = pre2 + pre1;

      pre2 = pre1;
      pre1 = curri;
     
   }

   cout<<pre1;
}