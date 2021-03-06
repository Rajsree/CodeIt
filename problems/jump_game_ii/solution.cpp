class Solution {
public:
     
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,10001);
        
        
            dp[n-1] = 0;
        
        for(int i=n-2; i>=0; i--) {
            for(int j=1; j<=nums[i]; j++) {
                // locJump = dp[min(i+j,n-1)];
                // locJump++;
                dp[i] = min(dp[i], 1+ dp[min(i+j,n-1)]);
            }            
            
        }
        return dp[0];
    }
    
 
   
};


