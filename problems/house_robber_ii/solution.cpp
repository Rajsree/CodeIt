class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size()-1;
        if(n==0) return nums[0];
        vector<int> temp1(nums.begin(), nums.end()-1);
        vector<int> temp2(nums.begin()+1, nums.end());
        vector<int> dp1(n+2,-1);
       vector<int> dp2(n+2,-1);
        // int temp1max = helper(temp1,temp1.size()-1, dp1);    
        // int temp2max = helper(temp2,temp2.size()-1, dp2);
        dp1[0] = temp1[0];
        
        for(int i=1; i<=temp1.size()-1; i++) {
            int pick = temp1[i];
            pick+= i>1 ? dp1[i-2] : 0;
            int nopick = 0 + dp1[i-1];
            dp1[i] = max(pick,nopick);
        }
        
        dp2[0] = temp2[0];
        
        for(int i=1; i<=temp2.size()-1; i++) {
            int pick = temp2[i];
            pick+= i>1 ? dp2[i-2] : 0;
              int nopick = 0+ dp2[i-1];
            dp2[i] = max(pick,nopick);
        }
        
        return max(dp1[temp1.size()-1],dp2[temp2.size()-1]);
        
    }
    int helper(vector<int> &houses, int i, vector<int> &dp) {
        if(dp[i]!=-1) {
            return dp[i];
        }
        // dp[houses.size()-1] = houses[houses.size()-1];
        if(i==0) {
            dp[0] = houses[0];
            return dp[0];
        }
        
        if(i<0) {
            return 0;
        }
    
        
        int pick = houses[i];
        pick+= i>1 ? helper(houses, i-2, dp) : 0;
        int nopick = 0 + helper(houses, i-1, dp);
        return dp[i]=max(pick,nopick);
        
    }
};

//get sum of non adjacent subarrays
// temp1 = 0 to n-1;
//temp2 = 1 to n;

// pick = num[i]+helper(nums, i+2);
//nopick = 0 + helper(nums, i+1);
//max(pick,nopick);


//max(temp1,temp2)
 