//MEMOIZATION 
// TC = O(N)
// SC = O(N)+O(N)


// class Solution {
// public:
    
//     ///Maximum Adjacent  Element
//     int maxi(vector<int>&nums, int idx , vector<int>&dp)
// {

//    //Base case
//     if(idx==0)
//     {
//         return nums[idx];
//     }
        
//      if(idx<0)
//      {
//             return 0;
//      }
        
        

//      if(dp[idx]!=-1)
//      {
//          return dp[idx];
//      }
//     //pick 
//     int pick = nums[idx]+maxi(nums, idx-2, dp);
//     //non pick 
//     int np = 0+maxi(nums, idx-1, dp);

//     int ans = max(pick, np);
//     dp[idx] = ans;
//     return dp[idx];
    
// }
    
    
//     int rob(vector<int>& nums) {
        
//         vector<int>dp(nums.size(), -1);
//         int i = nums.size()-1;
//         return maxi(nums, i, dp);
        
//     }
// };







///Tabulation & Space Optimized 
//TC = O(N), SC = O(1)
  
   /*int rob(vector<int>& nums) {
        
        
        int n = nums.size();
       // vector<int>dp(nums.size(), -1);
        // int i = nums.size()-1;
        // return maxi(nums, i, dp);
        
        int prev = nums[0];
        int prev2 = 0;
        for(int i=1; i<n; i++)
        {
            int take = nums[i];
            if(i>1)
            {
                take+=prev2;
            }
            
            int nontake = 0+prev;
            
            int curr= max(take, nontake);
            
            //Now we will make prev2 = prev & prev = curr
            prev2 = prev;
            prev = curr;
          }
        
        
        return prev;
     
    }
};*/