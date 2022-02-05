class Solution {
public:
    int rob(vector<int>& nums) {

        int n = nums.size()-1;
     
        int prev = nums[0];
        int prev2 = 0;
        int cur;
        
        for(int i=1; i<=n; i++) {
            int pick = nums[i];
            pick += i>1 ? prev2 : 0;
            
            int nopick = 0 + prev;
            
            cur = max(pick,nopick);
            prev2 = prev;
            prev = cur;
            
        }
        return prev;
        
        // return helper(nums,n, dp);
    }
   /*    vector<int> dp(n+2, -1);        
        dp[0] = nums[0];
        
        int helper(vector<int> &nums, int i, vector<int> &dp) {
        
        if(i<0) return 0;
        if(dp[i]!=-1) {return dp[i];}
        if(i==0) {
            dp[0] = nums[0];
            return nums[i];
        }
        
        
        //pick the house
        int pick = nums[i] + helper(nums,i-2, dp);
        
        //not pick the house
        int nopick = 0 + helper(nums, i-1, dp);
        
        return dp[i]=max(pick,nopick);
        
    }*/
};

//sum of different non adjacent subset
    //pick = arr[i]+helper(i+2)
    //nopick = helpre(i+1)
//Max in the subset sum
//max(pick,nopick)