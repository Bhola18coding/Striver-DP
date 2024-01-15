//Memoization 
// TC = O(N)
// SC= O(N)+O(N)


/*class Solution {
public:
    
    
    //Array1 
    int maxi_1(vector<int>&nums, int l, int h, vector<int>&dp1)
    {
        
        
        if(l>=nums.size()-1)
        {
            return 0;
        }
        
        if(dp1[l]!=-1){
            return dp1[l];
        }
        
         //pick 
        int p = nums[l]+maxi_1(nums, l+2, h, dp1);
        //np
        int np = 0+maxi_1(nums, l+1, h,dp1);
        
        int ans1 = max(p, np);
        dp1[l]=ans1;

        return dp1[l];
    }
    
    
    
    //Array2
    int maxi_2(vector<int>&nums, int l, int h, vector<int>&dp2)
    {
         if(l>=nums.size())
        {
            return 0;
        }
        
        if(dp2[l]!=-1){
            return dp2[l];
        }
        
        //pick 
        int p = nums[l]+maxi_2(nums, l+2, h, dp2);
        //np
        int np = 0+maxi_2(nums, l+1, h,dp2);
        
        int ans2 = max(p, np);
        dp2[l]=ans2;

        return dp2[l];
    }
    
    
    
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>dp1(nums.size()-1, -1);
        vector<int>dp2(nums.size(), -1);
        
        if(n==1) return nums[0];
        
        int max1 = maxi_1(nums, 0, n-2, dp1);
        int max2 = maxi_2(nums, 1, n-1, dp2);
        
        int ans = max(max1, max2);
        
        return ans;
        
    }
};*/






//Space Optimization + Tabulation = DP 
// TC = O(N)
// SC = O(1)
    
 /*
   int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
       int n = nums.size();
    
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
    
    int rob(vector<int>& nums) {
       vector<int> arr1;
       vector<int> arr2;
       int n = nums.size();
        if(n==1)
           return nums[0];

        for(int i=0; i<n; i++){

            if(i!=0) arr1.push_back(nums[i]);
            if(i!=n-1) arr2.push_back(nums[i]);
        }

         int ans1 = maximumNonAdjacentSum(arr1);
         int ans2 = maximumNonAdjacentSum(arr2);

        return max(ans1,ans2);
    }
};*/