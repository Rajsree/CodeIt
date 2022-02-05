/*class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size()-1;
        if(n==0) return false;
        int totalsum = 0, target = 0;
        for(auto i: nums) {
            totalsum+=i;
        }
        if(totalsum%2==0) {
            target = totalsum/2;
        } else {
            return false;
        }
        vector<vector<int>> dp(n+2, vector<int>(target+1,-1));
    
        return helper(nums, n-1, target, dp);
      
    }
    
    bool helper(vector<int> &nums, int i, int target, vector<vector<int>> &dp){       
    
        if(target == 0) { return true; }
        
        if(i==0) {return nums[i]==target;}
        
        if(dp[i][target]!=-1) return dp[i][target];
           
       bool pick = false;
        if(nums[i]<=target) {
            pick = helper(nums, i-1, target-nums[i], dp);             
        }
        bool nopick = helper(nums, i-1, target, dp);        
        return dp[i][target]=pick||nopick;
       
    }
};*/

//positive 
// sum1 = sum2
//
// s  ood>false, even> true;
// target = s/2

// n, s, target
// helper(nums, n, target)
// pick = nums[i]+helper(nums, n, target-nums[i])
// notpick = 0+helper(nums, n, target);









class Solution {
    public:
    bool canPartition(vector<int> &arr) {
        int n=arr.size()-1;
        int totalsum = 0, target;
        vector<int> ds;

       for(auto i: arr) {
            totalsum+=i;
        }
        if(totalsum%2==0) {
            target = totalsum/2;
        } else {
            return false;
        }
        vector<vector<int>> dp(n+2, vector<int>(target+1, -1));
        return helper(arr, n, target,ds, dp);
    }
    
    bool helper(vector<int> &nums, int i, int target, vector<int> &ds, vector<vector<int>> &dp) {
        if(target == 0) {
              return true;
        }
        if(i==0) {
            return nums[i]==target;
        }
        if(dp[i][target]!=-1) return dp[i][target];
        
        bool pick = false;
        //Pick
        if(nums[i]<=target) {
            pick = helper(nums, i-1, target-nums[i],ds,dp);
            
        }
        //NoPick
        bool nopick = helper(nums, i-1, target,ds,dp);
        
        return dp[i][target]=pick||nopick;
        
    }
};


// target   0  1 2 3 4 5 6 7 8 9 10 11
//i         



// return 




























