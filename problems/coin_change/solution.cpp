class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        int n= coins.size();
        vector<vector<int>> dp(n+1,vector<int>(amount+1, -1));
        int minsize = helper(coins, n-1, amount, dp);
         return minsize==1e9 ? -1 : minsize;
    }
    
    int helper(vector<int>& coins, int n, int target, vector<vector<int>>& dp) {
        
          if(dp[n][target]!=-1) {
            return dp[n][target];
        }

        
        if(n==0) {             
            if(target%coins[n]==0) {
                return dp[n][target]=target/coins[n];
            }          
             return 1e9;
        }
      
        
        int pick = 1e9;
        if(coins[n]<=target) {
             pick = 1 + helper(coins, n, target-coins[n], dp);            
        }
        
         int nopick = helper(coins, n-1, target, dp);
        
         return dp[n][target] = min(pick,nopick);
    }
};