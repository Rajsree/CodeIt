class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums = {1,2,3,4,5,6,7,8,9};
        vector<int> child;
        vector<vector<int>> ds;
        // vector<vector<int>> dp(n+1,, vector<int>(k+1,-1 ));
        helper(nums, k, n, 0, child, ds);
        return ds;
    }
    
    void helper(vector<int>& nums, int k, int n, int ind, vector<int>& child, vector<vector<int>>& ds) {
       
        if(n==0) {
            if(child.size()==k) {
                ds.push_back(child);
            }
            return;
        }
        
        for(int i=ind; i<nums.size();i++) {
            if(i>ind && nums[i]==nums[i-1]) continue;
            if(nums[i]>n) break;
            
            child.push_back(nums[i]);
            helper(nums, k, n-nums[i],i+1, child, ds);
            child.pop_back();
        }
    }
};